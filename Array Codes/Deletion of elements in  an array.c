#include <stdio.h>

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7 ,8};
    int n, count = 0;

    printf("Elements of array before deletion:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element that you want to delete.\n");
    scanf("%d", &n);

    for (int i = 0; i < 8; i++) {
        if (arr[i] == n) {
            count += 1;
            for (int j = i; j < 7; j++) {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }

    if (count == 0) {
        printf("%d not found.\n", n);
    } else {
        printf("Elements of array after deletion:\n");
        for (int i = 0; i < 7; i++) {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
