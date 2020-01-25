#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int * function(int number_counts,int * numbers)
{
int temp,i,j,index_min;

//sorting
for(i=0;i<number_counts-1;i++)
{   index_min=i;
    for(j=i+1;j<number_counts;j++)
    {
        if(numbers[j]<=numbers[index_min])
        index_min=j;
    }
    //swap
    temp=numbers[index_min];
    numbers[index_min]=numbers[i];
    numbers[i]=temp;
}

int * diff_arr=(int *)malloc(number_counts*sizeof(int));
int * op_arr_pair=(int *)malloc(100*sizeof(int));

diff_arr[0]=numbers[0];

for(i=1;i<number_counts;i++)
{
    diff_arr[i]=numbers[i]-numbers[i-1];
}
// get the minimum difference in the diff_arr
int diff_min=diff_arr[1];
for(i=1;i<number_counts;i++)
{
    if(diff_arr[i]<diff_min)
    {
        diff_min=diff_arr[i];
        index_min=i;
    }
}
// after get the minimum difference try to put those pair have min diff in op_pair_arr
j=0;
for(i=0;i<number_counts;i++)
{

    if(diff_arr[i]==diff_min && i!=0)
    {
        op_arr_pair[j]=numbers[i-1];
        op_arr_pair[j+1]=numbers[i];
        printf("%d %d ",numbers[i-1],numbers[i]);
    }
    j++;
}

return op_arr_pair;
}

int main()
{
    int size;
    int * arr_ret=(int *)malloc(100*sizeof(int));
    scanf("%d",&size);
    int * arr=(int *)malloc(size*sizeof(int));
    int i=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    arr_ret=function(size,arr);
}
*/

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 swap(char * ptr1,char * ptr2)
        {
            char temp;
            temp=*ptr1;
            *ptr1=*ptr2;
            *ptr2=temp;

        }
void sort_range(char* start,int startindex,int size_to_end)
{//selection sort
    int i=0;
    int min_index,min_value;
    int j;
    char temp;
    //char * start=start1;
    for(i=startindex;i<size_to_end;i++)
    {   min_value=start[i];
        min_index=i;
        for(j=i+1;j<size_to_end;j++)
        {
            if(start[i]>start[j])
            {
                min_index=j;
                min_value=start[j];
            }

        }
       swap(start+i,start+min_index);

    }


}

int main()
{
   //char * str=(char *) malloc(sizeof(char)*100);
   static char str[100];
   scanf("%s",str);
   sort_range(str,1,strlen(str));
   printf("\nafter sorting\n%s",str);
    return 0;
}
