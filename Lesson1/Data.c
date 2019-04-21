#include <stdio.h>

int main(void) {
    // int:整数を格納
    int a, b;
    
    // float:実数を格納 例) 0.3, -1.4
    float hankei, menseki;

    //double:実数を格納 floatよりも大きい数字を格納できる
    double number;

    //char:1文字を格納
    char size;

    //3をaに代入
    a = 3;

    //3と出力される,int型を出力するときは"%d"
    //printf("%d", 出力したいint型の変数名)
    printf("%d\n\n", a);

    //a+5(3+5)の結果をaに代入
    a = a + 5;

    //8と出力される
    printf("%d\n\n", a);

    //a*7(8*7)の結果をbに代入
    b = a * 7;
    
    //a = 8,b = 56と出力される
    printf("a = %d, b = %d\n\n", a, b);

    //float型は小数を代入できる
    hankei = 5.6;
    menseki = 3.14 * hankei * hankei;

    //float型の出力は"%f"
    printf("%f\n\n", menseki);
    //出力時に桁数を指定したい場合は%7.2fのように指定
    printf("%7.2f\n\n", menseki);

    //char型は文字を一文字格納できる
    size = 'L';

    //char型の出力は"%c"
    printf("%c\n\n", size);

    //変数のアドレスについて
    //変数名の前に&を付けるとその変数のアドレスを出力できる
    //変数aのアドレスを出力
    printf("%d\n\n", &a);

    return 0;
}