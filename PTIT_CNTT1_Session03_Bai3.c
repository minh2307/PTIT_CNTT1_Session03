#include <stdio.h>
#include <stdlib.h>

int average_even(int* arr, int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
        count ++;
    }
    return sum / count;
}


int main() {
    int n;
    int* arr = (int *)calloc(100 , sizeof(int));
    printf("Nhap vao so luong phan tu(0<n<100): ");
    scanf("%d", &n);
    n == -1 ? printf("So luong phan tu ko dc am"),exit(0) : n == 0 ? printf("So luong phan tu ko dc lon hon ko"), exit(0) : "";
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("average = %d", average_even(arr, n));

    free(arr);
    return 0;
}