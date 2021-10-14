#include <stdio.h>

int main()
{
    char a = 127;
    char b = 127;
    signed char c = 127;
    unsigned char d = 127;
    //printf("%c %c %c %c \n",a,b,c,d);
    printf("%i %i %i %i \n",a,b,c,d);
    a++;
    b++;
    c++;
    d++;
    //printf("%c %c %c %c \n",a,b,c,d);
    printf("%i %i %i %i \n",a,b,c,d);
    return 0;
}
