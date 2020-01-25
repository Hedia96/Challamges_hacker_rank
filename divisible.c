#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
int get_firstdigit(int number)
{
    int num,rem;
    num=number;
    while(num)
    {
        rem=num%10;
        num=num/10;
    }
    return rem;
}
int get_lastdigit(int number)
{
    int rem;
    do
    {
        rem=number%10;
    }while(0);
    
    return rem;
}
char* solve (int long* A, int N ) {
   // Write your code here
   static char stryes[]="OUI";
   static char strno[]="NON";
   int i,j=0;
   
   int long long result_num=0;
   int * arr=(int *)malloc(N*sizeof(int));
   for(i=0;i<N;i++,j++)
   {
       if(i<N/2) // get the first digit from each element
       {
           arr[j]=get_firstdigit(A[i]);
           
       }else // get the last digit 
       {
             arr[j]=get_lastdigit(A[i]);
       }
   }
   for(i=0;i<N;i++)
   {
       result_num+=(arr[i]*pow(10,N-1-i));
   }
   
   if(result_num%11==0)
   
   {
       return stryes;
   }else
        return strno;
   
   
}

int main() {
    int N;
    scanf("%d", &N);
    int i_A;
    int long *A = (int long *)malloc(N*sizeof(int long));
    for(i_A=0; i_A<N; i_A++)
    	scanf("%ld", &A[i_A]);

    char* out_ = solve(A,N);
    printf("%s", out_);

//printf("%d %d",get_lastdigit(123),get_firstdigit(123));
}
