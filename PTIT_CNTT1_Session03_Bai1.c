#include <stdio.h>
#include <stdlib.h>

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
    printf("Cac phan tu co trong mang la: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d = %d \n", i, arr[i]);
    }

    free(arr);
    return 0;
}