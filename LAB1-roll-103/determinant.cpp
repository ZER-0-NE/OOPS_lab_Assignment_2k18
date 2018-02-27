#include<bits/stdc++.h>

using namespace std;

void print(int *ne,int si)
{cout<<"printing\n";
    for(int i=0;i<si;i++)
    {
        for(int j=0;j<si;j++)
            cout<<*(ne+j);
        ne=ne+si;
    }
    cout<<"done\n";
}
int determ(int *m,int n)
{
    int *mat=m;
     if(n==1)
    {
       // cout<<"ggg"<<*m<<"ggg";
       return *m;
    }

    int first[n];
    for(int i=0;i<n;i++)
    {
        first[i]=*(m+i);//cout<<"fir"<<*(m+i)<<"fir";
    }
    m=mat;
    //m=m+n;
    int det=0,a[n-1][n-1],p=0,count=0;
    int sign=-1;

    while(count<n)
    {
    m=mat+n;
        sign=-1*sign;
        for(int i=0;i<n-1;i++)
        {p=0;
            for(int j=0;j<n;j++)
                {
                    if(j==count)
                        continue;
                    a[i][p++]=*(m+j);
                    //cout<<"kkk"<<*(m+j)<<"kkk";
                }

            m=m+n;
        }
    int *ne=&a[0][0];
    //print(ne,n-1);
    det=det+first[count]*sign*determ(ne,n-1);
    count++;
    }

    return det;

}

int main()
{
    int n;
cout<<"Enter the order of the square matrix\n";
cin>>n;

int mat[n][n];
cout<<"Now enter the values row-wise\n";

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        cin>>mat[i][j];
}
int *m=&mat[0][0];
int deter=determ(m,n);
cout<<"\ndeterminant is"<<deter;
return 0;
}
