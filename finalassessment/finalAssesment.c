#include <stdio.h>
int main() {
    //Bai 1: Tinh tien taxi
    float s;
    unsigned long long int money;
    printf("Nhap quang duong da di duoc (km): "); // Nhap quang duong da di duoc
    scanf("%f", &s);

    if (s <= 0) {// Neu quang duong khong hop le thi thong bao loi
        printf("Quang duong khong hop le"); 
    }
    else if (s <= 1) {// gia mo cua
        printf("So tien can tra la: 15000 VND");
    }
    else if (s <= 10){// gia từ 2km đến 10km
        money = 15000 + (s - 1) * 13500; 
        printf("So tien can tra la: %llu VND", money);
    }
    else if (s <= 20){// gia tu 11km den 20km
        money = 15000 + 9 * 13500 + (s - 10) * 11000; 
        printf("So tien can tra la: %llu VND", money);
    }
    else {// gia tu 21km tro len
        money = 15000 + 9 * 13500 + 10 * 11000 - 10%*(15000 + 9 * 13500 + 10 * 11000) ; 
        printf("So tien can tra la: %llu VND", money);
    }

    //Bai 2: Số liệu thống kê từ mảng số nguyên
    int n[100], evenNumber[100], countPositive = 0; totalPositive = 0;
    printf("\nNhap so luong phan tu trong mang: "); // Nhap so luong phan tu trong mang
    scanf("%d", &n[0]);

    for (int i = 0; i < n[0] && i < 100; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &n[i]);
    }

   //// //In ra so chan
    for (int i = 0; i < n[0]; i++) {
        if (n[i] % 2 == 0) {
            evennumber[]=n[i];
        }
    }
    printf("cac so chan la: %d ", evennumber[i]);

    ///// Dem so duong
    for (int i = 0; i < n[0]; i++) {
        if (n[i] <= 0) {
            printf("Khong co so duong trong mang");
        } else {
            countPositive++;
            totalPositive += n[i];
        }
    }

    printf("So luong so le: %d\n", countOdd);
    printf("Trung binh cong cac so duong: %.2f\n", (float)totalPositive / countPositive);
    
    //Bai 3: Phan loai ky tu chuoi
    char str[226];
    int countLetter=0, countNumber=0;
    printf("Nhap chuoi: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            countLetter++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            countNumber++;
        }
    }

    printf("So ky tu chu: %d\n", countLetter);
    printf("So ky tu so: %d\n", countNumber);

    return 0;
}