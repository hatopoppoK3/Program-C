/*
    練習2-4:10文字のアルファベット小文字を入力し、母音が何文字含まれているか数えよう

    今までの中で比べると少しわかりにくいかもです。
    大まかな流れ
    step1:10文字の文字列を格納できるchar型配列の作成
    step2:scanf関数で10文字のアルファベット小文字を入力し、配列に格納する
    step3:for文とif文を用いて、母音があるかを調べる
    step4:結果を出力する
*/

#include <stdio.h>

int main(void) {
    //char型配列
    char string[11];
    //カウントをするint型変数
    int total;

    //初期化
    total = 0;
    //文字列を入力し、格納する
    printf("文字列の入力string:");
    //string->配列の先頭のアドレス
    //visual studioの場合: scanf_s("%s", string, 11);
    scanf("%s", string);

    //配列に格納された小文字アルファベットを1文字ずつ調べるためのfor文
    //for (int i)とすると、このfor文の中でのみ使うことのできる変数になる
    for (int i = 0; i < 11; i++) {
        //面倒だけれどもstring[i]がa,i,u,e,oのどれかに当てはまるかif else ifで調べる
        if (string[i] == 'a') {
            total++;
        }
        else if (string[i] == 'i') {
            total++;
        }
        else if (string[i] == 'u') {
            total++;
        }
        else if (string[i] == 'e') {
            total++;
        }
        else if (string[i] == 'o') {
            total++;
        }
    }
    //結果を出力
    printf("母音の文字数:%d\n\n", total);

    return 0;
}