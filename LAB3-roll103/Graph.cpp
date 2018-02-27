#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,j,v,e,i;
	cout<<"Enter number of vertices :";
	cin>>v;
	cout<<"Enter number of Edges :";
	cin>>e;
	int mat[v][v];
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			mat[i][j]=0;
		}
	}
	cout<<"Enter Edges (node value should be less than "<<v<<") :"<<endl;
	for(i=0;i<e;i++)
	{
		cin>>x>>y;
		mat[x][y]=1;
		mat[y][x]=1;
	}
	cout<<endl<<"ADJACENCY MATRIX :"<<endl;
	cout<<"  ";
	for(i=0;i<v;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(i=0;i<v;i++)
	{
		cout<<i<<" ";
		for(j=0;j<v;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"ADJACENCY LIST :"<<endl;
	for(i=0;i<v;i++)
	{
		cout<<i<<" -> ";
		for(j=0;j<v;j++)
		{
			if(mat[i][j]==1)
				cout<<j<<" ";
		}
		cout<<endl;
	}
}
