/* facCalc.c
 * 
 * A simple problem to show the gdb debugger
 *
 * Adam Lavely - adam.lavely@psu.edu
 * Spring 2018
 *
*/

#include <stdio.h>
#include "facCalc.h"

int facCalc(int inputVal)
{
	int counter, output;
	//output=0;

	// Calculate the factorial
	for (counter=1; counter<inputVal; counter++)
		// Line 20
		output=output*counter;    

	// Return the variable to the main function
	return output;
}