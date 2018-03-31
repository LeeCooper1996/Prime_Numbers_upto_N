#include"stdio.h"
#include"conio.h"
int prime(int i);

int main()
{
	int num,i;
	printf("\n Enter the number upto which you want to print all the prime numbers=");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	if(prime(i)==1)
	printf("%d\n ",i);
	
	return 0;
}

int prime(int i)
{
	int j;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		return 0;
	}
	return 1;
}
