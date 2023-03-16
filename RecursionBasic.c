#include <stdio.h>
int fac(int n);
int son(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int nf = fac(n);
    int ns = son(n);
    printf("fac - %d, sum - %d",nf,ns);
    return 0;
}
int fac(int n){
    return (n==1) ? 1: n*fac(n-1);
}
int son(int n){
    return (n==1) ? 1: n+son(n-1);
}

