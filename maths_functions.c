//This is the line causing issue in the conflict branch
#include <stdio.h>

int main()
{
	int a, b, d, e, f;
	printf("input two int values: \n");
	scanf("%i%i",&a,&b);
	printf("%i + %i = %i\n",a,b,a+b);
	printf("%i - %i = %i\n",a,b,a-b);
	printf("%i * %i = %i\n",a,b,a*b);
	printf("%i / %i = %i\n",a,b,a/b);
	printf("Remainder of %i and %i = %d\n",a,b,a%d);
	printf("input three more int values\n");
	scanf("%i%i%i",&d,&e,&f);
	printf("code to work out minimum\n");
	return 0;
}