#include <stdio.h>

void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    system("chcp 65001");
    int x[50];
    int y[60];
    for (int i = 0; i < 50; i++) {
        x[i] = 50 - i;
    }
    for (int i = 0; i < 60; i++) {
        y[i] = 60 - i;
    }

    printf("Масив x до сортування:\n");
    printArray(x, 50);
    printf("Масив y до сортування:\n");
    printArray(y, 60);
    sortArray(x, 50);
    sortArray(y, 60);
    printf("Масив x після сортування:\n");
    printArray(x, 50);
    printf("Масив y після сортування:\n");
    printArray(y, 60);
    return 0;
}
