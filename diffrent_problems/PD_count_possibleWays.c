
/*
Name        : count_ways
Description : this function calculate the all possible ways 
                to climb stairs by different steps like 
                for exampe no_stairs=3 and max_step=2 so we can climb from ground 
                to a certain step  (2 ) lke that 1,1 or 2 so there are two possible ways 
                to reach second stair.
                and for third stair  there are three steps -> 1,1,1 or 1,2 or 2,1 .
Arguments  : int unsigned number indicates for the number of stairs 
                and another unsigned int represents the max step at a time .
                
Return     : int unsigned number for possible ways
            
HoW GET THE IDEA ???
from that nature of problem , it can be realized that the recurison  in it 
we can think in two approches :
                    1-top down 
                    2- bottom up 
and there are two examples to interpret both of them  our target fifth stair so how to get the answer
depends on how u ask your self question and draw some tree (it is called recursive tree) and how to subproblem 
the target(5th stair ).so the root is 5  and next level depend on how to reach from them through the possible 
steps ( 1 or 2) ,we can come from (4 or 3 )th stair respectivly till reach the base case (stand on the ground so the possible way is 1 to climb to 1st stair or arrive to 1st one from 0 is only one too ) . 
 this is called top down approche
 
 another example ... if i start from base case and grow it  gradually till reaching the target 
 like asking what the possible ways to reach 1st stair ?
 then asking what the possible ways to reach 2nd stair ? and so on ....till asking to the 5thstair?
  so we found
  0 1 2 3 4 5 -> number_stairs
  1 1 2 3 5 8 -> number of possible ways to climb the stair 
  we call 0th and 1 st stair are base case 
  



*/
//simple implementation for fibnocci series as recursive function
int
fib (int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return fib (n - 1) + fib (n - 2);
}

unsigned int
count_ways (int unsigned no_stairs, unsigned int max_step)
{
  int total = 0;
  int i, j;
  //create the array to save the 
  int *arr_nodes = (int *) malloc ((no_stairs + 1) * sizeof (int));	//we save an element for 0 to n so we create n+1 
  arr_nodes[0] = 1;
  arr_nodes[1] = 1;

  if (no_stairs == 0 || no_stairs == 1)
    return 1;
  else
    {
      for (i = 2; i <= no_stairs; i++)
	{
	  total = 0;
	  for (j = 1; j <= max_step; j++)
	    {
	        if(i-j>=0)
	      total += arr_nodes[i - j];
	    }
	  arr_nodes[i] = total;
	  
	}

    }

  return arr_nodes[no_stairs];
}

int
main ()
{
  printf ("fib %d\n", fib (5));
  printf ("dynamic prog %d\n", count_ways (6, 2));
  return 0;
}
