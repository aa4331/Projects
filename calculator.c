#include<stdio.h>
main()
{
	int a,b,c,d,e,f,i;
	
	printf(" Enter 2 numbers ");
	scanf("%d%d",&a,&b);
	
	printf(" Press 1 to Add ");
	printf("\n Press 2 to Subtract ");
	printf("\n Press 3 Multiply ");
	printf("\n Press 4 to Divide ");
	
	scanf("%d",&i);
	
	if(i==1)
	{
	   c=a+b;
	   printf("\n Sum = %d",c);	
	}
	else if(i==2)
	{
	   d=a-b;
	   printf("\n Subtract = %d",d);	
	}
	else if(i==3)
	{
		e=a*b;
		printf("\n Product = %d",e);
	}
	else if(i==4)
	{
		f=a/b;
		printf("\n Division = %d",f);
	}
	else
	{
		printf("\n Invalid Input ");
	}
}
