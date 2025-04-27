#include <stdio.h>

int recur(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(n % 2 == 0) return n + recur(n-2);
    else return n + recur(n-2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", recur(n));
    
    return 0;
}