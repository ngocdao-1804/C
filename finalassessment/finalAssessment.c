#include <stdio.h>
int main() {
    //Bai 1: Tinh tien taxi
    double s;
    double money;
    printf("Nhap quang duong da di duoc (km): "); // Nhap quang duong da di duoc
    scanf("%lf", &s);
    while (s <= 0 || s > 100) { // Kiem tra quang duong hop le
        printf("Quang duong khong hop le. Vui long nhap lai: ");
        scanf("%lf", &s);
    }
    if (s <= 1) {// gia mo cua
        printf("So tien can tra la: 15000 VND");
    }
    else if (s <= 10){// gia từ 2km đến 10km
        money = 15000 + (s - 1) * 13500; 
        printf("So tien can tra la: %.0f VND", money);
    }
    else if (s <= 20){// gia tu 11km den 20km
        money = 15000 + 9 * 13500 + (s - 10) * 11000; 
        printf("So tien can tra la: %.0f VND", money);
    }
    else {// gia tu 21km tro len
        money = 15000 + 9 * 13500 + 10 * 11000 + (s - 20) * 11000 - 0.1 * (15000 + 9 * 13500 + 10 * 11000 + (s - 20) * 11000);
        printf("So tien can tra la: %.0f VND", money);
    }

    //Bai 2: Số liệu thống kê từ mảng số nguyên
    int n[100];
    int countPositive = 0, totalPositive = 0;
    int size;
    printf("\nNhap so luong phan tu trong mang: "); // Nhap so luong phan tu trong mang
    scanf("%d", &size);
    while (size <= 0 || size > 100) { // Kiem tra so luong phan tu hop le
        printf("So luong phan tu khong hop le. Vui long nhap lai: ");
        scanf("%d", &size);
    }

    //Bat dau nhap cac phan tu vao mang
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &n[i]);
    }

   //// //In ra so chan
    printf("cac so chan la:\n");
    for (int i = 0; i < size; i++) {
        if (n[i] % 2 == 0) {
            printf("%d", n[i]);
        }
    }
    
    ///// Dem so duong
    for (int i = 0; i < size; i++) {
        if (n[i] > 0) {
            countPositive++;
            totalPositive += n[i];
        }
    }
        if (countPositive == 0) {
            printf("\nKhong co so duong trong mang\n");
        }
    if (countPositive > 0) {
    printf("Trung binh cong cac so duong: %.2f\n", (float)totalPositive / countPositive);
    }

    //Bai 3: Phan loai ky tu chuoi
    char str[226];
    int countLetter=0, countNumber=0;
    printf("Nhap chuoi: "); //Nhap chuoi tu ban phim
    
    getchar(); // xu ly \n
    fgets(str, sizeof(str), stdin); //xu ly nhap chuoi co khoang trang
    printf("Chuoi vua nhap: %s", str);

    for (int i = 0; str[i] != '\0'; i++) { // dem so ky tu chu va so trong chuoi
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            countLetter++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            countNumber++;
        }
    }
    
    printf("So ky tu chu: %d\n", countLetter);
    printf("So ky tu so: %d\n", countNumber);
    getchar(); // hien thi ket qua truoc khi ket thuc chuong trinh
    return 0;
}