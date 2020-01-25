
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Complete the encryption function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char* encryption(char* s) {
char * string_without_space=(char *)malloc(81*sizeof(char));
static char string_after_decode[81];
static char Arr2D[10][10]={0};
int i=0,j=0,k=0;
double temp;
double number_letters=0;

double D_Ceiling_Rows=0;
double D_Floor_Cols=0;

//calculate the number of letters without spaces or null terminator.
while(s[i]!='\0')
{
  //  if('a'<=s[i]&&s[i]<='z')
  if(s[i]!=' ')
    {
        number_letters++;
        string_without_space[j]=s[i];
        //printf("%c",string_without_space[j]);
        j++;
    }
    i++;

}
string_without_space[j]='\0';
//printf("%s",string_without_space);


// the encryption methdology depends on the square root for the number of letters
//and take the floor for rows and ceiling for columns.
temp=sqrt(number_letters);
D_Floor_Cols=ceil(temp);
D_Ceiling_Rows=floor(temp);
//check the range of ceiling <rows<col<floor should satisft the multiplcation is greater or equal than the number of letters
if(D_Ceiling_Rows*D_Floor_Cols < number_letters)
{
 if(D_Ceiling_Rows<D_Floor_Cols)
    D_Ceiling_Rows++;
    else{
        D_Floor_Cols++;
    }
}

for(i=0;i<D_Ceiling_Rows;i++)
{
    for(j=0;j<D_Floor_Cols;j++)
    {
        Arr2D[i][j]=*(string_without_space+(j+((int)D_Floor_Cols*i)));

    }
    //printf("%s\n",Arr2D+i);
}


// put these letters after that in some sequence in vertical sequence and seperate each col of letters in space
for(j=0;j<D_Floor_Cols;j++ )
{
    for(i=0;i<D_Ceiling_Rows;i++)
    {
       // k=i+((int)D_Ceiling_Rows*j);
       if(Arr2D[i][j]>='a'&& Arr2D[i][j]<='z')
       {     string_after_decode[k]=Arr2D[i][j];
             k++;
       }
       else
        break;

    }

    string_after_decode[k]=' ';
     k++;

}


string_after_decode[k]='\0';
return string_after_decode;

}

int main()
{
/******enter the string************/
//char stringip[]=""; //it valid
char * stringip=(char *)malloc(sizeof(char));// it is valid

char * stringout=(char *)malloc(81*sizeof(char));

    gets(stringip);

/*****calling encryption****/
stringout= encryption(stringip);
printf("%s",stringout);

return 0;
}
