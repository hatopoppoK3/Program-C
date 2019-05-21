//みんな大好きポインタ渡し
//Pointer.cと同じ感じでいきます
//値の入れ替え swap

#include <stdio.h>

//2つの値を入れ替える関数
//戻り値はないのでvoid
//仮引数はint型のpointer
void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;

    //swapでググるといい感じのやつ出てきます
}

int main(void) {
    int a = 100, b = 50;
    
    //入れ替え前の値を出力
    printf("Before:a = %d, b = %d\n\n", a, b);
    
    //関数にa, bのアドレスを渡してあげる
    //Pointer.cでいうところの x = &a, y = &b
    //これによって関数内での値の処理がこちらのmainのa, bに適応される
    swap(&a, &b);
    printf("After:a = %d, b = %d\n\n", a, b);

    return 0;
}