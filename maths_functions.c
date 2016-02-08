#include <stdio.h>

int main()
{
	int a, b;
	printf("input two int values: \n");
	scanf("%i%i",&a,&b);
	printf("%i + %i = %i\n",a,b,a+b);
	printf("%i - %i = %i\n",a,b,a-b);
	printf("%i * %i = %i\n",a,b,a*b);
	printf("%i / %i = %i\n",a,b,a/b);
<<<<<<< HEAD
	printf("Remainder of %i and %i = %d\n",a,b,a%b);
=======
	printf("Remainder of %i and %i = %d\n",a,b,a%d);
>>>>>>> testing
	return 0;
}