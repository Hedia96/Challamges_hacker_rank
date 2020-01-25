#include <stdio.h>
#include<stdlib.h>

/*
name       :spaceremove  
description:space remove replace a spce with a single character
            and implicitly calculate the length of string
arguments: string ptr to char
return: modified string and its type is ptr to char too



*/
char * spaceremove(char * string)
{
char * modified_str=(char *)malloc(100*sizeof(char));
int counter=0;

int length_arr=0;
int i=0;

while(string[i])
{
    i++;
    length_arr++;
}
i=0;
while(i<length_arr)
{
   
if(string[i]!=' ')    
{
    modified_str[i]=string[i]; 
}else
{
    modified_str[i]=',';
}
i++;

}
modified_str[i]='\0';



return modified_str;



}

/*
name       :spacereplace_manychars
description:space remove replace a spce with a many characters(3 chars)
            and implicitly calculate the length of string
arguments: string ptr to char
return: modified string and its type is ptr to char too
*/
/*
the idea of how modifiy and write on the space index two character or three 
ex:
aya hedya engineer
aya***hedya***engineer

how we write and modify .the best answer from the end of the string or array to avoid overwriting 
like this 
aya***dya***gineer =
but we should :
1- calculate the number of spaces in the original string
2- then modify the length after increase the number of added char here if we said ' '->***
so the newlengh=oldlength+(no. spaces* (number of added chars-1)) because there is already a place for the space before
3- modifiy the string from backword and insert the characters from the right  hand side to avoid overwriting
like this  

*/
char * spacereplace_manychars(char * string)
{
	#define no_addedchar  3
char * modified_str=(char *)malloc(100*sizeof(char));
int counter=0;

int length_arr=0;
int i=0,no_spaces=0;

while(string[i])
{
    i++;
    length_arr++;
		if(string[i]==' ')
		{
			no_spaces++;
		}
}
i=0;
int new_length=length_arr+(no_spaces*(no_addedchar-1));
for(i=length_arr-1;i>=0;i--)
{
	if(string[i]!=' ')
	{
		modified_str[new_length-1]=string[i];
		new_length--;
		
	}else{
		modified_str[new_length-1]='*';
		modified_str[new_length-2]='*';
		modified_str[new_length-3]='*';
		new_length=new_length-no_addedchar;
				
	}
	
}
	return modified_str;
}
int main()
{
    char arr[100];
    gets(arr);
char * res;

//res=spaceremove(arr);
res=spacereplace_manychars(arr);
printf("%s",res);

    return 0;
}
