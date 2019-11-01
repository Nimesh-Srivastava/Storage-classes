/*Storage classes, scope, and linkage*/
#include<stdio.h>
#include<conio.h>

char ans='y';

int disp_default(void)
{
	int a;
	return a;
}

int disp_static(void)
{
	static int a;
	return a;
}

int disp_regist(void)
{
	register int a;
	return a;
}

int main()
{
	while(ans=='y')
	{
		clrscr();
		printf("\n\nDisplaying auto variable     : %d",disp_default());
		printf("\n\nDisplaying static variable   : %d",disp_static());
		printf("\n\nDisplaying register variable : %d",disp_regist());
		printf("\n\n\n\n\n\n\nWant to display again(y/n) : ");
		scanf("%s",&ans);
	}
	return 0;
}