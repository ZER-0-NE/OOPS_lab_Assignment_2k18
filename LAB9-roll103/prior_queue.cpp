#include<bits/stdc++.h>
using namespace std;
#define MAX 50

class Queue{
	public:int *arr;
			int size;
			int head,tail;
			Queue(){
				size=0;
				head = -1;
				tail = -1;
				arr = new int[MAX];
			}
			void enqueue(int val);
			int dequeue();
			void display();
			int isempty();
};

int Queue::isempty()
{
	if (size==0)
		return 1;
	else 
		return 0;
}

void Queue::enqueue(int val){
	if(size>=MAX)
	{
		cout<<"Queue Overflow."<<endl;
		return;
	}
	if(isempty()==1)
	{
		head++;
		tail++;
		arr[tail]=val;
	}
	else
	{
		tail++;
		arr[tail]=val;
	}
	size++;
}

int Queue::dequeue(){
	if(size==0)
	{
		cout<<"Queue Underflow."<<endl;
		return -1;
	}
	int temp;
	temp = arr[head];
	for(int i=head+1;i<=tail;i++)
		arr[i-1]=arr[i];
	tail--;
	size--;
	if(size==0)
	{
		head=0;
		tail=0;
	}
	return temp;
}

void Queue::display(){
	int i;
	cout<<"Queue :";
	if(size==0)
		cout<<"Empty";
	else
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}


class PriorQueue : public Queue{
	public : void enqueue(int);
			 int dequeue();

};

void PriorQueue :: enqueue(int val)
{
	if(size>=MAX)
	{
		cout<<"Queue Overflow."<<endl;
		return;
	}
	if(isempty()==1)
	{
		head++;
		tail++;
		arr[tail]=val;
	}
	else
	{
		tail++;
		arr[tail]=val;
		int i=tail;
		int par = floor((size-1)/2);
		while(arr[i]>arr[par] )
		{
			int temp;
			temp = arr[par];
			arr[par] = arr[i];
			arr[i] =temp;
			if(par==0)
				break;
			i=par;
			par = floor((par-1)/2);
			
		}
	}
	size++;
}

int PriorQueue :: dequeue()
{
	if(size==0)
		return -1;
	int del = arr[0];
	swap(arr[0],arr[tail]);
	tail--;
	size--;
	display();
	int i=0;
	while(i<size)
	{
		int fill=max(arr[2*i+1],arr[2*i+2]);
		if(fill==arr[2*i+2])
		{
			swap(arr[i],arr[2*i+2]);
			i=2*i+2;
		}
		else
		{
			swap(arr[i],arr[2*i+1]);
			i=2*i+1;
		}
		if(2*i+1>size)
			break;
	}
	return del;
}

int main(){
	PriorQueue obj;
	obj.enqueue(34);
	obj.display();
	obj.enqueue(13);
	obj.display();
	obj.enqueue(44);
	obj.display();
	obj.enqueue(11);
	obj.display();
	obj.enqueue(9);
	obj.display();
	// cout<<obj.size<<' '<<obj.tail<<endl;
	cout<<"Deleted element :"<<obj.dequeue()<<endl;
	obj.display();	
	cout<<"Deleted element :"<<obj.dequeue()<<endl;
	obj.display();
	return 0;
}