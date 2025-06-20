#include <stdio.h>
#include <stdlib.h>

int max_elment(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
       if (max < arr[i]) {
           max = arr[i];
       }
    }

    return max;
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

    printf("Phan tu lon nhat trong mang la: %d ", max_elment(arr, n));

    free(arr);
    return 0;

}

