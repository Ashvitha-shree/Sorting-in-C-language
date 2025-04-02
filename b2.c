//  Binary search for unsorted list
#include <stdio.h>
int main()
{
    int size,target;
    printf("Enter the size ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the target");
    scanf("%d",&target);
    int dublicate;
    for (int i=0;i<size-1;i++)
        {for (int j=0;j<size;j++){
        if(arr[j]<arr[i])
        {
          dublicate=arr[j];
          arr[j]==arr[i];
          arr[i]==dublicate;

        }
    }}
    int low=0,high=size-1,result=-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
          result=mid;
          break;
        }
        else if(arr[mid]<target)
            {
                low=mid+1;
            }
        else
        {
            high=mid-1;
        }
            }
    if(result!=-1)
    {
        printf("the target %d found at index %d",target,result);
    }
    else{
        printf("not found");
    }

}

