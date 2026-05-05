#include <stdio.h>
//tao mang có độ dài là 10 
//cho phep người dung nhap vao số lượng phần tử của mảng
//cap nhật phần tử của mảng
int main() {
    int arr[10];
    int n;

    printf("Nhap so luong phan tu (0-10): ");
    scanf("%d", &n);

    if (n < 0 || n > 10) {
        printf("So luong phan tu khong hop le. Vui long nhap lai.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}