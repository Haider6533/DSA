#include <stdio.h>

int main() {
    int arr[7] = {1, 5, 3, 7, 6, 4, 9};
    int n, count = 0;

    printf("Enter the element that you want to search.\n");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++) {
        if (arr[i] == n) {
            printf("%d is present at %d position\n", n, i + 1);
            count += 1;
         }
    }

    if (count == 0) {
        printf("%d not found.\n", n);
    }

    return 0;
}
