
/*
DOESN'T WORK 
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

//find gcd between two numbers
int gcd(int a,int b)
{
    int res=0;
    int Numerator,Denominator;
    int reminder;
    if(a>b)
    {
        Numerator=a;
        Denominator=b;
    }else
    {
         Numerator=b;
        Denominator=a;

    }
    reminder=Numerator%Denominator;
   
    while(reminder!=0)
    {   Numerator=Denominator;
        Denominator=reminder;
        reminder=Numerator%Denominator;
    }
    
return Numerator;
}

int lcm(int a,int b)
{
    return ((a*b)/gcd(a,b));
}
int getTotalX(int a_count, int* a, int b_count, int* b) {
   int count=0;
   int LCM_ARR_A=a[0];
   int GCD_ARR_B=b[0];
int i,j;
for(i=1;i<a_count;i++)
{
    LCM_ARR_A=lcm(LCM_ARR_A,a[i]);
}
for(i=1;i<b_count;i++)
{
    GCD_ARR_B=gcd(GCD_ARR_B,b[i]);
}

// get the number that evenly dividly from factors Array B and they are factors from arrayA and divided 
//so made loop from LCM to GCD and check about these two conditon
for(i=LCM_ARR_A,j=2;i<=GCD_ARR_B;i=LCM_ARR_A*j)
{j++;
if(GCD_ARR_B%i==0)
count++;

}
      return count;
}

int main()
{
    /*scan size of array a,b*/
   int a_count,b_count;
   int i;
   int res=0;
   int arraya[100],arrayb[100];
       scanf("%d %d",&a_count,&b_count);
       /*scan the array */
    for (i=0;i<a_count;i++) {
        scanf("%d",&arraya[i]);

   }
   for (i = 0; i < b_count; i++) {
     scanf("%d", &arrayb[i]);
   }

   res= getTotalX(a_count, arraya, b_count, arrayb);

   

printf("%d",res);
   return 0;
}
