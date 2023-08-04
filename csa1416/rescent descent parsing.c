/*valid input
(a,a)$ 
(a)$ 
((a,a))$ */

#include<stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();

void s()
{
	if(p[c]=='a')
	c++;
	else if(p[0]=='(')
	{
		c++;
		l();
		if(p[c]==')')
		c++;
		else
		c--;
	}
	else
	printf("invalid expression\n");
}
void l()
{
	s();
	lprime();
}

void lprime()
{
	if(p[c]==',')
	{
		c++;
		s();
		lprime();
	}
}
int main()
{
	printf("\nImplementation of recursive descent parsing\n");
	printf("\nEnter the Input String\n");
	scanf("%s",&p);
	s();
	if(p[c]=='$')
	printf("string is accepted");
	else
	printf("string is rejected");
	
}
