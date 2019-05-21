//みんな大好きポインタ
//配列について

#include <stdio.h>

//配列の要素(要素の数10個)の値について2乗する関数
//返り値はないのでvoid
//仮引数はint型のポインタ
void Power2(int* p) {
    for (int i = 0; i < 10; i++) {
        //*(p + i) = *(p + i) * *(p + i);2乗

        //配列のアドレスは連番になっているので、
        //先頭からi番目の要素のアドレス(p + i)の参照先*(p + i)について
        //2乗し*(p + i)を書き換える
        *(p + i) *= *(p + i);
    }
}

//配列の要素(要素の数10個)の値について3乗する関数
//返り値はないのでvoid
//仮引数はint型のポインタ
void Power3(int* p) {
    for (int i = 0; i < 10; i++) {
        //ふつうの配列のように書くこともできる
        p[i] = p[i] * p[i] * p[i];
    }
}

int main(void) {
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

    for (int i = 0; i < 10; i++) {
        printf("Before:array1[%d] = %d\n", i, array1[i]);
    }
    printf("\n");

    //配列名だけだと配列の先頭のアドレスを表す。
    Power2(array1);

    for (int i = 0; i < 10; i++) {
        printf("Power2:array1[%d] = %d\n", i, array1[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("Before:array2[%d] = %d\n", i, array2[i]);
    }

    printf("\n");

    Power3(array2);
    for (int i = 0; i < 10; i++) {
        printf("Power3:array2[%d] = %d\n", i, array2[i]);
    }

    printf("\n");

    return 0;
}