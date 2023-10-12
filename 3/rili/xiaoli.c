#include <stdio.h>

// 函数声明
void print_school_calendar(int startingMonth, int startingDay);

int main() {
    int startingMonth, startingDay;

    // 获取用户输入的2月份某日作为参考日
    printf("请输入2月份的某日（1-28/29）作为春季学期的参考日：\n");
    scanf("%d", &startingDay);

    // 获取用户输入的春季学期开始的月份
    printf("请输入春季学期开始的月份（2-6）：\n");
    scanf("%d", &startingMonth);

    // 打印春季学期校历
    printf("======== 2023年春季学期校历 ========\n");
    print_school_calendar(startingMonth, startingDay);

    return 0;
}

// 打印春季学期校历
void print_school_calendar(int startingMonth, int startingDay) {
    int month = startingMonth;
    int day = startingDay;
    int endMonth = (startingMonth + 3) % 12;  // 春季学期到期月份

    // 打印月份标题
    printf("       2月        3月        4月        5月\n");

    // 打印日期
    while (month != endMonth) {
        printf("%-10d", day);  // 使用%-10d使日期占据10个字符宽度

        if (month == 2 && day == 28) {
            break;  // 2月结束
        }

        if (day % 7 == 0) {
            printf("\n");  // 每打印7个日期换行
        }

        day++;

        // 到达下个月，重置日期为1
        if (day > 28) {
            day = 1;
            month = (month % 12) + 1;
        }
    }
}