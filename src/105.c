/***********************************************************
    105.c -- 百五減算
***********************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c, x;

    printf("1 から 100 までの整数を１つ考えてください.\n");
    printf("それを 3 で割った余り? ");  scanf("%d", &a);
    printf("それを 5 で割った余り? ");  scanf("%d", &b);
    printf("それを 7 で割った余り? ");  scanf("%d", &c);
    x = (70 * a + 21 * b + 15 * c) % 105;
    printf("あなたの考えた数は %d でしょう!\n", x);
    return 0;
}