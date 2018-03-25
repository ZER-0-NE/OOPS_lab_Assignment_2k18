#include<iostream>
#include<fstream>
#include<queue>
#include<vector>
using namespace std;


 class graph
 {
   private :
      int v;
      int e;
      vector <int> *g;
      void DFSrec(int s, int visited[]);


 public:


      graph(int a)
      { v=a;
        g=new vector<int> [v];

       }

      ~graph()
      {

      }

      void add(int s,int d);

      void DFS(int);
      void display();


};


void graph::display()
{
  for(int i=0;i<v;i++)
   { cout<<i<<"-";
     for(int j=0;j<g[i].size();j++)
       cout<<g[i][j]<<" ";
     cout<<"\n";

    }
}


void graph::add(int s,int d)
{
 g[s].push_back(d);
 g[d].push_back(s);
}


void graph::DFS(int ver)
 {
    int visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = 0;

            DFSrec(ver, visited);
   }





void graph::DFSrec(int s, int visited[])
{
    visited[s] = 1;
    cout << s << " ";

   vector <int>::iterator k;
    for (k = g[s].begin(); k != g[s].end(); k++)
        if (!visited[*k])
            DFSrec(*k, visited);
}


 int main()
  { int src,des,v,e,s;
    ifstream fin1("v&e.txt");
    ifstream fin2("number.txt");
    while(!fin1.eof())
     {
         fin1>>v>>e;

          }

     graph a(v);

    while(e!=0)
    {
       fin2>>src>>des;
           a.add(src,des);


       e--;
    }
  a.display();
  cout<<"Enter the starting vertex\n";
  cin>>s;
  a.DFS(s);
  }
