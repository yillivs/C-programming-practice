/* This program adds two integer values
 and displays the results*/

#include <stdio.h>

int main(void)
{
	//declare variables
	int value1, value2, sum;
	//assign values
	value1 = 50;
	value2 = 25;
	//calculate sum
	sum = value1+value2;
	//display sum
	printf("the sum of %i and %i is %i\n", value1, value2, sum);

	return 0;
}
