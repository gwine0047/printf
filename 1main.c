#include "main.h"
#include <stdio.h>

int main(void)
{
        int value, value2;
        char name[] = "Okoeguale Godwin";
        char alph = 'a';

        puts("USING STANDARD C-PRINTF:\n-----------------------------------");
        value = printf("Okoeguale\n");
        printf("value1 = %d\n", value);

        puts("Using character format specifier\n --------------------------");
        value = printf("%s did %c good 100 %% job\n",name, alph);
        printf("value1 = %d\n", value);

        puts("USING STANDARD C-PRINTF:\n-----------------------------------");
        value2 = _printf("Okoeguale\n");
        printf("value2 = %d\n", value2);

        puts("Using character format specifier\n --------------------------");
        value2 = _printf("%s did %c good 100 %% job\n",name, alph);
        printf("value2 = %d\n", value2);
		return (0);
}
