#include <stdio.h>

int main(int argc, char *argv[])
{
    int counter;
    int faktorial = 1;
    counter = 5;
    // dikerjakan dulu baru dicek dia memenuhi atau tidak
    do
    {
        faktorial = faktorial * counter;
        counter--;
    } while (counter >0); // infite loop seharusnya. Kenapa tidak? karena ada batasan terkecil dari integer itu sendiri
    
    printf("%d\n", faktorial);
    return counter;
}