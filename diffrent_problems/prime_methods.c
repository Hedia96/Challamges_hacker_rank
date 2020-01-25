/**********************************************************************first method**************************************/
/*********************************************************************************************
* name: Isprime
* Arguments :int // should  be a nature number (1,2,3,......)
* Return : 0 or 1  it may be boolen type.
*
***********************************************************************************************/


#define TRUE  1
#define FAlSE 0

int Isprime(int n)
{
    int i;
    if(n==1)
    {
         return 0;  
    }
   else if(n!=2&& n%2==0)  // any neven number
    {
        return 0;
    }
    else
    {
        for(i=3;i<n;i+=2)    // any odd numbers 
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int main()

{
    
     int num;
	scanf("%d", &num);              			
   int i;
   for(i=2;i<=num;i++)
   {
       if(Isprime(i))
       {
           printf("%d ",i);
       }
   }
    
    
    return 0;
}
    
    /*********************************************************second method**************************************************/
    /*
    why when we loop to n number to find divisible for that number is checked  we can make looop for square root 
    of the number to reduce the time complexity like this example
    1*36
    2*18
    4*9
    6*6
    -------
    then after six by six we found the numbers are repeated 
    9*4
    .....and so on till 36*1
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
