#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cout<<"Enter the two no\n";
    getline(cin,a);
    getline(cin,b);

    char sum[100];
    int l1=a.length();
    int l2=b.length();

    int k=0,i,j=l2-1,s,carry=0;

    for(i=l1-1;i>=0||j>=0;i--)
    {
        if(i>=0&&j>=0)
            s=(int)a[i]-'0'+(int)b[j]-'0'+carry;
        if(i<0&&j>=0)
            s=(int)b[j]-'0'+carry;
        if(i>=0&&j<0)
            s=(int)a[i]-'0'+carry;

        carry=s/10;
        sum[k++]=s%10+'0';
        j--;
    }

    if(carry!=0)
        sum[k++]=carry+'0';
    sum[k]='\0';

    for(int p=strlen(sum)-1;p>=0;p--)
        cout<<sum[p];

return 0;
}
