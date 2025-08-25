
/// Accept an array of 10 elements and find maximum using pointers

#include <stdio.h>

int find_max(int *arr, int n) {
    int *p = arr;
    int max = *p;
    for (int i = 1; i < n; ++i) {
        p++;
        if (*p > max) max = *p;
    }
    return max;
}

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    int max = find_max(arr, 10);
    printf("Maximum = %d\n", max);
    return 0;
}

