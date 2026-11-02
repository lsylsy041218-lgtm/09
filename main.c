#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
    int score[SIZE];
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int flag_same = 1;

    /* 실습 3-1 : 배열 값 복사 (grade -> score) */
    for (i = 0; i < SIZE; i++)
        grade[i] = rand() % 100;

    for (i = 0; i < SIZE; i++)
        score[i] = grade[i];

    for (i = 0; i < SIZE; i++)
        printf("score[%d] = %d\n", i, score[i]);

    /* 실습 3-2 : 배열 값 비교 (다른 값인 index 출력) */
    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("배열은 다른 값을 가집니다. (index %d : a[%d] = %d, b[%d] = %d)\n",
                   i, i, a[i], i, b[i]);
            flag_same = 0;
        }
    }

    if (flag_same)
        printf("배열은 같은 값을 가집니다.\n");

    return 0;
}