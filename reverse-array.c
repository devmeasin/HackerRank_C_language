#include <stdio.h>

int main() {

    int i, n,tmp, end;
    scanf("%d", &n);
    int arr[n];
    end = n - 1;

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < n/2; i++) {
        tmp = arr[i];
        arr[i] = arr[end];
        arr[end] = tmp;
        end--;
    }

    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    
    printf("\n");

    return 0;
}