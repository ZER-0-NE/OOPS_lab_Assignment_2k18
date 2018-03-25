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

 public:


      graph(int b)
      {
       v=b;
       g=new vector <int>[v];

       }

      ~graph()
      {

      }

      void display();
      void add(int,int);
      void BFS(int);


};

void graph::add(int s,int d)
{
 g[s].push_back(d);
 g[d].push_back(s);
}

void graph::display()
{
  for(int i=0;i<v;i++)
   { cout<<i<<"-";
     for(int j=0;j<g[i].size();j++)
       cout<<g[i][j]<<" ";
     cout<<"\n";

    }
}



void graph::BFS(int s)
 {
    vector <int> :: iterator k;
    int visited[v];




    for(int i = 0; i < v; i++)
        visited[i] = 0;

    queue <int> q;

    visited[s] = 1;
    q.push(s);

   while(!q.empty())
     {
        s = q.front();
        cout << s << " ";
        q.pop();

        for (k=g[s].begin() ;k!=g[s].end(); k++)
        {
            if (!visited[*k])
            {
                visited[*k] =1;
                q.push(*k);
            }
        }
    }
}





  int main()
  {
  int src,des,s,v,e;
    ifstream fin1("v&e.txt");
    ifstream fin2("number.txt");
    while(!fin1.eof())
     {
         fin1>>v>>e;

          }
    graph a(v);

    while(e>0)
    {
       fin2>>src>>des;
       a.add(src,des);
     e--;
    }
    a.display();
    cout<<"Enter the root node\n";
    cin>>s;
    a.BFS(s);
   }
