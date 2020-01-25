
/*
// this pattern compose from nine col and five rows.
*        *
 *      *
**********
    * *
     *
*/
#include <stdio.h>
void pattern(int numRows)
{
int counter_rows=0;
int counter_cols=0;
int size_col=9;
int size_row=numRows;
for(counter_rows=0;counter_rows<size_row;counter_rows++)
{
    for(counter_cols=0;counter_cols<size_col;counter_cols++)
    {
        if(counter_cols==counter_rows ||(counter_cols == (size_col-counter_rows-1)))
        {
            printf("*");
        }
       else if(counter_rows ==(int)(size_row/2))// middle row
       {
           printf("*");
       }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
        
    
}
    
}


int main()
{
   pattern(5);

    return 0;
}
