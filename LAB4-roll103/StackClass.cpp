#include <iostream>

using namespace std;

struct ListNode
{
	int data;
	struct ListNode *next;
};

class Stack{
	private:
		ListNode *top;
	public:
		Stack();
		void push(int);
		int pop();
		void display();
		void popTill(int); 
};

Stack::Stack(){
	top = NULL;
}

void Stack::push(int data){
	ListNode *temp = new ListNode;

	if(temp == NULL){
		cout << "Memory Unavialble\n";
		return;
	}

	temp -> data = data;

	if(top == NULL){
		temp -> next = NULL;
		top = temp;
	}
	else{
		temp -> next = top;
		top = temp;
	}
}

int Stack::pop(){
	if(top == NULL) return -1;
	else{
		int data = top -> data;
		ListNode *temp = top;
		top = top -> next;
		delete temp;
		return data;
	}
}

void Stack::display(){
	if(top == NULL){
		cout << "Stack is empty\n";
		return;
	}
	cout << "Displaying the Stack\n";
	ListNode *temp = top;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

void Stack::popTill(int data){
	ListNode *temp = top;
	while(temp != NULL){
		if(temp -> data == data){
			break;
		}
		temp = temp -> next;
	}

	if(temp == NULL) cout << "Element not Found\n";
	else{
		int val;
		do{
			val = pop();
			cout << "The element popped is " << val << endl;
		}
		while(val != data);
	}
}

int main(void){
	Stack stack;
	char cont = 'Y';
	int choice, data;

	while(cont == 'Y'){
		cout << "Enter\n1 to Push onto Stack\n2 to Pop from Stack\n3 to Display\n4 to Pop Till a given value\n5 to Exit\n";
		cin >> choice;

		switch(choice){
			case 1:{//Push
				cout << "Enter the element to be pushed\n";
				cin >> data;
				stack.push(data);
				break;
			}
			case 2:{//Pop
				data = stack.pop();
				if(data != -1) cout << "The element popped is " << data << endl;
				else cout << "Stack is Empty\n";
				break;
			}
			case 3:{//Display
				stack.display();
				break;
			}
			case 4:{//Special Pop
				cout << "Enter the value to pop till\n";
				cin >> data;
				stack.popTill(data);
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