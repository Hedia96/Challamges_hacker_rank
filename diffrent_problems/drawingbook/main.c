#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     //int min_turned_pages=0;
     int  pages_from_start=0;
     int  pages_from_end=0;
     int target=p;

          while(target>1)
          {
              target=target-2;
             // printf("ff");
            pages_from_start++;
          }


      target=p;



      if(p==n-1 && ((n%2)==0))
      {
          pages_from_end=1;

      }else if(p==n-1 && ((n%2)!=0))
      {
          pages_from_end=0;
      }
      else
      {

            while(target<n-1)

            {
                target+=2;
                pages_from_end++;
            }
      }
if(pages_from_end<pages_from_start)
return pages_from_end;
else return pages_from_start;
}
int main()
{
    int p,n;
   // n=21235;p=17;
  //  n=6,p=2;
 n=6,p=5;
 //  n=96993,p=70030;
   // n=7,p=4;
    /*
    scanf("%d",&n);
    scanf("%d",&p);

    */
    int result=0;
    result=pageCount(n,p);
    printf("%d\n",result);
    return 0;
}
