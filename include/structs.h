#define RMEM_IMPLEMENTATION

typedef struct 
{
	MemPool PersistentMemPool;
	MemPool ScratchMemPool;
	MemPool FrameMemPool;

	ObjPool EntityPool;
	ObjPool ComponentPool;
	ObjPool SystemPool;
} GameMemory;
