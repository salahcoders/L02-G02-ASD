#include <stdio.h>

void countFrequency(int arr[], int n) {
    int counted[n];
    int countedIndex = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) { // Skip already counted elements
            for (int j = i+1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as counted
                }
            }
            printf("Element %d appears %d times.\n", arr[i], count);
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, n);

    return 0;
}
