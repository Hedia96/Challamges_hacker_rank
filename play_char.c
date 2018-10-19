#include<stdio.h>
int main()
{
char str[100];
char word[28];
char ch;
scanf("%c",&ch);
scanf("%s",word);
// problem here because the previous instruction because scanf reads till new line so the next one should read the remainig 
// char which is anew line not the wanted statment
scanf("\n");
scanf("%[^\n]%*c", str);
printf("%c\n",ch);
printf("%s\n",word);
printf("%s",str);

return 0;
}
