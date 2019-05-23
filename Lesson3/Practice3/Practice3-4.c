/*
    練習3-4:array = {'k', 'a', 't', 't', 'u', 'n'}
            についてアルファベット順に並び替える関数を作ろう
            アルファベットの比較についてはa<b<c<...<x<y<zの順になっています。
    出力結果例:関数実行前:array = {'k', 'a', 't', 't', 'u', 'n'}
            関数実行後:array = {'a', 'k', 'n', 't', 't', 'u'}
    難しめです。
    並び替えについては「選択ソート」と調べるといいかもです。
*/

#include <stdio.h>

//値を入れ替える関数
void swap(char* x, char* y) {
    char tmp = *x;
    *x = *y;
    *y = tmp;
}

//並び替えを行う関数
//選択ソートを採用
//配列の最初の要素から並び替えを始める方法
void sorting(char* p) {
    for (int i = 0; i < 6; i++) {
        //左の要素と入れ替える要素が何個先にあるかを求める変数
        int skip = i;
        for (int j = i; j < 6; j++) {
            //左にある文字が右にある文字より大きかったら実行
            if (*(p + i) > *(p + j)) {
                skip = j;
            }
        }
        //左の要素と求めれた入れ替える要素を入れ替える
        swap((p + i), (p + skip));
    }
}

int main(void) {
    char array[6] = {'k', 'a', 't', 't', 'u', 'n'};

    printf("関数実行前:array = {");
    for (int i = 0; i < 6; i++) {
        printf("'%c' ", array[i]);
    }
    printf("}\n\n");

    sorting(array);

    printf("関数実行後:array = {");
    for (int i = 0; i < 6; i++) {
        printf("'%c' ", array[i]);
    }
    printf("}\n\n");

    return 0;
}