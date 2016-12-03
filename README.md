# SafeProgrammingTools

**accessFreedArray.c** contains an example of trying to access an array that has already been deallocated.

**memAlloc.c** contains an example of allocating and deallocating an array onto the heap (e.g. memory management).

**memLeak.c** contains an example of a memory leak.

**overrunBound.c** contains an example of attempting to access an element that is outside the bounds of the allocated array.

**racecondition.c** contains an example of a possible race condition.

After installing Electric Fence and Valgrind:

To use **Electric Fence**: In command line, use the -lefence argument w/ the linker when compiling  
See: http://elinux.org/Electric_Fence  

To use Valgrind tools:  
  **Memcheck** -- After compiling, in terminal: valgrind ./filename --leak-check=yes  
  **Helgrind** -- After compiling, in terminal: valgrind --tool=helgrind ./filename  
