#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    (ch>='A'&& ch<='Z') ? printf("Caps") : printf("Not caps");
}

