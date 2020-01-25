#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Global_Num_Swaps=0;
void swap(int * ele1,int * ele2)
{
    int temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;

}
void BubbleSort(int *arr,int size){
int flag_is_sorted=0;
int i;
 int last=size-1;
while(!flag_is_sorted)
{
    flag_is_sorted=1;

    for(i=0;i<last;i++)
    {
        if(arr[i]>arr[i+1])
        {
            //swap
            swap(arr+i,arr+i+1);
            Global_Num_Swaps++;
            //modify the flag
            flag_is_sorted=0;
        }
    }
    last--;
}

}
int main()
{
    int i, size;
    scanf("%d",&size);
    int * arr=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
/*
Array is sorted in 3 swaps.
First Element: 1
Last Element: 3
*/

BubbleSort(arr,size);
printf("Array is sorted in %d swaps.\n",Global_Num_Swaps);
printf("First Element: %d\n",arr[0]);
printf("Last Element: %d\n",arr[size-1]);


  /*
  //test swapping
  swap(arr+0,arr+1);
  printf("%d %d \n",arr[0],arr[1]);
  */
    return 0;
}
