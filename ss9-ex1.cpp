#include<stdio.h>

int main() {
    int arr[100], n, value, position;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    do {
        printf("\nNhap vi tri can them (1 - %d): ", n);
        scanf("%d", &position);
    } while (position < 1 || position > n + 1);
    
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    n++;

    printf("\nMang sau khi them: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

