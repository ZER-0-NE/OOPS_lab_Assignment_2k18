#include<stdio.h>
#include<iostream>

using namespace std;
int s[100];

class stackk
{
public:
int top;
stackk():top(-1)
{}

void operator +(int d)
{
top++;
s[top]=d;
cout<<"\n data added is"<<s[top];


}
void operator --()
{
top--;
}
void operator ++()
{
int a=top;
while(a>=0)
{
cout<<s[a];
a--;
}
}

};
int main()
{
stackk s1;
int data,ch,f=1;
while(f==1)
{
cout<<"\n1.push \n2.pop \n3.display";
cout<<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter the data to push :";
cin>>data;
s1+data;
break;
case 2:
--s1;
break;
case 3:
++s1;
break;
case 4:return 0;
break;
}
cout<<"\n Press 1 to conitnue";
cin>>f;
}
return 1;
}
