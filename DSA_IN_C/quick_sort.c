#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int start, int end) {
    int pivot = arr[end], pindex = start;
    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) swap(&arr[i], &arr[pindex++]);
    }
    swap(&arr[pindex], &arr[end]);
    return pindex;
}
void quicksort(int arr[], int start, int end) {
    if (start < end) {
        int pindex = partition(arr, start, end);
        quicksort(arr, start, pindex - 1);
        quicksort(arr, pindex + 1, end);
    }
}
int main() {
    int n, arr[100];
    printf("Size of array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    quicksort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}