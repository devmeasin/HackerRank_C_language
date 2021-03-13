#include <stdio.h>
#include <string.h>

int main() {

    char ch, str[100], strx[1000];

    scanf("%c", &ch);
    scanf("%s", str);
    while ((getchar()) != '\n');
    fgets(strx, sizeof(strx),stdin);

    printf("%c\n", ch);
    printf("%s\n",str);
    printf("%s\n",strx);

    return 0;
}