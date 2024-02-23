#include <stdio.h>

int main(int argc, char *argv[])
{
    int state = 0;
    for(state = 0; state < 10; state+=2)
            printf("%d\n", state);
    return state;

    // === CARA LAIN ====
    // int state = 0;
    // for (state = 0; state < 10; state++)
    //     if (state%2 == 0)
    //         printf("%d\n", state);
    // return state;
}


/*
for itu jumlah perulangannya sudah kita tahu
do while dan while umumnya kita tidak tahu berapa kali mau diulang

mereka masing-masing punya tujuan
*/