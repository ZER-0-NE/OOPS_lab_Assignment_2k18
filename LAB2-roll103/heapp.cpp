#include<bits/stdc++.h>
using namespace std;
int heap[100];
int cnt=0;

void disp()
{
	if (cnt==0)
	{
		cout<<"HEAP EMPTY :";
	}
	else
	{
		int i;
		cout<<"HEAP :";
		for(i=0;i<cnt;i++)
			cout<<heap[i]<<" ";
		cout<<endl;
	}
}

void add_element(int x)
{
	if(cnt==0)
	{
		heap[0]=x;
		cnt=1;
		disp();
	}
	else
	{
		heap[cnt]=x;
		int i=cnt;
		int par = floor((cnt-1)/2);
		while(heap[i]>heap[par] )
		{
			int temp;
			temp = heap[par];
			heap[par] = heap[i];
			heap[i] =temp;
			if(par==0)
				break;
			i=par;
			par = floor((par-1)/2);
			
		}
		cnt++;
		disp();

	}
}


int del_element()
{
	if(cnt==0)
		return -1;
	int del = heap[0];
	int i=0;
	while(i<cnt)
	{
		int fill=max(heap[2*i+1],heap[2*i+2]);
		heap[i]=fill;
		if(fill==heap[2*i+1])
		{
			i=2*i+1;
		}
		else
		{
			i=2*i+2;
		}
	}
	cnt--;
	return del;
}

int main()
{
	int  n,x;
	cout<<"Number of elements to enter :";
	cin>>n;
	cout<<"Enter Elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		add_element(x);
	}
	disp();
	del_element();
	disp();
	return 0;
}