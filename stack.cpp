#include<iostream>
using namespace std;

#define SIZE 5
int stack[SIZE], top = -1;

void push()
{
	int value;
  if (top == SIZE - 1)
	{
		cout << "Stack is FULL!!! Insertion not possible!!!" << endl;
	}
	else
	{
    cout << "Enter the element to push:" << endl;
		cin >> value;
		top += 1;
		stack[top] = value;
	}
}

void pop()
{
   if (top == -1)
	{
		cout << "Stack is EMPTY!!! Deletion is not possible!!!" << endl;
	}
	else
	{
    cout << "Deleted element is: " << stack[top] << endl;
		top -= 1;
	}
}

void display()
{
	int i;
  if (top == -1)
	{
		cout << "Stack is EMPTY!!!" << endl;
	}
	else
	{
    for (i = top; i >= 0; i--)
		{
			cout << stack[i] << endl;
		}
	}
}

int main()
{
	push();
	pop();
	display();
	return 0;
}
