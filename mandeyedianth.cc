#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int N,ar=10000;
  char a[ar],b[ar];
  cin>>N;
  for (int x=1;x<=N;x++)
  {
    cin>>a[x];
  }
  for (int y=1;y<=N;y++)
  {
    cin>>b[y];
  }
 int count;
  for (int i=0;i<N;i++)
  {
    if(a[i]==b[i])
    {
  		   for(int k=0;k<=N;k++)
  		   {
  		   	a[k]=a[k+1];
  		   	b[k]=b[k+1];
  		   	count++;
			}
    }
    else
    {
    	b[N]=b[i];
    	for(int m=0;m<=N;m++)
    	{
    		b[i]=b[i++];
    		
		}
	}
  }
  cout<<count;
}

