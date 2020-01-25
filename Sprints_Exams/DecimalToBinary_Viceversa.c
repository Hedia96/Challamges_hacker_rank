/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{/*//get the numbrer is power 2 or no?
    int max_size_int=sizeof(int)*(8)-1;
    int i=max_size_int;
    int num;
   int count=0;
    scanf("%d",&num);
    while(i>=0)
    {
        if(num &(1<<i))
        count++;
     
     i--;   
    }
    if(count ==1)
    {
        printf("%d the num is power of 2\n",num);
    }else
    {
        printf("False\n");
    }
   // printf("Hello World");
*/
  int short num=111;
   int count=0,i;
    int decimal_num=0;
    int d;
    scanf("%d",&num);
for(i=0;i<16;i++)
{
    //d=num &(1<<i); casue num evemn is 111 it has own implemntayion in binary
    d=num%10;
    printf("d:%d\n",d);
    decimal_num=decimal_num+(d*pow(2,i));
    num/=10;
}
printf("%d",decimal_num);
    return 0;
}
