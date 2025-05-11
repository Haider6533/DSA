#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int pos, n;

    printf("Elements of array before updation.\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the position of element you want to update.\n");
    scanf("%d", &pos);

    printf("Enter the value you want to update.\n");
    scanf("%d", &n);

    arr[pos - 1] = n;

    printf("Elements of array after updation.\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
