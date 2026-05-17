#include <stdio.h>
void findExtremes(int *arr, int size, int *max, int *min) { 
    *max = arr[0]; 
    *min = arr[0]; 
for (int i = 1; i < size; i++) { 
    if (arr[i] > *max) {
         *max = arr[i]; 
    } 
    if (arr[i] < *min) {
         *min = arr[i]; 
        } 
    } 
}
int main() {
// Bai 4: Tim max min bang pointer 
int data[] = {4, -2, 8, 1, 9, 5}; 
int sizeData = 6; 
int maxValue, minValue; 

findExtremes(data, sizeData, &maxValue, &minValue); 
printf("Gia tri lon nhat: %d\n", maxValue); 
printf("Gia tri nho nhat: %d\n", minValue); 
getchar(); // hien thi ket qua truoc khi ket thuc chuong trinh return 0; }
}