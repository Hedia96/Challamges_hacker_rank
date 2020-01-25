#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    // write number till the last number in interval  is nine 9
    //if number is greater than nine check is even or odd
    
  ////////////////////////////////////
    if(a<b)
    {
    for(int i=a;i<=b;i++)
    {  
             if(i>9)
                break;
        switch(i)
        {
             case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
          } 
     
       
             
     
    }
}
    /////////////////////////////////////
    if(b>9 && b>a)
    {
        for(int i=10;i<=b;i++)
        {
        if((i%2)==0)      
           printf("even\n");
        else
          printf("odd\n");
            
        }

    }


    return 0;
}

