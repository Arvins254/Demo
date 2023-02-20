#include <stdio.h>
int main(void)
{	char z,M,O,K;
	int y, age;	
	long int x;

	printf("Siz of char: %lu byte(s)\n", (unsigned long)sizeof (z));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof (y));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof (x));
	printf("My name is: %c%c  am father to: %c, and am: %d years of age.\n", 'M', 'O', 'K',26);
	return(0);
}
