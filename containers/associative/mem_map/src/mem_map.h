/*
 * 
 * 
 *
*/

typedef struct mem_map
{
    void * keys;
    int * values;
    int size;
    int capacity;
} mem_map_t;

void init_mem_map_t(mem_map_t * self, int size);

//=== Mutators ===
void insert(mem_map_t * self, void * mem_ptr);
void erase(mem_map_t * self, void * mem_ptr);


//=== Hashing ===
int get_hash(void * mem_ptr);
mem_map_t * rehash();