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

void find_max_min(int** arr, int r, int c) {
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }else if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("Max = %d\nMin = %d", max, min);
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
    find_max_min(arr,rows,cols);

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}