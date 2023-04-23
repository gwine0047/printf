#include "main.h"

int main()
{
	float a = 8.47388;
	int b;
	char name[20] = "Jenny";
	char alp = 'd';

	b = printf("%f\n", a);
	printf("The return value of %f is %d\n", a, b);

	b = printf("%s\n", name);
	printf("The return value of %s is %d\n", name, b);

	b = printf("%c\n", alp);
	printf("The return value of %c is %d\n", alp, b);
	puts("\n---------------------------------------------------");

    b =_printf("%f\n", a);
    printf("The return value of %f is %d\n", a, b);

    b = _printf("%s\n", name);
    printf("The return value of %s is %d\n", name, b);

    b = _printf("%c\n", alp);
    printf("The return value of %c is %d\n", alp, b);

	return(0);
}
