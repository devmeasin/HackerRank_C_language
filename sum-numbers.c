#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a, b;
    double x , y;
    scanf("%lld %lld",&a, &b);
    scanf("%lf %lf",&x, &y);

    printf("%lld %lld\n",(a + b),(a - b));
    printf("%.1lf %.1lf\n",(x + y),(x - y));

    
    return 0;
}