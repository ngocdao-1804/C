#include <stdio.h>

int main() {
    unsigned int a;
    double b;
    char c;

    printf("Nhap a: ");
    scanf("%u", &a);

    printf("Nhap b: ");
    scanf("%lf", &b);

    printf("Nhap c: ");
    scanf(" %c", &c); // có dấu cách để tránh lỗi

    printf("\nBan vua nhap:\n");
    printf("a = %u\n", a);
    printf("b = %lf\n", b);
    printf("c = %c\n", c);

    return 0;
}
