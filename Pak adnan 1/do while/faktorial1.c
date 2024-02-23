#include <stdio.h>

int main(int argc, char *argv[])
{
    int counter;
    int faktorial = 1;
    counter = 5; //ubah disini untuk mendapatkan nilai faktorial

    // dikerjakan dulu baru dicek dia memenuhi atau tidak
    // dikerja dulu baru di eksekusi
    do //apakah dia memenuhi atau tidak maka tetap akan dijalankan
    {
        faktorial = faktorial * counter;
        counter--;

    } while (counter > 0); //karena counter sudah tidak memenuhi maka ini akan berhenti
    printf("%d\n", faktorial);
    return counter;
}