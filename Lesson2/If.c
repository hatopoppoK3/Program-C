#include <stdio.h>

int main() {
    int a, b, c, d;

    a = 1000;
    b = 100;
    c = 10;
    printf("d = ");
    scanf("%d", &d);

    //if(条件式){} else if(条件式){} else{}
    //else if,elseはなくても大丈夫
    if (d > a) {
        printf("dは%dよりも大きい", a);
    } 
    else if (d > b) {
        printf("dは%dよりも大きい", b);
    }
    else if (d > c) {
        printf("dは%dよりも大きい", c);
    }
    else {
        printf("dは%dよりも小さい", c);
    }

    /*
        練習2-3:7の倍数を除いた1から10000までの総和を求めよう。
    */
   
    return 0;
}