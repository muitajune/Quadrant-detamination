#include<stdio.h>
int main()
{
	int x, y;
	
	printf("Enter the X-axis cordinate is  :",x);
	scanf("%d", &x);
	
	printf("Enter the Y-axis cordinate is  :", y);
	scanf("%d", &y);
	
	for(x>0; y>0;)
	{
		printf("coordinates lies in 1st quardrant");
	}
	for(x<0; y>0;)
	{
		printf("coordinates lies in 2nd quardrant");
	}
	for(x<0; y<0;)
	{
		printf("coordinates lies in 3rd quardrant");
	}
	for(x>0; y<0;)
	{
		printf("coordinates lies in 4th quardrant");
	}
	return 0;
}