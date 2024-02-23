#include <stdio.h>

int main(int argc, char *argv[])
{
    int state = 0;
    char c = 'A';
    for (;;) // ingat char A itu sudah memiliki nilai tetap yaitu 65
        printf("%c", c);
    return state;
}

