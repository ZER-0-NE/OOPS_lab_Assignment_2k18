#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,i=1;
cout<<"Enter the value of n\n";
cin>>n;

cout<<endl;
int j=1;
while(i<=n-1)
{
cout<<1<<setw(n-i)<<" ";
cout<<1;
cout<<setw(j+=2)<<1;
cout<<endl;
i++;
}

return 0;
}

