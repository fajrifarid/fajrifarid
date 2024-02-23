/*
bentuk umum:

for(eksp1,eksp2,eksp3)
    statement/ block statement

yang mana:
eksp1: ekspresi inisialisasi
eksp2: ekspresi akhir, yang mana perulangan akan di hentikan
eksp3: menjelaskan bagaimana ekspresi awal berubah menjadi keadaan berikutnya
*/


// output 0 sampai 9
#include <stdio.h>

int main(int argc, char *argv[]){
    int state = 0;
    for (state=0;state<10;state++)
        printf("%d\n", state);
        return state;
}