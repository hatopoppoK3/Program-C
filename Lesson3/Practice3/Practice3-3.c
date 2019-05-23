/*
    練習3-3:array1 = {-1, 10, 20}, array2 = {5, 2, 9}
            について、配列の値を入れ替える関数を作ってみよう
    作成例: 関数実行前:array1 = {-1, 10, 20}, array2 = {5, 2, 9}
            関数実行後:array1 = {5, 2, 9}, array2 = {-1, 10, 20}
*/
#include <stdio.h>

//int* x array1のポインタ
//int* y array2のポインタ
void swap(int* x, int* y) {
    //配列の3つの要素に対して入れ替えを実行する
    for (int i = 0; i < 3; i++) {
        int tmp = *(x + i);
        *(x + i) = *(y + i);
        *(y + i) = tmp;
    }
}

int main(void) {
    int array1[] = {-1, 10, 20}, array2[] = {5, 2, 9};

    printf("関数実行前:array1 = {");
    for (int i = 0; i < 3; i++) {
        printf("%d ", array1[i]);
    }
    printf("}, array2 = {");
    for (int i = 0; i < 3; i++) {
        printf("%d ", array2[i]);
    }
    printf("}\n\n");

    //配列の先頭アドレスを関数に渡す。
    swap(array1, array2);

    printf("関数実行後:array1 = {");
    for (int i = 0; i < 3; i++) {
        printf("%d ", array1[i]);
    }
    printf("}, array2 = {");
    for (int i = 0; i < 3; i++) {
        printf("%d ", array2[i]);
    }
    printf("}\n\n");

    return 0;
}