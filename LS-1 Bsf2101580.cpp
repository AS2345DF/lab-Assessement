#include<iostream>
using namespace std;
	int stack[100], n=100, top=-1;
	void push(int val)
	{
		if(top>=n-1)
		{
		cout<<"stack overflow"<<endl;
	}
		else
		{
			top++;
			stack[top]= val;
		}
	}
bool isEmpty()
{
if(top==-1)
{
	cout<<"Stack is empty"<<endl;
}
else
{
cout<<"Stack is not empty"<<endl;
}
}
void pop()
{
if(top<=-1)
{

cout<<"Stack underflow"<<endl;
}
else
{ 
cout<<"popped elements"<<stack[top]<<endl;
top--;
}
}
bool isfull ()
{
if(top>=99)
{
	cout<<"stack is full"<<endl;
}
else
{
	cout<<"stack is not full"<<endl;
}
}
void display()

{
	if (top>=0)
	{
		cout<<"stack elements :"<<endl;
		for(int i=top; i>=0; i--)
		cout<<stack[i]<<" "<<endl;
	}
	else
	{
		cout<<"stack empty"<<endl;
	}
}
void iseven()
{
	if(top>=0)
{ 
cout<<"Even elements in stack are:"<<endl;
for(int i=top; i>=0; i--)
if(stack[i]%2==0)
cout<<stack[i]<<" "<<endl;
}
else
cout<<"Stack is empty"<<endl;
}
int main()
{
int ch, val;
cout<<"1) push stack"<<endl;
cout<<"2) pop stack"<<endl;
cout<<"3) Isempty stack"<<endl;
cout<<"4) Isfull stack"<<endl;
cout<<"5) Iseven stack "<<endl;
cout<<"6) display stack"<<endl;
cout<<"7) exit"<<endl;
do {
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch) 
{
case 1: 
{
cout<<" pushed value :"<<endl;
cin>>val;
push(val);
break;
}
case 2: 
{
pop();
break;
}
case 3:
 {
isEmpty();
break;
}
case 4: 
{
isfull();
break;
}
case 5:
{
	 iseven();
	break;
}
case 6:
{
	display();
		break;
}
case 7:
{
	cout<<"EXIT : "<<endl;
	break;
}
default:
 {
cout<<"Invalid Choice"<<endl;
}
}
}
 while(ch!=7);
return 0;
}

