/*
    練習3-2:array = {1, 10, 45, -90, 74, -32, 10, 5, -6, -32}
            について最大値、最小値、平均値を求める関数を作ってみよう。
            作る関数の個数については指定なし。
    出力結果:最大値:74 最小値:-90 平均値:-1.5
*/

#include <stdio.h>

//int* p 配列のポインタ
//int* x 最大値のポインタ
//int* y 最小値のポインタ
//int* z 平均値のポインタ
void Calc(int* p, int* x, int* y, double* z) {
    //配列の値の合計を格納する変数
    //最後に割り算するのでdouble型で作成
    double total = 0;
    for (int i = 0; i < 10; i++) {
        total += *(p + i);
        if (*(p + i) < *y) {
            *y = *(p + i);
        }
        if (*x < *(p + i)) {
            *x = *(p + i);
        }
    }
    //total/(要素数)で平均を算出
    *z = total / 10;
}

int main(void) {
    int array[10] = {1, 10, 45, -90, 74, -32, 10, 5, -6, -32};
    //配列の中での最大、最小を求めたいので配列の最初の値で初期化する。
    int max = array[0];
    int min = array[0];
    double average = 0;

    //関数にアドレスを渡すことで関数内での値の処理が
    //こちらの変数にも影響する
    Calc(array, &max, &min, &average);

    printf("最大値:%d 最小値:%d 平均値:%.2f\n\n", max, min, average);

    return 0;
}