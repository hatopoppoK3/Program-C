#include <stdio.h>

int main(void) {
    int a;
    float b;
    double c;
    char d;

    //char型は%cで出力と同じ
    printf("d = ");
    scanf("%c",&d);
    printf("d = %c\n\n", d);
    
    //aに文字を格納する(キーボード入力)
    //scanf("%~", &変数);
    //&変数つまり、変数のアドレスを指定する
    //visual studioを使う方はscanf_s("%~", &変数)を使ってください
    //int型は出力の時と同じ%d
    printf("a = ");
    scanf("%d", &a);
    //scanf_s("%d", &a);

    //入力した数字が出力
    printf("a = %d\n\n", a);

    //float型は%fで出力と同じ
    printf("b = ");
    scanf("%f",&b);
    printf("b = %f\n\n", b);

    //double型は%lfで出力と異なる
    printf("c = ");
    scanf("%lf",&c);
    printf("c = %f\n\n", c);

    return 0;
}