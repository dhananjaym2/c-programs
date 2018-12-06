/**
 * Program to experiment with pointers and incrementing them.
**/

#include<stdio.h>

int main() {
	char * ptr="Aditya";
	
	printf("*ptr is %c\n", *ptr);
//	printf("*ptr++ is %c\n", *ptr++);
//	printf("(*ptr++) is %c\n", (*ptr++));
//	printf("*(ptr++) is %c\n", *(ptr++));
//	printf("*(++ptr) is %c\n", *(++ptr));
	printf("++*ptr is %c\n", (*ptr)++); // Segmentation fault (core dumped)
	return 0;
}
