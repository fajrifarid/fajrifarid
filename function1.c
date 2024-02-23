#include <stdio.h>
#include <stdlib.h>

//salah satu kegunaan function lainnya
int main(){
    hello("fajri", 30);    
    return 0;
}

void hello(char nama[], int umur[]){
    printf("Hello %s, sekarang kamu berumur %d", nama, umur);
}