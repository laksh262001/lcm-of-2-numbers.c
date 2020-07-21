#include<stdio.h>
int lcm(int x,int y);
main()
{int a,b,res;
printf("Enter the values of a and b\n");
scanf("%d%d",&a,&b);
res=lcm(a,b);
printf("LCM of %d and %d is %d",a,b,res);
}
int lcm(int x, int y)
{
	int nr,dr,lcm,gcd,rem;
	if(x>y)
	{
		nr=x;
		dr=y;
	}
	else
	{
		nr=y;
		dr=x;
	}
	rem=nr%dr;
	while(rem!=0)
	{
		nr=dr;
		dr=rem;
		rem=nr%dr;
	}
	gcd=dr;
	lcm=(x*y)/gcd;
	return lcm;
}
