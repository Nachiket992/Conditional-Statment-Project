#include<stdio.h>

int main() {
	
	int a;
	
	printf("Check whether a number is 'Even' or 'Odd'.\n\n");
	printf("Enter the Number :- ");
	scanf("%d", &a);
	(a % 2 == 0) ? printf("\nThis 'Number:- %d' is 'Even'.\n\n", a) : printf("\nThis 'Number:- %d' is 'Odd'.\n\n", a);
	printf("Thank you."); 
	
}