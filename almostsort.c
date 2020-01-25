#include <stdio.h>
#include <stdlib.h>
typedef enum tag_name{sorted_ascend=0,soreted_descend=1}Type_Sort_t;
typedef enum {False=0,True=1}Bool_t;

/*
swap start end
reverse start end
*/

/*******************************globla var*********************/

int star,end;

void swap(int * num1,int * num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;

}

Bool_t IS_Reverse_Swap(int *arr,int *start,int *end)
{
   Bool_t k=True;
   ///find the range between start, end if is increasing so it is ok and just swapepd
   ///else  if they reverse sorted (1 5 4 3 2) here 4 3


return k;
}
/*******************************************************************************/
void find_Limits(int *arr,int size,int * start_ptr,int *end_ptr)
{
    ///start from R -> L if is sorted i should notice the decreasing
    /// 1 2 3 4 5
    /// else  find the i-1 element is greater than itself
    ///  1 5 3 4 2
    /// so end is element the high_index
    /// to find the first one
    /// low_index start at the beginning of array but
    /// low_index<next
    /// then the first is next
    /// else low_index++;
    int Low_index=0;
    int High_index=size-1;
    ///*check the end***//
        while(arr[High_index]>arr[High_index-1] && (High_index>0))
        {

            High_index--;
        }
        *end_ptr=High_index;
        //printf("position %d\n",High_index);
  /**check the start***/
   while(arr[Low_index]<arr[Low_index+1] && (Low_index<=size-1))
        {

           Low_index++;
        }
      //  printf("position %d\n",Low_index);
        *start_ptr=Low_index;

//printf("yoyoyoreverse %d %d",star,end);



}
/****************************************************************************************************/
Bool_t Is_Sorted(int *arr,int s,int e)
{Bool_t k=True;
int i=0;
for(i=s;i<e-1;i++)
{
    if(arr[i]<arr[i+1])
        k=True;
    else
       {
         k=False;
         break;
       }
}

return k;

}
Bool_t Is_Sorted_R(int *arr,int s,int e)
{Bool_t k=True;
int i=0;
for(i=s+1;i<e-1;i++)
{
    if(arr[i]<arr[i+1])
        k=True;
    else
       {
         k=False;
         break;
       }
}

return k;

}
/*********************************************************************************************/
void almostsorted(int size,int * arr)
{
Bool_t The_Range_Is_Sorted=True;
int Flag_operration_used=0;/// 0 for swapped and 1 for reverse
find_Limits(arr,size,&star,&end);

The_Range_Is_Sorted=Is_Sorted_R(arr,star,end);
Bool_t The_Arr_Is_Sorted;
if(The_Range_Is_Sorted)
{

    ///swap  the start,end
    swap(arr+star,arr+end);
    Flag_operration_used=0;
}
else{
/// reverse the range by swapping star->end,star+1->end-1 .....till the end<start
int star_i,end_i;
star_i=star;
end_i=end;

while(end_i>star_i)
{
    swap(arr+star_i,arr+end_i);
    star_i++;
    end_i--;
}

Flag_operration_used=1;
}
///after modification if it is sorted or no
The_Arr_Is_Sorted=Is_Sorted(arr,0,size);

if(The_Arr_Is_Sorted)
{
    printf("yes\n");
    if(!Flag_operration_used)
    {
        printf("swap %d %d\n",star+1,end+1);
    }else
    {

         printf("reverse %d %d\n",star+1,end+1);
    }

}
else
{
printf("no\n");
}

}



int main()
{


//int arr[]={1,2,5,4,3};
int size_int;
char * size=malloc(sizeof(char)*1);

int i;
    FILE * fp;
    char * filename ="E:\\ITI39\\Embedded sessions\\questions_valeo\\Interview_Answer_Codes\\AlmostSorted\\TCi19.txt";
   fp=fopen(filename,"r");

    // if(fp)
    //{
        fgets(size,255,fp);
        size_int=atoi(size);
        int * arr=(int *)malloc(size_int*sizeof(int));
       // arr=(int *)realloc(arr,size_int);
        //printf("%d",size_int);
      for(i=0;i<size_int;i++)
        {
            fscanf(fp,"%d",arr+i);
        }
    //}
fclose(fp);
almostsorted(size_int,arr);
    return 0;
}
