#include <stdio.h>
//tao mang có độ dài là 10 
//cho phep người dung nhap vao số lượng phần tử của mảng
//cap nhật phần tử của mảng
#include <stdio.h>

#define MAX_SIZE 10   // khai báo kích thước tối đa

int main() {
    int arr[MAX_SIZE];
    int n;

    printf("Nhap so luong phan tu (0-%d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 0 || n > MAX_SIZE) {
        printf("So luong phan tu khong hop le.\n");
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

    return 0;
}