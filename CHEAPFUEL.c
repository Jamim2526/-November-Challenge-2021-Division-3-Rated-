#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int x,y,a,b,k;
        scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);
        
        x=x+(k*a);
        y=y+(k*b);
        
        if(x>y)
            printf("DIESEL\n");
        else if(y>x)
           printf("PETROL\n");
        else
            printf("SAME PRICE\n");
    }

	return 0;
}

