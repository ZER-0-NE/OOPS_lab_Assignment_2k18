#include<bits/stdc++.h>

using namespace std;

const double PI=3.14159265;
#define center 35;

void sine(void);
void cosine(void);
void tang(void);
void oscillator(void);

int main()
{
string s;
cout<<"enter the function sin,cos,or tan or the damped oscillator \nfor any of them type first three chars\n";
getline(cin,s);

if(s=="sin")
{
	sine();
}
if(s=="cos")
{
	cosine();
}
if(s=="tan")
{
	tang();
}
if(s=="osc")
{
	oscillator();
}
return 0;
}

void sine(void)
{
	float th1,th2;

	cout<<"Enter the values of thetas in degrees(e.g 0 360) \n";
	cin>>th1>>th2;

	th1=PI*th1/180;
	th2=PI*th2/180;

	for(float i=th1;i<=th2;i+=0.1)
	{
		float val=sin(i);
		if(val<0)
		{
			val=-val;
			int d=val*35;
			cout<<setw(35-d)<<" ";
			for(int k=0;k<d;k++)
				cout<<'*';
			cout<<"||";
		}
		else
		{


			int d=val*35;
			cout<<setw(1*35)<<" ";
			cout<<"||";
			for(int p=0;p<d;p++)
			{
				cout<<'*';
			}
		}
		cout<<endl;
	}


}

void cosine(void)
{
	float th1,th2;

	cout<<"Enter the values of thetas in degrees\n";
	cin>>th1>>th2;

	th1=PI*th1/180;
	th2=PI*th2/180;

	for(float i=th1;i<=th2;i+=0.1)
	{
		float val=cos(i);
		if(val<0)
		{
			val=-val;
			int d=val*35;
			cout<<setw(35-d)<<" ";
			for(int k=0;k<d;k++)
				cout<<'*';
			cout<<"||";
		}
		else
		{


			int d=val*35;
			cout<<setw(1*35)<<" ";
			cout<<"||";
			for(int p=0;p<d;p++)
			{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}

void tang(void)
{
	float th1,th2;

	cout<<"Enter the values of thetas in degrees\n";
	cin>>th1>>th2;

	th1=PI*th1/180;
	th2=PI*th2/180;

	for(float i=th1;i<=th2;i+=0.05)
	{
		float val=tan(i);
		if(val<0)
		{
			val=-val;
			int d=val*50;
			if(d>50)
				d=49;
			cout<<setw(50-d)<<" ";
			for(int k=0;k<d;k++)
				cout<<'*';
			cout<<"||";
		}
		else
		{


			int d=val*50;
			if(d>50)
				d=49;
			cout<<setw(1*50)<<" ";
			cout<<"||";
			for(int p=0;p<d;p++)
			{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}

void oscillator(void)
{
	float th1,th2;

	cout<<"Enter the values of thetas in degrees\n";
	cin>>th1>>th2;

	th1=PI*th1/180;
	th2=PI*th2/180;

	for(float i=th1;i<=th2;i+=0.1)
	{
		float val=sin(i)*(exp(-i));
		if(val<0)
		{
			val=-val;
			int d=val*50;
			cout<<setw(50-d)<<" ";
			for(int k=0;k<d;k++)
				cout<<'*';
			cout<<"||";
		}
		else
		{


			int d=val*50;
			cout<<setw(1*50)<<" ";
			cout<<"||";
			for(int p=0;p<d;p++)
			{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}


