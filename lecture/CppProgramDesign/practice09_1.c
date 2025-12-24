#include <stdio.h>

struct date{
    int year, month, day;
}a;
int is_leap(int yy){
    if (yy%400==0 || yy%4==0 && yy%100!=0) {
        return 1;
    }else {
        return 0;
    }
}
int howMuchDays(int yy, int mm){
    switch (mm) {
    case 1:;case 3:;case 5:;case 7:;
    case 8:;case 10:;case 12:return 31;     break;
    case 2:return is_leap(yy) ? 29 :28;     break;
    default:return 30;                      break;
    }
}
int main(){
    int which = 0;
    scanf("%d%d%d", &a.year, &a.month, &a.day);
    for (int i=1; i<a.month; i++) {
        which += howMuchDays(a.year, i);
    }
    which += a.day;
    printf("%d\n", which);
    return 0;
}