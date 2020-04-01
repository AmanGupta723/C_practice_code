#include<stdio.h>
#include<string.h>
char ch[5][4]={"cat","dog","tac","god","act"};
int main()
{int i,j,t;
char temp;
char chs[5][4]={"cat","dog","tac","god","act"};
char temp1[4];
char temp2[4];
int check;
	for(i=0;i<5;i++)
	{
		printf("  %s",chs[i]);
	}
	for(i=0;i<5;i++)
	for(t=0;t<2;t++)
	for(j=0;j<2-t;j++)
	if(chs[i][j]>chs[i][j+1])
	{
		temp=chs[i][j];
		chs[i][j]=chs[i][j+1];
		chs[i][j+1]=temp;

			}
			
	for(j=0;j<4;j++)
	for(i=0;i<4-j;i++)
	{
	check=strcmp(chs[i],chs[i+1]);
	if(check>0)
	{
		strcpy(temp1,chs[i]);
		strcpy(temp2,ch[i]);
		strcpy(chs[i],chs[i+1]);
			strcpy(ch[i],ch[i+1]);
		strcpy(chs[i+1],temp1);
				strcpy(ch[i+1],temp2);
	}
	
	}
		for(i=0;i<5;i++)
	{
		printf(" \n %s",ch[i]);
	}
		}

