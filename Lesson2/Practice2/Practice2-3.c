//練習2-3:7の倍数を除いた1から10000までの総和を求めよう。
//total = 42862858
#include <stdio.h>
#define N 10000

int main(void) {
    int i, total;

    //総和を格納するtotalの初期化
    total = 0;
    //i = 1からi = N(10000)までループする
    for (i = 1; i <= N; i++) {
        //iを7で割った時の余りが0になっているとき、iは7の倍数になる
        //そのため、7で割った時の余りが0でないときのiだけtotalに足していく
        if (i % 7 != 0) {
            //total = total + i;でも同じ処理
            total += i;
        }
    }
    printf("total = %d\n", total);

    return 0;
}