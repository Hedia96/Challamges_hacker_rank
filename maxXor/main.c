#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the maxXor function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int getmaxxor(int L,int R)
{

    int unsigned xorres=L^R;
    int i=0;
    ///get the most set bit
   // xorres=0x80000000;
    int cond=(xorres &(0x80000000))>>31;
    while((xorres &(0x80000000))>>31!=1)
    {
        i++;
        xorres<<=1;

    printf("the most bit is set is : %d\n",i);

    }
    i=32-i;

return i;
}
int* maxXor(int arr_count, int* arr, int queries_count, int* queries, int* result_count) {
    // solve here
int * res=malloc(sizeof(int)*queries_count);
int maxnumber;
int i,j;
int k=0;
i=0;

for(j=0;j<queries_count;j++)
{
    maxnumber=arr[i]^queries[j];
printf("max is %d",maxnumber);
    for(i=1;i<arr_count;i++)
    {
        if((arr[i]^queries[j])>maxnumber)
        {
            maxnumber=arr[i]^queries[j];
            printf("inside the  second loop if maxnumber is %d\n",maxnumber);
        }
    }
    *(res+k)=maxnumber;
    k++;
    i=0;
     printf("inside the first loop ,size of result array %d\n",k);
}
*result_count=k;
return res;
}

int main()
{/*
    int n,m;
    int i,j;
    int size_arrres;
    int* result;
    scanf("%d",&n);
    int* arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
      int* queries=(int *)malloc(m*sizeof(int));
     for(j=0;j<m;j++)
    {
        scanf("%d",queries+j);
    }
    //int* maxXor(int arr_count, int* arr, int queries_count, int* queries, int* result_count)
  // result=maxXor(n,arr,m,queries,&size_arrres);

   printf("sizeof the resss %d\n",size_arrres);
      for(j=0;j<size_arrres;j++)
    {
       printf("%d\n",result[j]);
    }
    //printf("fffff\n");
*/
int r=10;
int l=15;
printf("%d",getmaxxor(l,r));

    return 0;

}
