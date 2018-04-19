#include<iostream>

using namespace std;
templte <class t>
class complex
{
  float rl,img;

 public:

   complex(float x=0.0,float y=0.0)
     { rl=x;
       img=y;
      }

   ~complex()
     {

     }

    friend istream & operator >>(istream &y,complex &b);


    friend ostream & operator <<(ostream &z,complex &b);


     complex & operator +(complex &a)
      { static complex t;
         t.rl=rl+a.rl;
         t.img=img+a.img;
         return t;
         }

     complex & operator -(complex &a)
      { static complex t;
         t.rl=rl-a.rl;
         t.img=img-a.img;
         return t;
         }

       };

      istream & operator >>(istream &y,complex &b)
       {  cout<<"\nEnter the real part\n";
          y>>b.rl;
          cout<<"Enter the imaginery part\n";
          y>>b.img;
          return y;

       }

      ostream & operator <<( ostream &z,complex &b)
     {
       z<<b.rl;
       z<<"+"<<b.img<<"i\n";
       return z;
     }

    int main(void)
    { int ch;

      complex c1,c2,c3;
      cout<<"Enter the two complex numbers\n";
      cin>>c1;
      cin>>c2;
      cout<<"The two numbers are\n\n";
      cout<<c1;
      cout<<c2;
      cout<<"\nEnter your choice\n";
      cout<<"1.Sum\n";
      cout<<"2.Subtraction\n\n";

      cin>>ch;
      if(ch==1)
       {
          c3=c1+c2;
          cout<<c3;
       }
       else if(ch==2)
        {
           c3=c1-c2;
           cout<<c3;
        }
        else
        cout<<"wrong choice\n";
        return 0;
    }
