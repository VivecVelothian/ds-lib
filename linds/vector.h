#include <stdlib.h>

typedef struct Vector
{
    int* buffer;
    size_t size;
    size_t capacity;
} vector_t;

/*
* Constructors
*/
void init_vector_t(vector_t* self, int size)
{
    self->buffer = (int*)malloc(size * sizeof(int));
    self->size = size;
    self->capacity = size;
}

/*
* Push Back: Place a new value at the 'back' of the vector.
* resizing will take place if size and capacity are equal
*/
void push_back(vector_t* vec, int val)
{
    // Resize needed?
    if(vec->capacity == vec->size)
    {
        // resize
    }

    // Increment size and assign value to that index
    vec->buffer[++(vec->size)] = val;
}

/*
* Resize
*/

/*
* Find a value in the vector
* Return: found -> index, not found -> -1
*/
int find(vector_t* vec, int val)
{
    for(int i = 0; i < vec->size; ++i)
    {
        if(vec->buffer[i] == val)
        {
            return i;
        }
    return -1;
}