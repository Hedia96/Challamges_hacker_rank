#include <stdio.h>

/*
Name       : IsEven
Description: this function returns bool to know the number is even or odd 
             without using the modulos operator
Arguments  : int number
Return     : bool true for even ,false for odd


*/
typedef enum BOOL_enum {False=0,True=1} bool;

bool IsEven(int number)
{
    /*method 1 using mod operator */
    /*
    if(number%2==0)
    {
        return True;
    }else
    {
        return False;
    }
    */
/*******************************************************************************************************************/
    /*method 2 */
    /*using the loops initalilly from 1 to the number that you test, and toggle acertain flag
    isevenflag=!isevenflag in each iteration so after the loop if the value of flag is the same before it is envolved in the 
    loop so the number is even else the number is odd*/
/**************************************************************************************************************/    
    /*method 3 : bit wise the number with 0x01 and the least signicant bit if it equals one ->odd else 0->even
    the number 5,8
    00000101 & 00000001=00000001
    00001000 & 00000001=00000000
    */
    if(number &0x01)
    {
        return False;
    }else
    {
        return True;
    }
}


int main()
{
    int num;
    printf("Enter the number u want to check is even or not:\n");
    scanf("%d",&num);
if(IsEven(num))
{
    printf("the number is even\n");
}else
{
    printf("the number is odd");
}
    return 0;
}
