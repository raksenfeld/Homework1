/**
 * @file arrays1.cpp
 * @author The CS2 TA Team <cs2tas@caltech.edu>
 * @date 2014-2015
 * @copyright This code is in the public domain.
 *
 * @brief An array example.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

#define TEST_SIZE 60

using namespace std;



/**
 * @brief Returns the maximum value of a positive integer array.
 * 
 * @param arr the array
 * @param n the number of elements in the array
 * 
 * @return the maximum value of the integers in the array
 */
int max_value(int arr[], int n)
{
	int max = 0;
	// Iterates over all the integers in the array
	for (int i = 0; i < n; i++)
	{
		// If the current value is larger than the maximum thus far, 
		//     replace the maximum with the current value
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

/**
 * @brief Returns arithmetic mean of the elements of an integer array
 * 
 * @param arr the array
 * @param n the number of elements in the array
 * 
 * @return the arithmetic mean of the elements in the array
 */
int arithmetic_mean(int arr[], int n)
{
	int sum = 0;
	// Sums all the elements in the array
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	// Returns the arithmetic mean
	return sum / n;	 
}

/**
 * @brief Fills an integer array with an ascending sequence, 
 * overwriting previous contents
 * 
 * @param arr the array to overwrite
 * @param n the number of elements in the array
 */
void ascending_seq_overwrite(int arr[], int n)
{
	// Initialize counter for ascending sequence
	int x = 1;
	// Loop over elements of array, replacing values with 
	//    those of an ascending sequence
	for (int i = 0; i < n; i++)
	{
		arr[i] = x;
		x++;
	}
}



/**
 * @brief Sets up and runs an array example.
 */
int main(int argc, char ** argv)
{

    /*-------- CHANGE NOTHING BELOW THIS LINE FOR PART 1 --------*/
    int test_values[TEST_SIZE];
    int real_size;

    // seed the PRNG
    srand(time(nullptr));

    // initialize the test array to garbage
    for (int i = 0; i < TEST_SIZE; i++)
    {
        test_values[i] = rand();
    }

    // determine a real size
    real_size = TEST_SIZE - (rand() % 20);

    // initialize the meaningful part of the test array to random numbers
    // all of which are less than one million
    for (int i = 0; i < real_size; i++)
    {
        test_values[i] = rand() % 1000000;
    }
    /*-------- CHANGE NOTHING ABOVE THIS LINE FOR PART 1 --------*/


    
    // Test for ascending_seq_overwrite function:
    ascending_seq_overwrite(test_values, real_size);
    cout << "ascending_seq_overwrite called on array of size: " 
    << real size << ", array = " << test_values << endl;
    
    // Test for max_value function:
    cout << "max = array size above; max_value function= " 
    << max_value(test_values, real_size) << endl;
    
    // Test for arithmetic_mean function:
    cout << "mean = (array size / 2) + 0.5; arithmetic_mean function = " 
    << arithmetic_mean(test_values, real_size) << endl;
    
    return 0
}
