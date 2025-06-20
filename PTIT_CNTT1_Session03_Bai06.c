#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m;
    printf("Nhap vao mang so luong phan tu: ");
    scanf("%d",&n);
    n <= 0 ? printf("So luong phan tu khong hop le"), exit(0):"";
    int* arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d",&arr[i]);
    }

    printf("Nhap vao mang so luong phan tu muon them vao lan 2: ");
    scanf("%d",&m);

    if (m != 0) {
        int* temp =(int *)realloc(arr,(n+m) * sizeof(int));
        arr = temp;
        for (int i = n; i < n + m; i++) {
            printf("arr[%d]: ", i);
            scanf("%d",&arr[i]);
        }
    }

    for (int i = 0; i < n+m; i++) {
        printf("[%d, ]", arr[i]);
    }

    free(arr);
    return 0;
}


