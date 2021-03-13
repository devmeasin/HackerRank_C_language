#include <stdio.h>
#include <string.h>


int charToInt(char c){
  return c - '0';
}

int main () {

    int i, j, n;
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);

    for (i = 0; i < 10; i++) {
        int count = 0;
        for(j = 0; j < len; j++) {
            int tmp = charToInt(str[j]);
            if(i == tmp) count++;
        }
        printf("%d ",count);
        count = 0;
    }


    return 0;
}