#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;

    for(int i = A; i <= B; i++)
    {
        int x = i;
        int isLucky = 1;

        while(x > 0)
        {
            int digit = x % 10;
            if(digit != 4 && digit != 7)
            {
                isLucky = 0;
                break;
            }
            x /= 10;
        }

        if(isLucky==1)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
    {
        printf("-1");
    }

    return 0;
}
