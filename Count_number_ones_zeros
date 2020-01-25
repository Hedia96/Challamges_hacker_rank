#include<stdio.h>

int main(void)
{
	int input=0;
	int rem;
	int no_zereos=0;
int arr[32]={0};
int i=0;
int j=0;
	printf("please enter the number you want to calculate the number of zeros in it \n");
	scanf("%d",&input);
	
	/**conver to binary**/
	/**count the zeros **/
  printf("The Number is : %d\n",input);
/*


*/
	while(input>0)
	{

			rem=input%2;
			arr[i]=rem;
		//	printf("%d\n",rem);
			input=input/2;
			if(rem==0)
			{
				no_zereos++;
				
			}
		i++;
	}
for(j=0;j<32;j++)
{
		printf("The array is :%d",arr[j]);
}	
printf("The num of zeros :%d s",no_zereos);
	
	return 0;
}
