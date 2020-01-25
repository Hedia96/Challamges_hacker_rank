#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
   int  *ptr;
int i=0,j;
ptr=&arr;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          if(i%2==0){
          printf("%d",arr[i][j]);

          }else{
            printf("%d",arr[i][3-1-j]);
          }
      }
      printf("\n");
        //printf("%d\n",*(ptr+i));
   }
    return 0;
}
