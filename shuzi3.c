
#include <stdio.h>

int main() {
    int rows, i, j;
    char currentChar, space;

    printf("请输入金字塔的行数：");
    scanf("%d", &rows);

    space = ' ';

    for (i = 1; i <= rows; i++) {
        // 打印空格
        for (j = 1; j <= rows - i; j++) {
            printf("%c", space);
        }

        // 打印左半部分字母
        currentChar = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", currentChar++);
        }

        // 打印右半部分字母
        currentChar -= 2;
        for (j = 1; j < i; j++) {
            printf("%c", currentChar--);
        }

        printf("\n");
    }

    return 0;
}
