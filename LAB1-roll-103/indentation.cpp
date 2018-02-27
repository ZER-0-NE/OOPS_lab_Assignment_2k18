#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>

using namespace std;

int main(void)
{   int v1=0,v2=0;
	ifstream fin("doc1.txt");
	ofstream fout("doc2.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);

		if(ch=='{')
		{ v1=v1+5; 
		 for(int i=0;i<v1;i++)
			{fout.put(' ');
		      
			  }
		}
		
	
		if(ch=='f')
		{ v2=v1+2;
		for(int i=0;i<v2;i++)
	 	 	{
				fout.put(' ');
	           	}
		        	 }
		
              
	 if(ch=='}')
		{   
		    
		for(int i=0;i<v1;i++)
		   {    
                    fout.put(' ');
                    
                     }
	v1=v1-5;	
		}
		
		fout.put(ch);
			
	}
cout<<"\n";
	return 0;
	
}
