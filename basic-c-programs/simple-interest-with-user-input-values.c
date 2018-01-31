#include<stdio.h>

/* C Program for calculation of simple interest with user input values */
/* Author: Dhananjay Date: 01/02/2018 */
main() {
	int principal, number_of_years;
	float rate_of_interest, simple_interest;

	printf("Enter the values of principal, number of years and rate of interest:");
	scanf("%d %d %f", &principal, &number_of_years, &rate_of_interest);

	/* formula for simple interest calculation */
	simple_interest = principal * number_of_years * rate_of_interest / 100;

	printf("Calculated value of simple_interest from user given values is = %f\n", simple_interest);
}
