/*
    練習1-2:double型の変数 radiusを作成し、scanfを用いて値を入力できるようにする
            入力された値を用いて球の体積と表面積を小数第2位まで求める。円周率は3.14とする。
            また、体積と表面積共に100よりも大きかったら1を出力、
            そうでなければ0を出力するようにする。
    作成例: radius = 5(ここ入力)
            volume = ~~~, surface = ~~~
            判定結果:1
*/

#include <stdio.h>

int main() {
    double radius, volume, surface;

    printf("radius = ");
    scanf("%lf", &radius);
    //4.0/3.0でないとintで処理されてしまう
    volume = (4.0 / 3.0) * radius * radius * radius * 3.14;
    surface = 4 * 3.14 * radius * radius;
    //.2で小数点第2位で出力
    printf("volume = %.2f, surface = %.2f\n", volume, surface);
    //この条件式で判定を行う
    printf("判定結果:%d\n", (100 < volume) && (100 < surface));
}