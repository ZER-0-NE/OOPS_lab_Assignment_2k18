#include<iostream>
# define N 6
using namespace std;
int n;

int main(void)
 {  int n;
    int up[N][N];
 	int low[N][N];

 	cout<<"Enter the order of matrix:(max 6)\n";
 	cin>>n;
 	cout<<"Enter the elements of upper triangular matrix:\n";
 	for(int i=0;i<N;i++)
 	 for(int j=0;j<N;j++)
 	 {  if(i<n&&j<n)
	    {
		  if(i<=j)
 	       cin>>up[i][j];
          else
           up[i][j]=0;
        }
        else
         up[i][j]=0;

     }
     cout<<"The Matrix is:\n";
     for(int i=0;i<N;i++)
	  { cout<<endl;
	   for(int j=0;j<N;j++)
	     {if(i<n&&j<n)
		  cout<<up[i][j]<<"  ";
	     }

	  }


   cout<<"Enter the elements of lower triangular matrix:\n";
 	for(int i=0;i<N;i++)
 	 for(int j=0;j<N;j++)
 	 {  if(i<n&&j<n)
	    {
		  if(i>j)
		   cin>>low[i][j];
		  else
		    low[i][j]=0;


		          }
        else
         low[i][j]=0;


       }
     cout<<"The Matrix is:\n";
     for(int i=0;i<N;i++)
	  { cout<<endl;
	   for(int j=0;j<N;j++)
	     {if(i<n&&j<n)
		  cout<<low[i][j]<<"  ";
	     }

	  }

     int c[N][N]={0};
 for(int i=0;i<N;i++)
  for(int j=0;j<N;j++)
    {   if(i<n&&j<n)
    	c[i][j]=low[i][j]+up[i][j];
    	else
    	c[i][j]=0;
	}
cout<<"The Result is:\n";

 for(int i=0;i<N;i++)
	  { cout<<endl;
	   for(int j=0;j<N;j++)
	     {if(i<n&&j<n)
		  cout<<c[i][j]<<"  ";
	     }

	  }
     return 0;
 }
