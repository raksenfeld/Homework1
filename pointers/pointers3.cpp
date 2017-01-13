/**
 * @file pointers3.cpp
 * @author The CS2 TA Team <cs2tas@caltech.edu>
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Pointer-fu Exercise 3: "Entangled" pointers
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief Set two pointers to the same memory and free them.
 */
int main(int argc, char *argv[])
{
	// Since 'a' and 'b' point to the same memory, the memory only 
	//    needs to be freed once. Freeing already freed memory could 
	//    cause problems if that memory was reallocated in the meantime
	//    (not necessarily by your program). I deleted the second call
	//    to free the memory in question.
	
	
    int *a, *b;

    // Allocate an array of 10 ints.
    a = (int *) malloc(10 * sizeof(int));

    // Now `b` points to the same array of ints.
    b = a;

    free(a);

    return 0;
}
