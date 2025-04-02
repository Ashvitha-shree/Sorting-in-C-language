//selection sorting

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int num[size];
    printf("enter the element in array");
    for (int i=0;i<size;i++){
        scanf("%d",&num[i]);

    }
    for(int i=0;i<size-1;i++)
    {

        int min=i;
        for(int j=i+1;j<size;j++)
        { if(num[j]<num[min]){
             min=j;

        }}
        int temp=num[min];
        num[min]=num[i];
        num[i]=temp;

        }
        printf("The Sorted Array\n");
        for (int i=0;i<size;i++)
        {
            printf("%d ",num[i]);
        }
        return 0;
}
