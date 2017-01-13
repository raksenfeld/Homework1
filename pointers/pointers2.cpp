/**
 * @file pointers2.cpp
 * @author The CS2 TA Team <cs2tas@caltech.edu>
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Pointer-fu Exercise 2: Uninitialized pointers
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief Allocates and frees an array of 10 ints if timestamp is odd.
 */
int main(int argc, char *argv[])
{
	// 'a' was not initialized to nullptr, so it could have any value.
	//    Thus, when the if statement ran, 'a' could be freed even if 
	//    memory was never allocated to 'a'. If whatever memory 'a' 
	//    pointed to was important to not free, this could cause a 
	//    problem. I initialized 'a' to nullptr to fix this.
	
	
    int *a = nullptr;
    time_t t = time(nullptr); // Get the current Unix timestamp

    /***** CHANGE NOTHING BELOW THIS LINE *****/
    if (t % 2)
    {
        // Allocate an array of 10 ints if the timestamp is an odd number.
        // This is a contrived way to conditionally allocate some memory.
        a = (int *) malloc(10 * sizeof(int));
        cout << "allocating some memory!\n";
    }
    /***** CHANGE NOTHING ABOVE THIS LINE *****/

    // If we allocated memory, free it!
    if (a)
        free(a);

    return 0;
}
