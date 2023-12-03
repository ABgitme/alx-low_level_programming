#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *current_node, *new_node;

    if (!key || !*key) {
        return 0;
    }

    index = key_index2(key, ht->size);

    /*Check for collision*/
    current_node = ht->array[index];
    while (current_node) {
        if (strcmp(current_node->key, key) == 0) {
            /*Collision detected, update the value*/
            free(current_node->value);
            current_node->value = strdup(value);
            return 1;
        }

        current_node = current_node->next;
    }

    /*No collision, continue with regular insertion*/

    /*Allocate memory for the new node*/
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node) {
        return 0;
    }

    /*Copy the key and value to the new node*/
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    /*Add the new node to the beginning of the linked list*/
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}