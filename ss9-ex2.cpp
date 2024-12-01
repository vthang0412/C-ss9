#include<stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int position;
    do {
        printf("\nNhap vi tri can chinh sua (1-%d): ", n);
        scanf("%d", &position);
        if (position < 1 || position > n) {
            printf("Khong hop le. Vui long nhap lai.\n");
        }
    } while (position < 1 || position > n);

    printf("Nhap gia tri moi sau khi sua: ");
    scanf("%d", &arr[position - 1]);

    printf("Cac phan tu trong mang sau khi sua la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

