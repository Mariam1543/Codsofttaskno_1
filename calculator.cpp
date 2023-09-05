#include<iostream>
using namespace std;
class calculator
{
	public:
		int a ;
		int x1,y1;
void add()
{

	cout<<"Enter value for x"<<endl;
	cin>>x1;
	cout<<"Enter value for y"<<endl;
	cin>>y1;
	a=x1+y1;
	cout<<"Sum for 2 numbers are"<< " " << a<<endl;
}
void sub()
{
	cout<<"Enter value for x"<<endl;
	cin>>x1;
	cout<<"Enter value for y"<<endl;
	cin>>y1;
	a=x1-y1;
	cout<<"Subtraction for 2 numbers are"<< " " << a<<endl;
}
void multiply()
{
	cout<<"Enter value for x"<<endl;
	cin>>x1;
	cout<<"Enter value for y"<<endl;
	cin>>y1;
	a=x1*y1;
	cout<<"Multiplication for 2 numbers are"<< " " << a<<endl;
}
void division()
{
	cout<<"Enter value for x"<<endl;
	cin>>x1;
	cout<<"Enter value for y"<<endl;
	cin>>y1;
    if (y1 != 0)
    {
    a = x1 / y1;
    cout<<"Division for 2 numbers are"<< " " << a<<endl;
    } 
	else
    {
    cout << "Error: Division by zero is not allowed." << endl;
}
}
};
int main()
{
	calculator c;
	char choice;
	char operation;
	bool validoperation=true;
	cout<<"    WELCOME TO CALCULATOR   "<<endl;
do{
	cout<<"Choose operation (+ , - , * , / )"<<endl;
	cin>>operation;
	
	switch(operation)
	{	
		case '+':
	c.add();
	break;
	case '-':
	c.sub();
	break;
	case '*':
	c.multiply();
	break;
	case '/':
	c.division();
	break;
	default:
    cout << "Error: Invalid operation." << endl;
    validoperation = false;
    break;
}
cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice; 
	}
 while (choice == 'y' || choice == 'Y');
    cout << "Calculator program terminated." << endl;
	return 0;
}