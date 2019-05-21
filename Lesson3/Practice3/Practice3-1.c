/*
    練習3-1:double型の変数 radiusを作成し、scanfを用いて値を入力できるようにする
            入力された値を用いて球の体積と表面積を小数第2位まで求める。
            円周率は3.14とする。
            球の体積と表面積それぞれを計算する関数を作って実装しよう。
            関数は２つ。出力はmainで行うようにしてみよう。
    作成例: radius = 5(ここ入力)
            volume = ~~~, surface area = ~~~
*/

#include <stdio.h>

//体積を計算して返す関数
//返り値はdouble,main関数から欲しい情報はradiusなので、仮引数はdouble型で一つ
double Calc_volume(double r) {
    //4.0/3.0でないとintで処理されてしまう
    return (4.0 / 3.0) * r * r * r * 3.14;
}

//表面積を計算して返す関数
//返り値はdouble,main関数から欲しい情報はradiusなので、仮引数はdouble型で一つ
double Calc_surface(double r) {
    return 4 * 3.14 * r * r;
}

int main(void) {
    //radius:半径,volume:体積,surface:表面積
    double radius, volume, surface;

    //半径を入力する処理
    printf("radius = ");
    scanf("%lf", &radius);

    //それぞれの関数の実行
    //関数に渡す情報はradiusで引数は一つ
    volume = Calc_volume(radius);
    surface = Calc_surface(radius);
    //.2で小数点第2位で出力
    printf("volume = %.2f, surface = %.2f\n", volume, surface);

    return 0;
}