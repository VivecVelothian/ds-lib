#include "mem_map.h"

/*
*/

void init_mem_map(mem_map_t * self, int size)
{
    self->buffer = malloc(size * sizeof(mem_node_t));;
    self->size = size;
    self->capacity = size;
}

//=== Mutators ===
void insert(mem_map_t * self, void * mem_ptr)
{
    // Compute Hash
    // Insert to array (probe in case of collision)
}

void erase(mem_map_t * self, void * mem_ptr)
{
    // Compute Hash
}

//=== Hashing ===
int get_hash(void * mem_ptr)
{
    // Compute Hash
}

mem_map_t * rehash(mem_map_t * self)
{
    // Create new buffer of size * 2
    // For each ptr in previous
}