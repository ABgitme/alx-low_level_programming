#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *current_node, *new_node;
    char *value_copy = NULL;

    if (!ht || !key || !*key || !value)
		return (0);

    index = key_index((const unsigned char *)key, ht->size);

    /*Check for collision*/
    current_node = ht->array[index];
    while (current_node) {
        if (strcmp(current_node->key, key) == 0) {
            /*Collision detected, update the value*/
            free(current_node->value);
            value_copy = strdup(value);
            if (!value_copy)
                return 0;
            current_node->value = value_copy;
            return 1;
        }

        current_node = current_node->next;
    }

    /*No collision, continue with regular insertion*/

    /*Allocate memory for the new node*/
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node) {
        free(value_copy);
        return 0;
    }

    /*Copy the key and value to the new node*/
    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node);
        free(new_node->key);
        return (0);
    }
    new_node->next = NULL;

    /*Add the new node to the beginning of the linked list*/
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}