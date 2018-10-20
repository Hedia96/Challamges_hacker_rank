#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    
    int size_arr,shift;
    int * arr;
    int i;
    int temp;
    arr=(int *) malloc(size_arr*sizeof(int));
    scanf("%d %d",&size_arr,&shift);
    for(i=0;i<size_arr;i++)
    {
        scanf("%d",arr+i);
        
    }
    // shift left
    //i=0;
    while(shift!=0)
    {
         temp=arr[0];
    for(i=0;i<size_arr-1;i++)
    {
        arr[i]=arr[i+1];
    }
arr[size_arr-1]=temp;
        shift--;
        
    }
    //print output
    for(i=0;i<size_arr;i++)
    {
         printf("%d ",arr[i]);
    
    }
   

    return 0;
}
