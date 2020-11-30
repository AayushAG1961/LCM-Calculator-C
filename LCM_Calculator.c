#include<stdio.h>

int lcm(int x,int y);
int main()
{
	int n1,n2,res;
	printf("Enter a number : ");
	scanf("%d",&n1);
	printf("Enter another number : ");
	scanf("%d",&n2);
	if(n1,n2)
		res= lcm(n1,n2);
	else
		res= lcm(n2,n1);
	printf("LCM of %d and %d = %d",n1,n2,res);
	return 0;
}
int lcm(int x, int y)
{
	static int rtn=0;
	
	rtn += y;
	
	if((rtn%x==0) && (rtn%y==0))
		return rtn;
	else
		return lcm(x,y);	
}
