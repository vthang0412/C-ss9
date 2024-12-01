#include<stdio.h>

int main() {
    int arr[100], n, position;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nNhap vi tri can xoa (1 - %d): ", n);
        scanf("%d", &position);
    } while (position < 1 || position > n);

    for (int i = position - 1; i < n - 1; i++) 
        arr[i] = arr[i + 1];
    n--;

    printf("\nMang sau khi xoa: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);

    return 0;
}

