#include <stdio.h>

int main() {
    int n,j,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=n;j++)
         {
             sum=i+j;
             printf("%d\t",sum);
         }
        printf("\n");
    }
}
