#include <stdio.h>
#include <string.h>


int charToInt(char c){
  return c - '0';
}

int main () {

    int i, j, n, sum = 0;
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);

    for (i = 0; i < len; i++) {
       int tmp = charToInt(str[i]);
       sum += tmp;
    }
    
    printf("%d\n", sum);

    return 0;
}