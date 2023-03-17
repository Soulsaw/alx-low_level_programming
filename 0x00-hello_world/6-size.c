#include<stdio.h>
/*
 *This is the entry point of the main program
 *
 *
 *This program prints the differents size of the variable type in C progrsm
 */
int main(void)
{
		printf("Size of char:%d byte(s)\n",sizeof(char));
		printf("Size of an int: %d byte(s)\n",sizeof(int));
		printf("Size of a long int: %d byte(s)\n",sizeof(long int));
		printf("Size of a float: %d bytes(s)\n",sizeof(long long));
		return 0;
}
