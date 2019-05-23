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

/*
    練習3-2:array = {1, 10, 45, -90, 74, -32, 10, 5, -6, -32}
            について最大値、最小値、平均値を求める関数を作ってみよう。
            作る関数の個数については指定なし。
    出力結果:最大値:74 最小値:-90 平均値:-1.5

    練習3-3:array1 = {-1, 10, 20}, array2 = {5, 2, 9}
            について、配列の値を入れ替える関数を作ってみよう
    作成例: 関数実行前:array1 = {-1, 10, 20}, array2 = {5, 2, 9}
            関数実行後:array1 = {5, 2, 9}, array2 = {-1, 10, 20}
    
    練習3-4:array = {'k', 'a', 't', 't', 'u', 'n'}
            についてアルファベット順に並び替える関数を作ろう
            アルファベットの比較についてはa<b<c<...<x<y<zの順になっています。
    出力結果例:関数実行前:array = {'k', 'a', 't', 't', 'u', 'n'}
            関数実行後:array = {'a', 'k', 'n', 't', 't', 'u'}

    練習3-5:ある変数を階乗する関数を作ってみよう(講座での演習問題)
            入力値は13以下がいい感じです。
    出力結果例:x = 5, ans = 120
*/