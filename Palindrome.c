#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],r[100];
    scanf("%s",s);
    for(int i=strlen(s)-1;i>=0;i--){
        char j=s[i];
        strcat(r,&j);
    }
    if(strcmp(s,r)==0){
        printf("Palindrome");
    }
}

