#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the timeInWords function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
#include<stdio.h>
#include<string.h>



char * NumToString(int num)
{
    
    switch(num)
    {
        case 1:
        return "one";
        break;
        case 2:
        return "two";
        break;
        case 3:
        return "three";
        break;
        case 4:
        return "four";
        break;
        case 5:
        return "five";
        break;
        case 6:
        return "six";
        break;
        case 7:
        
        return "seven";
        break;
        case 8:
        return "eight";
        break;
        case 9:
        return "nine";
        break; 
        case 10:
        return "ten";
        break;
        case 11:
        return "eleven";
        break;
        case 12:
        return "twelve";
        break;        
        case 13:
        return "thirteen";
        break;
        case 14:
        return "fourteen";
        break;
        case 15:
        return "quarter";
        break;
        case 16:
        return "sixteen";
        break;
        case 17:
        return "seventeen";
        break;
        case 18:
        return "eighteen";
        break;
        case 19:
        return "ninteen";
        break;
        case 20:
        return "twenty";
        break;
        
        case 21:
        return "twenty one";
        break;
        case 22:
        return "twenty two";
        break;
        case 23:
        return "twenty three";
        break;
        case 24:
        return "twenty four";
        break;
        case 25:
        return "twenty five";
        break;
        case 26:
        return "twenty six";
        break;
        case 27:
        return "twenty seven";
        break;
        case 28:
        return "twenty eight";
        break;
        case 29:
        return "twenty nine";
        break;
        
        
    }
    return " " ;
}
char* timeInWords(int h, int m) {


char * str1=(char *)malloc(100*sizeof(char));

if(m==0)
{
    switch(h)
    {
        case 1:
        str1="one o' clock";
        break;

    case 2:
     str1="two o' clock";
        break;
    case 3:
     str1="three o' clock";
        break;
    case 4:
     str1="four o' clock";
        break;
    case 5:
     str1="five o' clock";
        break;
    case 6:
     str1="six o' clock";
        break;
    case 7:
     str1="seven o' clock";
        break;
    case 8:
     str1="eight o' clock";
        break;
    case 9:
     str1="nine o' clock";
        break;
    case 10:
     str1="ten o' clock";
        break;
    case 11:
     str1="eleven o' clock";
        break;
    case 12:
     str1="twelve o' clock";
       
    }
}
else if(m<=30 && m>=1)
{
   if(m==1)
   {
            strcpy(str1,NumToString(m));
            strcat(str1," minute past ");
            strcat(str1,NumToString(h));
        

   }
   else if(m>1&&m<15)
        {
            strcpy(str1,NumToString(m));
            strcat(str1," minutes past ");
            strcat(str1,NumToString(h));
        }
else if(m==15)
{
            strcpy(str1,"quarter past ");
            strcat(str1,NumToString(h));  
}
else if( m>15 && m<30)
{
            strcpy(str1,NumToString(m));
            strcat(str1," minutes past ");
            strcat(str1,NumToString(h));

}
else if(m==30)
{
         strcpy(str1,"half past ");
         strcat(str1,NumToString(h)); 
}

}
else //print 60-min to hour+1
{
    if(m!=45)
    {
    strcpy(str1,NumToString(60-m));
    strcat(str1," minutes to ");
    strcat(str1,NumToString((h+1)));
    }
    else
    {strcpy(str1,"quarter to ");
     strcat(str1,NumToString((h+1)));

    }
   
   

}
return str1;
}
/*
int main()

{
    int h,m;
    scanf("%d",&h);
    scanf("%d",
    &m);
   // char static str1[100];
     //strcpy(str1,NumToString(m));
    printf("%s",timeInWords(h,m));
    return 0;
}
*/
int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* h_endptr;
    char* h_str = readline();
    int h = strtol(h_str, &h_endptr, 10);

    if (h_endptr == h_str || *h_endptr != '\0') { exit(EXIT_FAILURE); }

    char* m_endptr;
    char* m_str = readline();
    int m = strtol(m_str, &m_endptr, 10);

    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }

    char* result = timeInWords(h, m);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
