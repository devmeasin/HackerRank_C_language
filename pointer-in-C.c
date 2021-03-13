#include <stdio.h>

void update(int *a,int *b) {
    
    int tmpa = *a + *b;
    int tmpb;
    if(*a < *b) tmpb = *b - *a;
    else tmpb = *a - *b;

    *a = tmpa;
    *b = tmpb;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}