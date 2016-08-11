//program to illustrate a structure

#include <stdio.h>

int main(void)
{
	struct date
	{
	int month;
	int day;
	int year;
	};

	struct date today; //defining a structural variable name today type date

	today.month = 9;
	today.day = 25;
	today.year = 2004;

	printf("Today's date is %i/%i/%.2i\n", today.month, today.day, today.year % 100);

	return 0;
}
