#include <stdio.h>

int main(int argc, char *argv[])
{
    int state = 0;
    char c= 'A';
    for(state = 0; state < 10; state+=2)
            printf("%d\n", state);  

    for(c=65;c<91;c++) //charcter dengan code 65=A, 66=B, begitu pula seterusnya sampai 90=Z
        printf("%2c", c);
    return state;
}