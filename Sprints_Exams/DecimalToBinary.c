/*
Description: function convert the decimal number to  binary array
prototype  : char * DecimalToBinary(int number)
Arguments  : int number 
Return     :  char *  pointer to the array
*/
/*****************************************************************************************************************/
//Algorithm and some notes
/***
we note the pointer or array to return . we should  make it static  variable or make it stored in heap which is in ram but not stack 
to be visible for ontheer module not only for the module .

Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array
Step 2: Divide the number by 2 through / (division operator)
Step 3: Repeat the step 2 until number is greater than 0


if we store directly the resultant arry shoul be inversed  to understand  for example 
                  10 -> 1  0  1  0
but  we had  
                  10-> 0 1 0 1
 why ?????????????????????????
 


*/



/*******************************************************************************************************************/
#include <stdio.h>
char *DecimalToBinary(int number)
{char * ptr=(char *)malloc(sizeof(char)*10);
int i=0;
    while(number>0)
    {
        if(number%2)
        {
            ptr[i]='1';
        }else
        {
            ptr[i]='0';
        }
        number=number/2;
        i++;
    }

    ptr[i]='\0';
    return ptr;
}

int main()
{
 char * ptr;
 ptr=DecimalToBinary(5);
printf("%s",ptr);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
/***another edit solve temporarly in main not in function itsself to tackle the order of bits in representation
char *DecimalToBinary(int number)
{char * ptr=(char *)malloc(sizeof(char)*10);
//int i=7;
int i=0;

    while(number>0)
    {
        if(number%2)
        {
            ptr[i]='1';
        }else
        {
            ptr[i]='0';
        }
        number=number/2;
//        i--;
   i++;
    }
    ///////////the edit1 here pointer at the last elemet 
ptr=ptr+i;
    //ptr[i]='\0';
    return ptr;
}

int main()
{
 char * ptr;
 int i;
 ptr=DecimalToBinary(6);
 for(i=0;i<8;i++)
 {
/////////////////// after edit1   we present the content from backward to the first element
because the meaning of  pointer arthmitc is a back step for a location that  pointer points to.
printf("%c",ptr[-1*i]);
 }
printf("%s",ptr);
    return 0;
}*/
