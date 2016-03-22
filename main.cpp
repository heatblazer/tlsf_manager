#include <iostream>
#include "tlsf_memory.h"

using namespace std;

int main()
{
    void* mem = tlsf::TLSFMemory::MEMAlloc(111);
    return 0;
}

