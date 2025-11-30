#include <stdio.h>

int main() {
    int arr[20] = {2, 5, 8, 12, 15};  
    int n = 5;                        
    int x, i, pos;

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    pos = 0;
    while (pos < n && arr[pos] < x) {
        pos++;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
