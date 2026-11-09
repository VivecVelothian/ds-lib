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
    mem_node_t *newBuffer = malloc(2 * self->capacity * sizeof(mem_node_t));

    // Attach new buffer to self
    mem_node_t * oldBuffer = self->buffer;
    self->buffer = newBuffer;

    // Copy from current buffer
    for(int i = 0; i < self->size; ++i)
    {
        // Get the index for insertion
        int new_idx = get_hash();

        // Insert and (maybe?) probe
        insert(self, oldBuffer[i].key); // Probably update insert to handle the node insertion
    }

    // Free previous buffer
    for(int i = 0; i < self->size; ++i)
    {
        free(self->buffer[i]);
    }
    free(self->buffer);

    // Update capacity
    self->capacity *= 2;

    // Repoint buffer to new memory block
    self->buffer = newBuffer;
    return newBuffer;
}