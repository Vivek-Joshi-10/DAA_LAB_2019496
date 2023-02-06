#include<stdio.h>

int main()
{

    int arr[20];
    int i,count=0,num,n;
    printf("Array elements:?");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element :");
        scanf("%d",&arr[i]);

    }

    printf("Enter number to be searched: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if (arr[i]==num)
        {
            count = 1;
            break;
        }


    }

    if(count ==1)
    {
        printf("%d Number found at %d",num,i+1);
    }

    else{ printf("Number not found :");}


}