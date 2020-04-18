#include<stdio.h>
void add(int x,int y)
{
	int z;

	z=x+y;
	printf("\nSum of two numbers is %d",z);
	
}
void sub(int x,int y)
{
	int z;
	
	z=x-y;
	printf("\nDifference of two numbers is %d",z);
}
void mul(int x,int y)
{
	int z;
	z=x*y;
	printf("\nProduct of two number is %d",z);
}
main()    /*Takes something returns nothing*/
{
	int x,y;
	void add(int ,int);
	void sub(int ,int);
	void mul(int,int);
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&y);
	add(x,y);
	sub(x,y);
	mul(x,y);
	getch();
}
