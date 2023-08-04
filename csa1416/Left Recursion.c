#include<stdio.h>
#include<string.h>
#define size 20
int main()
{
	char production[10][size],nt,alpha,beta;
	int i,n,index=3;
	printf("Enter the number of productions:");
	scanf("%d",&n);
	printf("Enter the grammar:");
	for(i=0;i<n;i++)
	{
		scanf("%s",production[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nGrammar:%s",production[i]);
		nt=production[i][0];
		if(nt==production[i][index])
		{
			while(production[i][index]!=0 && production[i][index]!='|')
			index++;
			alpha=production[i][index+1];
			printf("\nleft recursion");
			while(production[i][index]!=0 && production[i][index]!='|')
			index++;
			if(production[i][index]!=0)
			{
				beta=production[i][index+1];
				printf("\nGrammer without left recursion");
				printf("\n%c->%c%c\'",nt,beta,nt);
				printf("\n%c\'->%c%c\'|E\n",nt,alpha,nt);
			}
			else
			printf("\nCan't be reduced");
		}
		else
		printf("\nis not left recursive");
		index=3;
	}
}
