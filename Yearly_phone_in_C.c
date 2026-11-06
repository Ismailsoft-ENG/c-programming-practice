#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int num = X;
    printf("K");
    int ans = num%10;
    num /= 10;
    int ans1 = num%10;
    printf("%d%d\n",ans1,ans);
    
 return 0;
}
