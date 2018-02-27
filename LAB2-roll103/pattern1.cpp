#include<bits/stdc++.h>


using namespace std;

int main()
{
int n,i=1,j;
cout<<"Enter the value of n\n";
cin>>n;

while(i<=n-1)
{
cout<<setw(n-i+1)<<" ";
	for(j=1;j<=i;j++)
	{
		
		cout<<j;
	}
	for(int k=j;k>=1;k--)
	{
		cout<<k;
	}
cout<<endl;
i++;
}

return 0;
}
