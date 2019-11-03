/*****************************************************************************************************************************/
/***************function takes the string and return string in that way**************/
/*
Hacker
Hce akr
*/
char* Fun(char * string)
{
   // static char modified_arr[22];
    int size_word=0;
    int i=0,j=0;
    while(string[i]!='\0')
    {
        size_word++;
        i++;
    }
    //the requird length for modified string
   // size_word+1+1
   char * modified_arr=(char *)malloc(sizeof(char)* (size_word+2));
    modified_arr[size_word+1]='\0';// add terminator in the end of string
    //one for terminator and another for space
    // the modifiy start from the last of string because  the filling will be easier
    //especially after increase the space

    j=(size_word+1+1)-2; // j stands at the position of k at another string
    //R a n k \0 ------------>   R n   a k \0
    for(i=size_word-1;i>=1;i-=2)
    {
        modified_arr[j]=string[i];
        j--;
    }
    //add space
    modified_arr[j]=' ';
      j--; // to avoid the over writing on that 
     for(i=size_word-2;i>=0;i-=2)
    {
        modified_arr[j]=string[i];
        j--;
    }

    return modified_arr;
}

int main()
{
    char string[26];
    char * return_ptr_char;
    scanf("%s",&string);
    int i;
   return_ptr_char=Fun(string);
   printf("%s",return_ptr_char);

    return 0;
}
