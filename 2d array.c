#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][3],i,j,total=0;
    printf("enter 6 values");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("values are");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
    {
        printf("%d",a[i][j]);
        total=total+a[i][j];
    }
    printf("\n%d",total);
    total=0;
    printf("\n");
}
