/**
 * @file pointers4.cpp
 * @author The CS2 TA Team <cs2tas@caltech.edu>
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Pointer-fu Exercise 4: Typecasting vs. address-of
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief performs type castings
 */
int main(int argc, char *argv[])
{
	// In line 31, since 'a' is already an int, there was no need to 
	//    typecast it. Additionally, we just want its address, not for
	//    it to become a pointer, so the '*' shouldn't be there.
	//    In line 41, we want b to point to the address of the int * c. 
	//    Thus, I typecasted c before getting the address.
	
	
    int a = 5, *b;
    void *c;

    // Now make `b` point to `a`.
    b = &a;

    /***** CHANGE NOTHING BELOW THIS LINE *****/
    cout << "The value pointed by `b` is " << *b;
    /***** CHANGE NOTHING ABOVE THIS LINE *****/

    // Allocate an array of 10 ints.
    c = malloc(10 * sizeof(int));

    // Get the address of the array.
    b = &((int *) c);

    /***** CHANGE NOTHING BELOW THIS LINE *****/
    b[2] = 5;
    /***** CHANGE NOTHING ABOVE THIS LINE *****/

    return 0;
}
