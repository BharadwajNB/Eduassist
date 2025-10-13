#include<stdio.h>
void merge(int arr[], int st, int mid, int end) {
    int temp[100], I = st, j = mid + 1, k = st;
    while (I <= mid && j <= end) {
        temp[k++] = (arr[I] < arr[j]) ? arr[I++] : arr[j++];
    }
    while (I <= mid) temp[k++] = arr[I++];
    while (j <= end) temp[k++] = arr[j++];
    for (int r = st; r <= end; r++) arr[r] = temp[r];
}
void mergesort(int arr[], int st, int end) {
    if (st < end) {
        int mid = (st + end) / 2;
        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}
int main() {
    int n, arr[100];
    printf("Size of array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int I = 0; I < n; I++) scanf("%d", &arr[I]);
    mergesort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int I = 0; I < n; I++) printf("%d ", arr[I]);
    return 0;
}