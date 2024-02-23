#include <stdio.h>

int terbesar(int angka1, int angka2){
    int result;
    if(angka1>angka2){
        result = angka1;
    }else{
        result = angka2;
    }

    return result;
}

int main(){
    printf ("%d", terbesar(10,10));

    return 0;
}