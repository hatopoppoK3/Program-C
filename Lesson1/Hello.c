#include <stdio.h>

int main() {
    //printf("出力したい文字");
    //改行をしたい場合は"\n"を入れる
    printf("Hello\n");

    /*
    Hello
    Hello
    Hello
    Hello


    と出力される
    */
    printf("Hello\nHello\nHello\n\n\n");

    //\tを使うとタブ文字    が出力できる
    printf("Hello\tHello\n");

    /*
        練習1-1:printfを1回だけ使って次の模様を作ってみよう
                    *
                *       *
            *               *
                *       *
                    *
    */
    
    return 0;
}