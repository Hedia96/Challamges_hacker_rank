
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

/*
 * Complete the getTotalX function below.
 */
 int LeastCommonMultipl(int Copy_int_a1,int Copy_int_a2)
 {  int Local_int_Max=Copy_int_a1;
    int LCM=Local_int_Max;
    /*input verification it shouldn't equal zero because they shall be a divded  */
    if(Copy_int_a1 == 0 || Copy_int_a2 ==0)
    {
        printf("Error ");
    }
   Local_int_Max =(Local_int_Max > Copy_int_a2) ? Copy_int_a1 : Copy_int_a2;
   while (Local_int_Max % Copy_int_a1 != 0 || Local_int_Max % Copy_int_a1 != 0) {
       LCM=LCM+Local_int_Max;
   }
   return LCM;
 }
 int GreatestCommonDividor(int Copy_int_a1,int Copy_int_a2)
 {
  
int i=1;
int gcd=0;

for (; i <= Copy_int_a1 && i <= Copy_int_a2 ;i++) {
  if (Copy_int_a1 %i ==0 && Copy_int_a2 %i ==0) {
      gcd=i;
  }
     }
return gcd;
 }
int getTotalX(int a_count, int* a, int b_count, int* b) {
   
      int  Local_u16Number=0;
      int i=0;
      int Local_Multiple_of_lcm=2;
      int lcm_arrayA = a[0];
      int gcd_arrayB = b[0];
      for (i = 1; i < a_count; i++) {
        lcm_arrayA = LeastCommonMultipl(lcm_arrayA, a[i]);
      }
      for (i = 1; i < b_count; i++) {
        gcd_arrayB = GreatestCommonDividor(gcd_arrayB, b[i]);
      }
      for (i = lcm_arrayA; i <= gcd_arrayB ;i=Local_Multiple_of_lcm*lcm_arrayA ,Local_Multiple_of_lcm++) {
          if(lcm_arrayA %i ==0)

{
    Local_u16Number++;
}      }


      return Local_u16Number;
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
