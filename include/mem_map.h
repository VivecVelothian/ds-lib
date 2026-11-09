/*
 * A hash-table for storing memory nodes, mem_node_t 
 * 
 *
*/

//=== mem_node_t ===
// key:   points to a block of memory
// Value: count of references to key
typedef struct mem_node
{
    void * key;
    int value;
} mem_node_t;

//=== mem_map_t ===
// maps a memory address to a node that contains its reference count
typedef struct mem_map
{
    mem_node_t * buffer;
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