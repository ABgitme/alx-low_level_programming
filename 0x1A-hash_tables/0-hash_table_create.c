#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: size of the table
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;

    hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
    if (!table)
        return NULL;
    table->size = size;
    table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
    if (!table->array)
    {
        free(table);
        return NULL;
    }
    for (i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return table;
}