#include<stdio.h>

// 函数声明
void print_month(int month, int startDay);

int main() {
    // 打印每个月的月历
    for (int month = 1; month <= 12; month++) {
        // 计算每个月的起始日
        int startDay = (month + 5) % 7;  // 假设2023年1月1日为星期日

        // 打印月历标题
        printf("======== %d 月 ========\n", month);

        // 打印星期几的标头
        printf("Mon        Tue        Wed        Thu        Fri        Sat        Sun\n");

        // 打印空格，使起始日对应到正确的列
        for (int i = 0; i < startDay; i++) {
            printf("           ");
        }

        // 打印每个月的日期
        print_month(month, startDay);

        printf("\n\n");
    }

    return 0;
}

// 打印指定月份的日期
void print_month(int month, int startDay) {
    // 计算每个月的天数
    int daysInMonth;
    switch (month) {
        case 2:
            daysInMonth = 28;  // 假设每个月都是28天
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    // 打印日期
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%-10d", day);  // 使用%-10d使每个日期占据10个字符宽度
        if ((startDay + day) % 7 == 0) {
            printf("\n");  // 每打印7个日期换行
        }
    }
}
