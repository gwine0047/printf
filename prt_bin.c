#include "main.h"

int prt_bin(unsigned int a)
{
        int num = a;
        int binary[sizeof(int) * 8];
        int temp, j, i = 0;
        while (num > 0)
        {
                binary[i] = num % 2;
                num = num / 2;
                i++;
        }
        temp = i;
        for (j = temp - 1; j >= 0; j--)
        {
                put_char(48 + binary[j]);
        }
        return (i);
}
