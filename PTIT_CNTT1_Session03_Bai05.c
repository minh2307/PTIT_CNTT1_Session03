#include <stdio.h>
#include <stdlib.h>

void import_elemt(int** arr,int r,int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Nhap vao vi tri hang thu %d, cot thu %d:  ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main_diagonal(int** arr,int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int secondary_diagonal(int** arr, int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j == c - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}



int main() {
    int rows, cols;
    printf("Nhap vao so luong hang: ");
    scanf("%d", &rows);
    printf("Nhap vao so luong cot: ");
    scanf("%d", &cols);
    int** arr = (int **)calloc(rows, sizeof (int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)calloc(cols, sizeof (int));
    }

    if (rows <= 0 && cols <= 0) {
        printf("So hang va cot khong hop le!\n");
        return 1;
    } else if (rows <= 0) {
        printf("So hang khong hop le!\n");
        return 1;
    } else if (cols <= 0) {
        printf("So cot khong hop le!\n");
        return 1;
    }

    import_elemt(arr,rows,cols);
    printf("Tong duong cheo chinh la: %d\n", main_diagonal(arr,rows,cols));
    rows != cols ? printf("Khong ton tai duong cheo phu"),exit(0):"";
    printf("Tong duong cheo phu la: %d", secondary_diagonal(arr,rows,cols));

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
