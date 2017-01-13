/**
 * @file qfsolve.cpp
 * @author Rita Aksenfeld <raksenfe@caltech.edu>
 * @date 2017
 *
 * @brief Solves quadratic equations.
 */

#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Solves the given quadratic equation.
 *
 * This function, given real coefficients A, B, C to the equation
 * A*x*x + B*x + C = 0, returns the real part of a solution to the
 * equation thus defined. Where two real solutions exist, the one
 * closer to positive infinity is chosen.
 *
 * @param a the quadratic coefficient.
 * @param b the linear coefficient.
 * @param c the constant coefficient.
 *
 * @return the real part of a solution to the defined quadratic equation,
 *         as described.
 */
double qfsolve(double a, double b, double c)
{
	// If the equation has real solution(s), find it/them and return 
	//    largest value.
	int x1, x2;
	if (((b * b) - 4 * a * c) >= 0)
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		return max(x1, x2);
	}
	
	// If only imaginary solutions, return the real part.
	else
	{
		return -b / (2 * a);
	}
}


int main(int argc, char ** argv)
{
    cout <<"1x^2 + 0x + -1 = 0, x = " << qfsolve(1.0, 0.0, -1.0) << endl;
    cout <<"1x^2 + 0x + 1 = 0, x = " << qfsolve(1.0, 0.0, 1.0) << endl;
    cout <<"1x^2 + 6x + 9 = 0, x = " << qfsolve(1.0, 6.0, 9.0) << endl;
    cout <<"3x^2 + 5x + 2 = 0, x = " << qfsolve(3.0, 5.0, 2.0) << endl;
    cout <<"12x^2 + -19x + -18 = 0, x = " << qfsolve(12.0, -19.0, -18.0) << endl;
    
    return 0;
}








