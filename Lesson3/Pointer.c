#include <stdio.h>

int main(void) {
    int* p;
    int a;
    
    //aのアドレスを出力
    printf("aのアドレス:&a = %d", &a);
    //ポインタpにaのアドレスを指定
    //pにaのアドレスを指定したので、*pによってaの格納されている値を操作することが出来る
    p = &a;
    a = 10;
    //aの値を出力 a = 10と出力
    printf("a = %d\n", a);
    //*pの値を出力 *p = 10と出力
    printf("*p = %d\n", *p);
    //*pの値を変更する
    *p = 20;
    //*pの値を出力 *p = 20と出力
    printf("*p = %d\n", *p);
    //*pの値が変化しているので、pの指定先であるaの格納されている値も変更される
    //aの値を出力 a = 20と出力
    printf("a = %d\n", a);

    return 0;
}