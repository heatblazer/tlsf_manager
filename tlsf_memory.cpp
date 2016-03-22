#include "tlsf_memory.h"
#include "External/tlsf.h"
#include "External/target.h"

namespace tlsf
{
    bool TLSFMemory::m_poolIsInit = false;
    size_t TLSFMemory::m_defaultPoolSize = 0;
    int     TLSFMemory::m_numPools;
    PoolEntry**  TLSFMemory::m_entries = {0};
    PoolEntry*   TLSFMemory::m_TEST = 0;

    size_t       TLSFMemory::MEMSetPoolSize(size_t poolSize)
    {
        if ( poolSize <= 0)
            return 0; //should not be possible
        else {
            m_defaultPoolSize = poolSize;
        }
    }

    size_t       TLSFMemory::MEMGetUsedSize(void*)
    {

    }

    size_t       TLSFMemory::MEMInitPool(size_t, void*)
    {
        m_poolIsInit = true;
    }

    void         TLSFMemory::MEMDestroyPool(void*)
    {

    }

    size_t       TLSFMemory::MEMAddNewMemArea(void*, size_t, void*)
    {

    }

    void*        TLSFMemory::MEMAllocEx(size_t, void *)
    {

    }

    void         TLSFMemory::MEMFreeEx(void*, void*)
    {

    }

    void*        TLSFMemory::MEMReallocEx(void*, size_t, void*)
    {

    }

    void*        TLSFMemory::MEMCallocEx(size_t, size_t, void*)
    {

    }

    void*        TLSFMemory::MEMAlloc(size_t)
    {

    }

    void         TLSFMemory::MEMFree(void*)
    {

    }

    void*        TLSFMemory::MEMRealloc(void*, size_t)
    {

    }

    void*        TLSFMemory::MEMCalloc(size_t, size_t)
    {

    }
};


