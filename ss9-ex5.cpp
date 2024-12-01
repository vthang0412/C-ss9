#include <stdio.h>

int main() {
    int arr[100], n = 0, position, ans, value;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &ans);

        switch (ans) {
            case 1:
                printf("Nhap so phan tu muon nhap: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if (n == 0) {
                    printf("Mang hien dang khong co.\n");
                    break;
                }
                printf("\nCac phan tu trong mang la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                if (n == 0) {
                    printf("Mang hien dang khong co.\n");
                    break;
                }
                do {
                    printf("\nNhap vi tri phan tu muon them (1 - %d): ", n + 1);
                    scanf("%d", &position);
                } while (position <= 0 || position > n + 1);
                for (int i = n; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }
                printf("\nNhap phan tu muon them: ");
                scanf("%d", &arr[position - 1]);
                n++;
                break;
            case 4:
                if (n == 0) {
                    printf("Mang hien dang khong co.\n");
                    break;
                }
                do {
                    printf("\nNhap vi tri phan tu can chinh sua (1 - %d): ", n);
                    scanf("%d", &position);
                } while (position <= 0 || position > n);
                printf("\nNhap gia tri moi sau khi sua: ");
                scanf("%d", &arr[position - 1]);
                break;
            case 5:
                if (n == 0) {
                    printf("Mang hien dang khong co.\n");
                    break;
                }
                do {
                    printf("\nNhap vi tri phan tu muon xoa (1 - %d): ", n);
                    scanf("%d", &position);
                } while (position <= 0 || position > n);
                for (int i = position - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Khong hop le, chon lai di.\n");
        }
    } while (ans != 6);

    return 0;
}

