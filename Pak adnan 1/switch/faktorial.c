#include <stdio.h>

// Mencari Hasil Dari Faktorial 10
int main(int argc, char *argv[])
{
    int counter;
    int faktorial = 1;
    counter =0;
    //akan dikerjakan jika true
    while (counter > 0)
    {
        faktorial = faktorial * counter;
        counter--;
    }
    printf("%d\n", faktorial);
    return counter;


    // ----CARA LAIN----
    // int counter;
    // int faktorial = 1;
    // counter =1;

    // while (counter <= 10)
    // {
    //     faktorial = faktorial * counter;
    //     counter++;
    // }
    // printf("%d\n", faktorial);
    // return counter;
}