/*
    練習3-5:ある変数を階乗する関数を作ってみよう(講座での演習問題)
            入力値は13以下がいい感じです。
    出力結果例:x = 5, ans = 120
*/

#include <stdio.h>

//階乗する関数
int factorial(int x) {
    if (x == 1) {
        return x;
    }
    else {
        return x * factorial(x - 1);
    }
}
/*
    x = 3のとき factorial(int x) をf(x)と簡単に書く
    f(3) = 3 * f(2)
               f(2) = 2 * f(1)
                          f(1) = 1
    これをまとめるとf(3) = 3 * 2 * 1となり3の階乗の値が返ってくる
*/

int main(void) {
    int x;
    printf("x = ");
    scanf("%d", &x);
    printf("\n");
    printf("%d! = %d\n\n", x, factorial(x));

    return 0;
}