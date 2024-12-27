#include <stdio.h>

int main () {
    int money = 37970;
    int flag = 0;

    int cnt10000 = money / 10000;
    flag = money % 10000;

    int cnt5000 = flag / 5000;
    flag %= 5000;

    int cnt1000 = flag / 1000;
    flag %= 1000;

    int cnt100 = flag / 100;
    flag %= 100;

    int cnt10 = flag / 10;
    flag %= 10;

    printf("%d원은\n", money);
    printf("만원짜리 %d개\n", cnt10000);
    printf("오천원짜리 %d개\n", cnt5000);
    printf("천원짜리 %d개\n", cnt1000);
    printf("백원짜리 %d개\n", cnt100);
    printf("십원짜리 %d개로 구성됩니다.\n", cnt10);
}