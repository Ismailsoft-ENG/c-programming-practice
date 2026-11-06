#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    int ans = pow(A, B);
    printf("%d", ans);

    return 0;
}