#include <stdio.h>

int main(void) {
    int a, b, c, d, ans;
    float fa, fb;

    //算術演算
    a = 100;
    b = 15;
    //int型なので小数点はなく、a/bの商がansに代入される
    ans = a / b;
    //ans = 6と出力される
    printf("ans = %d\n\n", ans);

    fa = 100;
    fb = 15;
    //float型なので小数点の値がbに代入される
    fb = fa / fb;
    //fb = 6.~~~と出力される
    printf("fb = %f\n\n", fb);

    //%で剰余(あまり、mod)を求めることが出来る
    ans = a % b;
    printf("ans = %d\n\n", ans);
    //ここまで算術演算

    //ここから論理演算
    a = 10;
    b = 5;
    //a == b:aとbが同じ値なら1,そうでないなら0を出力
    printf("a == b:%d\n\n", a == b);
    //a != b:aとbが異なる値なら1,そうでないなら0を出力
    printf("a != b:%d\n\n", a != b);
    //a < b:aよりもbの方が大きいなら1,そうでないなら0を出力
    printf("a < b:%d\n\n", a < b);
    //a > b:bよりもaの方が大きいなら1,そうでないなら0を出力
    printf("a > b:%d\n\n", a > b);
    c = 15;
    d = 5;
    //(a < b) && (d < c):(a < b)と(d < c)の両方を満たしているときに1を出力
    printf("(a < b) && (d < c):%d\n\n", (a < b) && (d < c));
    //(a < b) || (d < c):(a < b)と(d < c)のどちらかが満たされているとき1を出力
    printf("(a < b) || (d < c):%d\n\n", (a < b) || (d < c));

    /*
        練習1-2:double型の変数 radiusを作成し、scanfを用いて値を入力できるようにする
                入力された値を用いて球の体積と表面積を小数第2位まで求める。円周率は3.14とする。
                また、体積と表面積共に100よりも大きかったら1を出力、
                そうでなければ0を出力するようにする。
        作成例: radius = 5(ここ入力)
                volume = ~~~, surface area = ~~~
                判定結果:1
    */

    return 0;
}