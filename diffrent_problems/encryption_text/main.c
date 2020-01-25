
#include<stdio.h>
#include<stdlib.h>

char ** StringTok(char * string,char * delimeter)
{
static char ARR_2D[9][9]={0};
int i=0;
int j=0,k=0;

while(string[i]!='\0')
{
    if(string[i]!= *delimeter)
    {
        *(*(ARR_2D+j)+k)=string[i];
        k++;
    }else // here if the delimeter is found so we move to another row
    {
        ARR_2D[j][k]='\0';
        j++;
        k=0;

    }
    i++;
}
for(i=0;i<4;i++)
    printf("%s\n",ARR_2D[i]);

return ARR_2D;
}

char * ConversionTime(char * s)
{
    char * s_modified=(char*)malloc(sizeof(char)*100);
    char dem=':';
StringTok(&s,&dem);

    return s_modified;
}


int getmoneySpend(int Budget,int K_count,int D_count,int* Arr_k,int * Arr_D)
{
    int maxnumber=-1;
    int sum=0;
    int i,j;
    for(i=0;i<K_count;i++)
    {

        for(j=0;j<D_count;j++)
        {
            sum=Arr_D[j]+Arr_k[i];
            if(sum<Budget && sum>maxnumber)
            {
                 maxnumber=sum;
            }
        }
    }

    return maxnumber;
}
int main()
{
/*****************************************encryption Question as hacker rank******************************/
    /*
    //enter the string
    char * str;
    gets(str);
    ///******call function make th encryption
    return 0;
    */

    /************************************Two arraies one for Keyboard 's prices and another for USB drivers's prices according to certain budget
    the function should get the maximum number and less than budget and this number equals the sum of 1 keyboard + 1 USB driver

    ******************/
    /*
    int b,k_no,D_no;
   int arr_D[20];
   int arr_K[20];
    int i,j;
    scanf("%d %d %d", &b,&k_no,&D_no);
    for(i=0;i<k_no;i++)
    {
        scanf("%d",(arr_K+i));
    }
     for(j=0;j<D_no;j++)
    {
        scanf("%d",arr_D+j);
    }
   printf("the result is %d\n",getmoneySpend(b,k_no,D_no,arr_K,arr_D));
*/
/********************conversion time from 24 hour to 12 hour representation

********/
//char * stringTimeA_P_format=(char *)malloc(sizeof(char));
char * stringTimeA_P_format=(char *)malloc(100*sizeof(char));
scanf("%s",&stringTimeA_P_format);
printf("%s",ConversionTime(stringTimeA_P_format));
}
