#include <stdio.h>

void print_binary(unsigned long int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    unsigned long int mask = 1 << (sizeof(unsigned long int) * 8 - 1);
    int leadingZeros = 1;

    while (mask) {
        if (n & mask) {
            leadingZeros = 0;
            printf("1");
        } else if (!leadingZeros) {
            printf("0");
        }

        mask >>= 1;
    }
}
int main()
{
	print_binary(169474748484);
	return (0);
}

