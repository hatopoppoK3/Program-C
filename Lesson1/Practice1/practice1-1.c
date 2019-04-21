/*
    練習1-1:printfを1回だけ使って次の模様を作ってみよう
                *
            *       *
        *               *
            *       *
                *
*/

#include <stdio.h>

int main(void) {
       
    printf("\t\t*\t\t\n\t*\t\t*\t\n*\t\t\t\t*\n\t*\t\t*\t\n\t\t*\t\t\n");

    /*
        複数のprintfで記述するとこのようになり
        printf("\t\t*\t\t\n");
        printf("\t*\t\t*\t\n");
        printf("*\t\t\t\t*\n");
        printf("\t*\t\t*\t\n");
        printf("\t\t*\t\t\n");

        これを全部1つにまとめれば1つのprintfで出力できる
    */
   
    return 0;
}