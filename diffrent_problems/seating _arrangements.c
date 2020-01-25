
// Sample code to perform I/O:
#include <stdio.h>
#define NUM_SEATS_AT_COMPARTMENT 12
int main(){
	int test_cases;
	int seat_no;
	int mod;
	scanf("%d", &test_cases);              		
	while(test_cases)
	{
	    scanf("%d",&seat_no);
	    //get the type of seat from it number and add or 
	    mod=seat_no%NUM_SEATS_AT_COMPARTMENT;
	   
	   switch(mod) 
	   {
	       case 0:
	                printf("%d ",seat_no-11);
	            
	       break;
	       
	       case 1:
	            printf("%d ",seat_no+11);
	       break;
	       
	       case 2:
	                printf("%d ",seat_no+9);
	       break;
	       
	       case 3:
	                  printf("%d ",seat_no+7);
	            
	       break;
	       
	       case 4:
	              printf("%d ",seat_no+5);
	            
	       break;
	       
	       case 5:
	             printf("%d ",seat_no+3);
	       break;
	       
	       case 6:
	             printf("%d ",seat_no+1);
	       break;
	       
	       case 7:
	             printf("%d ",seat_no-1);
	       break;
	       
	       case 8:
	             printf("%d ",seat_no-3);
	       break;
	       
	       case 9:
	            printf("%d ",seat_no-5);
	       break;
	       
	       case 10:
	       printf("%d ",seat_no-7);
	            
	       break;
	       
	       case 11:
	            printf("%d ",seat_no-9);
	       break;
	       
	      
	       
	   }
	   switch(mod)
	   {
	       case 1:case 0: case 6 :case 7:
	       printf("WS");
	       break;
	       case 2:case 11:case 5:case 8:
	       printf("MS");
	       break;
	       case 3:case 10: case 4:case 9:
	       printf("AS");
	       break;
	       
	   }
	   printf("\n");
	    
	    test_cases--;
	}

}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
