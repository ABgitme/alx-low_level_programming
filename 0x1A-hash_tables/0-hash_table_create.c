#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
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