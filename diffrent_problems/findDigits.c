
#include <stdio.h>
int findDigits(int n) {
    int total_num_divisor_digits=0;
    int temp=n;
    int rem;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem)
       {
           if((n%rem)==0)
        {
            total_num_divisor_digits++;
        }
       }
        
        
        temp=temp/10;
    }

return total_num_divisor_digits;
}
int main()
{
    printf("%d",findDigits(1012));

    return 0;
}
