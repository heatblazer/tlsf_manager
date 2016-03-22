#ifndef TLSF_MEMORY
#define TLSF_MEMORY

//warper for the tlsf memory manager
//good for RTOS and blocked memory management
//prevents fragmentation
#include <stdio.h>

namespace tlsf
{
    typedef struct _pentry
    {
        void* pData;
        int   freeBlock;
    } PoolEntry;

    class TLSFMemory {
         static bool m_poolIsInit; //this must be true before all calls so force the user to call the init
         static size_t m_defaultPoolSize;
         static PoolEntry** m_entries ;
         static int         m_numPools;
         static PoolEntry* m_TEST;

    public:
         static size_t       MEMSetPoolSize(size_t poolSize);
         static size_t       MEMGetUsedSize(void*);
         static size_t       MEMInitPool(size_t, void*);
         static void         MEMDestroyPool(void*);
         static size_t       MEMAddNewMemArea(void*, size_t, void*);

         static void*        MEMAllocEx(size_t, void *);
         static void         MEMFreeEx(void*, void*);
         static void*        MEMReallocEx(void*, size_t, void*);
         static void*        MEMCallocEx(size_t, size_t, void*);

         static void*        MEMAlloc(size_t);
         static void         MEMFree(void*);
         static void*        MEMRealloc(void*, size_t);
         static void*        MEMCalloc(size_t, size_t);

    };
}; //end tlsf{}


#endif // TLSF_MEMORY

