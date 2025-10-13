#include <stdio.h>
int getmax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    return max;
}
void radixsort(int a[], int n) {
    int big = getmax(a, n), nod = 0, div = 1;
    while (big > 0) { nod++; big /= 10; }
    for (int steps = 1; steps <= nod; steps++) {
        int count[10] = {0}, bucket[10][n];
        for (int i = 0; i < n; i++) {
            int loc = (a[i] / div) % 10;
            bucket[loc][count[loc]++] = a[i];
        }
        int k = 0;
        for (int j = 0; j < 10; j++) for (int i = 0; i < count[j]; i++) a[k++] = bucket[j][i];
        div *= 10;
    }
}
void printarray(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}
int main() {
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Before sorting: ");
    printarray(a, n);
    radixsort(a, n);
    printf("After sorting: ");
    printarray(a, n);
    return 0;
}