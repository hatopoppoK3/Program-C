#include <stdio.h>

int main(void) {
    int a, counter;

    a = 0;
    counter = 0;
    //while(条件式){処理}:条件式が真の場合(1の場合){}の処理を実行する。
    //条件式が偽の場合(0の場合){}の処理をせず、ループから抜ける。
    //この場合aの値が30よりも小さい間ずっと{}の処理を繰り返す。
    //a < 30を満たさなくなると、ループから抜け出す
    while (a < 30) {
        //a += 10;と同じ
        a = a + 10;
        //counter++と同じ
        counter = counter + 1;
        printf("%2d回目の実行:a = %d\n", counter, a);
    }
    printf("\n");

    int b;
    b = 1;
    counter = 0;
    //bが60000よりも小さい間ずっとbの値を2倍する。bの累乗を求める。
    while (b < 60000) {
        //b = b * 2と同じ
        b *= 2;
        counter++;
        printf("%2d回目の実行:b = %d\n", counter, b);
    }

    //無限ループ
    //このままだと(break;をしないと)プログラムを強制終了しない限り文字列を出力し続ける
    while (1) {
        printf("No such file or directory\n");
        //break;をすることでwhile文から強制的に抜け出すことが出来る
        //参考資料に詳細有り
        break;
    }

    return 0;
}