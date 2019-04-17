#include <stdio.h>
#define N 5
#define M 10

int main() {
    //配列のスタートは0から
    //array1[0],array1[1],array1[2],array1[3],array1[4]ができる
    //array1[5]は存在しない
    int array1[N];
    int i;

    //このfor文でarray1[0]からarray1[4]にそれぞれ0,1,2,3,4が格納される
    for (i = 0; i < N; i++) {
        array1[i] = i;
    }

    /*
        array1[0] = 0;
        array1[1] = 1;
        array1[2] = 2;
        array1[3] = 3;
        array1[4] = 4;
        と出力される
    */
    for (i = 0; i < N; i++) {
        printf("array1[%d] = %d\n", i, array1[i]);
    }
    printf("\n\n");

    //このようにすると定義から初期化までできる。
    int array2[] = {0, 1, 2, 3, 4};
    for (i = 0; i < N; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }
    printf("\n\n");

    //char型の配列を作ると文字の配列を扱う
    //char型の最後にはNULL文字'\0'が入る。よって要素数は6
    char array3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    for (i = 0; i < N + 1; i++) {
        printf("array3[%d] = %c\n", i, array3[i]);
    }
    printf("\n\n");

    //printfの改行をなくせば文字列のように出力できる
    for (i = 0; i < N + 1; i++) {
        printf("%c", array3[i]);
    }
    printf("\n\n");

    int array4[N];
    //要素を指定すれば普通の変数と同じようにscanfが使える
    for (i = 0; i < N; i++) {
        printf("array4[%d] = ", i);
        scanf("%d", &array4[i]);
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        printf("array4[%d] = %d\n", i, array4[i]);
    }
    printf("\n\n");

    char array5[M];
    //char型のscanfは%sを使い、&はつけない
    //visual stdioの場合はscanf_s("%s", array5, M)最後に配列のサイズを入れる
    //'\0'が後ろにつくので、9文字まで入力できる
    printf("array5 = ");
    scanf("%s", array5);
    //%sを用いると文字列として出力する
    printf("\narray5 = %s\n", array5);

    return 0;
}