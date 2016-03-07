#include<cstdio>
using namespace std;
int rcs(int a)
{
	if(a==1)
	{
		printf("%d\n",a);
		return 0;
		}
		
	if((a%2)==0)
	{
		printf("%d\n",a);
		rcs(a/2);
		}
	if((a%2)==1)
	{
		printf("%d\n",a);
		rcs(3*a+1);
		}
	}


int main()
{
	int question;
	scanf("%d",&question);

	rcs(question);
	return 0;
	}


