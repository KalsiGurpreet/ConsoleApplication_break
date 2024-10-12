/* 
also this program 
is only for checking 
positive values as -1 can't be checked 
as it is used as sentinel value.
*/

/* we have used for loop for 
infinite iterations as everything is taken
as 1 if no value has been put in for loop.*/


#include<stdio.h>
int main(void)

{
	int counter = 0;
	int number = 0;
	int max = -9999999;

	for (;;)
	{
		puts("Please enter the number");
		scanf_s("%d", &number);
		if (number == -1)
			break;
		counter++;
		if (number > max)
			max = number;
	}
	if (counter)
		printf("Largest number is %d\n", max);
	else
		puts("You haven't enter any number except -1");
	return 0;

}