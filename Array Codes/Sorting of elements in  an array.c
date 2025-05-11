#include <stdio.h>

int main() {
    int arr[7] = {4, 2, 6, 8, 5, 1, 9};
    int temp;

    printf("Initial Array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nSorting in ascending order:\n");

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nSorting in descending order:\n");

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
