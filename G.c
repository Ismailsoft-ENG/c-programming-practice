#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);
    int mul = N*2000;
    int ans = mul/500;
    printf("%d\n",ans);

    return 0;
}