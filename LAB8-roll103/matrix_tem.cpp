    #include<iostream>
    using namespace std;

    template <class t>
    class matrix
    {
     private:
     t m[5][5];
     int row;
     int col;

     public:
       matrix()
       {

       }
       ~matrix()
        {}
     void getdata();
     matrix<t> add(matrix&);
     void display();
     matrix<t> sub(matrix&);

    };

  template <class t> void matrix<t>::getdata()
   {
    cout<<"enter the number of rows ";
    cin>>row;
    cout<<"enter the number of columns ";
    cin>>col;
    cout<<"enter the elements of the matrix ";

    for(int i=0;i<row;i++)
     {
       for(int j=0;j<col;j++)
         {
           //int ii = static_cast<int>(i);
           //nt jj = static_cast<int>(j);
           cin>>m[i][j];
          }
     }
  }


  template <class t> void matrix<t>::display()
  {
   for(t i=0;i<row;i++)
    { cout<<endl;
       for(t j=0;j<col;j++)
        {
          int ii = static_cast<int>(i);
          int jj = static_cast<int>(j);
          cout<<m[ii][jj]<<"  ";
        }
     }
 cout<<endl;

   }


template <class t> matrix<t> matrix<t>::add(matrix &a1)
{ matrix <t> mat;
  mat.row=row;
  mat.col=col;
  for(int  i=0;i<row;i++)
   for(int j=0;j<col;j++)
   {
     //int ii = static_cast<int>(i);
     //int jj = static_cast<int>(j);
     mat.m[i][j]=m[i][j]+a1.m[i][j];
   }
     return mat;

  }

  template <class t> matrix<t>  matrix<t>::sub(matrix &a2)
  { matrix <t> mat2;
    mat2.row=a2.row;
    mat2.col=a2.col;

    for(int k=0;k<row;k++)
     for(int l=0;l<col;l++)
     {
          //int kk = static_cast<int>(k);
          //int ll = static_cast<int>(l);
       mat2.m[k][l]=m[k][l]-a2.m[k][l];
    }
      return mat2;
    }

   int main()
    {
     int ch;
     cout<<"Which class u want\n";
     cout<<"1.int\n2.float\n\n";
     cin>>ch;

  if(ch==1)
    {
      matrix<int> m1,m2,m3,m4;

      m1.getdata();
      cout<< "The first matrix is: \n" ;
      m1.display();
      m2.getdata();
    cout<< "The second matrix is: \n" ;
    m2.display();

      cout<<"Addition of matrices";
      m3=m2.add(m1);
      m3.display();
      cout<<"Subtraction of matrices ";
      m4=m2.sub(m1);
      m4.display();
      }

    else if(ch==2)

      {
        matrix<float> m1,m2,m3,m4;

        m1.getdata();
        cout<< "The first matrix is: \n" ;
        m1.display() ;
        m2.getdata();
        cout<< "The second matrix is: \n" ;
        m2.display();
        cout<<"Addition of matrices";
        m3=m2.add(m1);
        m3.display();
        cout<<"\nSubtraction of matrices ";
        m4=m2.sub(m1);
        m4.display();


      }
   else
   cout<<"wrong choice\n";


    return 0;
    }
