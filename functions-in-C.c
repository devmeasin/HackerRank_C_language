#include <stdio.h>

int sum (int a, int b, int c, int d) {
    int arr[100];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    int i, temp = arr[0];
    for(i = 1; i < 4; i++) {
        if(temp < arr[i]) temp = arr[i];
    }

    return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = sum(a, b, c, d);
    printf("%d", result);
    
    return 0;
}