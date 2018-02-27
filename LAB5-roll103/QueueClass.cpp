#include <iostream>

using namespace std;

struct ListNode{
	int data;
	struct ListNode *next;
};

class Queue{
private:
	ListNode *front;
	ListNode *rear;
public:
	Queue();
	void enque(int);
	int deque();
	void display();
	void del(int);
};

Queue::Queue(){
	front = NULL;
	rear = NULL;
}

void Queue::enque(int data){
	ListNode *temp = new ListNode;
	temp -> data = data;

	if(temp == NULL){
		cout << "Memory Unavialble\n";
		return;
	}
	temp -> next = NULL;
	
	if(rear == NULL){
		front = temp;
		rear = temp;
	}
	else{
		rear -> next = temp;
		rear = rear -> next;
	}
}

int Queue::deque(){
	if(front == NULL)return -1;
	else{
		int data = front -> data;
		ListNode *temp = front;
		front = front -> next;
		delete temp;
		return data;
	}
}

void Queue::display(){
	if(front == NULL){
		cout << "The queue is empty\n";
		return;
	}
	ListNode *temp = front;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

void Queue::del(int data){
	ListNode *temp = front, *prev = NULL;

	while(temp != NULL){
		if(temp -> data == data)break;
		prev = temp;
		temp = temp -> next;
	}
	if(temp == NULL){
		cout << "Element not found\n";
		return;
	}

	if(prev == NULL){
		front = temp -> next;
		delete temp;
	}
	else{
		prev -> next = temp -> next;
		delete temp;
	}
}

int main(void){
	Queue queue;
	char cont = 'Y';
	int choice, data;

	while(cont == 'Y'){
		cout << "Enter\n1 to Enque\n2 to Deque\n3 to Display\n4 to Delete\n5 to Exit\n";
		cin >> choice;

		switch(choice){
			case 1:{//Enque
				cout << "Enter the element to be queued\n";
				cin >> data;
				queue.enque(data);
				break;
			}
			case 2:{//Deque
				data = queue.deque();
				if(data != -1) cout << "The element dequed is " << data << endl;
				else cout << "They queue is empty\n";
				break;
			}
			case 3:{//Display
				queue.display();
				break;
			}
			case 4:{//Delete
				cout << "Enter the element to be deleted\n";
				cin >> data;
				queue.del(data);
				break;
			}
			case 5:{//Exit
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
