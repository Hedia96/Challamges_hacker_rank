
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/****** the idea of the problem on hacker rank (bigger is greater ) to  achieve two conditions :

It must be greater than the original word
It must be the smallest word that meets the first condition

that means the next permutation to be in that required order
ex: abcd ->abdc




****/

void sort_range(char * start_ptr, char * end_ptr)
{
   char * ptr_moving;

   char * s=start_ptr;
   char * temp_ptr_addres_min_letter_toswap;

   while(s<end_ptr)
   {
       /**in that sorting  two pointters one for start and another for to the end of array
       we can generlaize the idea in linked list for example  **/
       ptr_moving=s;
       temp_ptr_addres_min_letter_toswap=s;
       while(ptr_moving<=end_ptr)
        {
             if(*ptr_moving<*s)
             {
             temp_ptr_addres_min_letter_toswap=ptr_moving;
             swap(s,temp_ptr_addres_min_letter_toswap);
             }


            ptr_moving++;

        }

       s++;

   }

}
void swap(char * p1,char * p2)
{
    char temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
char *next_permutation(char * string)
{
    static char result_last_prem[]="no answer";
    int pivot_index=0;
    int successor_index;
    //get the length of the string number of letters
    int Length_word=strlen(string);
    int i=Length_word-1; // this counter start from right side in the word to be first in changing (next premutation)
    successor_index=Length_word-1;
   // printf("length of word %d\n",Length_word);
   // printf("%c\n",string[i-1]);
   // get suffix or the sequence deacresing string or numbers


   while(i>0&& string[i-1]>=string[i])
    i--;

pivot_index=i-1;



if(pivot_index <0)
    return result_last_prem;

//after get the  pivot we should get the smallest letter in suffix and greater than pivot
//and swap it with pivot after that in another word e find the sucessor of pivot
// search the index of  next elemet after pivot on the right hand
while(string[successor_index]<=string[pivot_index])
    successor_index--;

swap(string+successor_index,string+pivot_index);


sort_range(string+i,&string[Length_word-1]);

//printf("after sorting %s\n",string);

    return string;
}

int main()
{
    char ARR_2D[100][28];
   // create dynamic allocation  to avoid reserve 10000 in stack it is waste of //resources

    int size;
    int i;
   scanf("%d",&size);
  //char * ARR_2D=(char* )malloc(size*sizeof(char));
    for(i=0;i<size;i++)
    {

        scanf("%s",(ARR_2D+i));
    }
      for(i=0;i<size;i++)
    {

        printf("%s",*(ARR_2D+i));
    }
for(i=0;i<size;i++)
{

    printf("%s\n",next_permutation(ARR_2D+i));
}


    return 0;
}
