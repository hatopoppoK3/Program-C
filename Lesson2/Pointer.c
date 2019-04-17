#include <stdio.h>

int main() {
    int **pp;
    int *p;
    int a;
    pp = &p;
    p = &a;
    a = 10;
    //aの値を出力
    printf("a = %d\n", a);
    *p = 20;
    printf("a = %d\n", a);
    **pp = 30;
    printf("a = %d\n", a);
    a = 0;
    printf("**pp = %d\n", **pp);
    printf("*p = %d\n", *p);

    return 0;
}