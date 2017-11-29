#include<stdio.h>
using namespace std;
int stack[100],top=-1;
void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
int main()
{
	int n,nest,nestpos,max,maxpos;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			push(1);
		}
		if(a[i]==2)
		{
			pop();
		}
	}
}
