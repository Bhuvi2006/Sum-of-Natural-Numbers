// Finding the sum of natural numbers  
#include <stdio.h>

int main()
{
    int i ,n ,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c+=i;
        
    }
    printf("The sum is = %d",c);
}
