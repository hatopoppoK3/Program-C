//練習2-2:17*1から17*n(nは整数)までの総和を求めよう
#include <stdio.h>

int main(void) {
    int i, n, total;

    //総和を格納するtotalを初期化
    total = 0;
    //nの値をscanfで読み込む
    printf("n = ");
    scanf("%d", &n);
    //i=1からi=nの値になるまで、ループする
    //totalに17*1から17*nまでの値をどんどん足す
    for (i = 1; i <= n; i++) {
        total += 17 * i;
        //total = total + 17 * i;でも同じ処理になる
    }
    printf("total = %d\n", total);

    return 0;
}