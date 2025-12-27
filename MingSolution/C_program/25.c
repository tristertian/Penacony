#include <stdio.h>

int main()
{
    int month;

    printf("Type in a month.\n");
    scanf("%d", & month);

    //使用if语句
    // if (month >= 3 && month <= 5) {
    //     printf("%d month is spring.\n", month);
    // }else if (month >= 6 && month <= 8) {
    //     printf("%d month is summer.\n", month);
    // }else if (month >= 9 && month <= 11) {
    //     printf("%d month is autumn.\n", month);
    // }else if (month == 1 || month == 2 || month == 12) {
    //     printf("%d month is winter.\n", month);
    // }else {
    //     printf("%d month is nonexistent.\n\a", month);
    // }

    //使用switch语句
    switch (month) {
        case 3:
        case 4:
        case 5:printf("%d month is Spring.\n", month);     break;
        case 6:
        case 7:
        case 8:printf("%d month is Summer.\n", month);     break;
        case 9:
        case 10:
        case 11:printf("%d month is Autumn.\n", month);        break;
        case 12:
        case 1:
        case 2:printf("%d month is Winter.\n", month);      break;
        default:printf("%d month is nonexistent.\n", month);      break;
    }
    return 0;
}