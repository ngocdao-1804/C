// **nhập số nguyên
// **ktra số chẵn lẻ:
// **số không thì in ra không chẵn không lẻ

#include <stdio.h>
int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("So khong chan khong le\n");
    } else if (n % 2 == 0) {
        printf("So chan\n");
    } else {
        printf("So le\n");
    }
    
    return 0;
}