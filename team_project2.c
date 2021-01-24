#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isValid(char c){
    int cond1 = c >='A' && c <='F';
    int cond2 = c >='a' && c <='f';
    int cond3 = c>='0' && c<='9';
    return cond1 || cond2 || cond3;
}
int main()
{
    char s[10];
    begin:
    printf("0x");
    scanf("%s", s);
    int lenght = strlen(s); 
    for (int i = 0; i < lenght; i++)
    {
        if (!isValid(s[i]))
        {
            printf("the entered number is not correct!");
            goto begin;
        }
    }
    int fin = strtol(s, NULL, 16);
    printf("Hex: %s\n", s);
    printf("Dec: %ld\n", fin);
    return 0;
}
