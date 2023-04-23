#include "main.h"

int main()
{
	float a = 83.4848;
	int b, c;
	char name[20] = "Godwin";
	char alp = 'e';

	
	b = printf("%f\n", a);
    printf("The return value of %f is %d\n", a, b);

    b = printf("%s\n", name);
    printf("The return value of %s is %d\n", name, b);
 
	b = printf("%c\n", alp);
    printf("The return value of %c is %d\n", alp, b);

	puts("-------------------------------------------------");

	c = _printf("%f\n", a);
	printf("The return value of %f is %d\n", a, c);

	c = _printf("%s\n", name);
	printf("The return value of %s is %d\n", name, c);

	c = _printf("%c\n", alp);
	printf("The return value of %c is %d\n", alp, c);
	
    return(0);
}
