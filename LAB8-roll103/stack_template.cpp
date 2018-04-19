#include<iostream>
#include <cstdlib>
//#include "temp.h"
using namespace std;

#define MAX 200

template<class T>
class stack
{
  T *arr;
  int top;
  int capacity;
public:
  stack(int size = MAX) ;
  void push(T) ;
  T pop() ;
  T top_();

  bool isEmpty();
  bool isFull() ;
  void display() ;
  int size();

};

template<class T>
void stack<T>::push(T x)
{
  if(isFull())
  {
    throw out_of_range("The stack is full") ;
  }
  cout<< "Inserting: " << x << endl;
  arr[++top] = x ;

}

template<class T>
stack<T>::stack(int size)
{
  arr = new T[size] ;
  capacity = size ;
  top = -1 ;
}

template<class T>
T stack<T> :: pop()
{
  if(isEmpty())
  {
    throw out_of_range("The stack is empty") ;
  }
  cout << "Popping: " << top_() << endl ;

  return arr[top--] ;
}

template<class T>
T stack<T> :: top_()
{
  if(!isEmpty())
  {
      return arr[top] ;
  }
  else
  {
    exit(EXIT_FAILURE) ;
  }
}

template<class T>
int stack<T>:: size()
{
  return top+1 ;
}

template<class T>
bool stack<T>:: isEmpty()
{
   return top == -1 ;
}

template<class T>
bool stack<T>:: isFull()
{
   return top == capacity-1 ;
}

template<class T>
void stack<T>:: display()
{
  cout<< "STACK Contents: " ;
  for(int i=0;i<size();i++)
  {
    cout<<  arr[i] << " " ;
  }
cout<< endl ;
}

int main(void)
{
  int n,choice;
  cout<< "Enter the size of stack: " ;
  cin >> n;
  stack<string> obj(n) ;
  string s;
  char cont = 'Y' ;
  while(cont == 'Y'){
		cout << "Enter\n1 to Push onto Stack\n2 to Pop from Stack\n3 to Display\n4 to Exit\n";
		cin >> choice;

		switch(choice){
			case 1:{//Push
				cout << "Enter the element to be pushed\n";
				cin >> s;
				obj.push(s);
				break;
			}
			case 2:{//Pop
			   cout << "The element popped is " << obj.pop() << endl;
				break;
			}
			case 3:{//Display
				obj.display();
				break;
			}
			case 4:{//Exit
				cont = 'N';
				break;
			}
			default:{
				cout << "Invalid Input\n";
			}
		}
	}
  return 0;

}
