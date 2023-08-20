#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	char op;
	cout<<" Basic Calculator "<<endl;
	cout<<" Enter two numbers."<<endl;
	cout<<" 1st Number: ";
	cin>>n1;
	cout<<" 2nd Number: ";
	cin>>n2;
	cout<<" Enter Operator: Division(/), Multiplication(*), Addition(+), Subtraction(-) : ";
	cin>>op;
	switch (op)
	{
		case'/':
		cout<<" "<<n1/n2;
		break;
		
		case'*':
		cout<<" "<<n1*n2;
		break;
		
		case'+':
		cout<<" "<<n1+n2;
		break;
		
		case'-':
		cout<<" "<<n1-n2;
		break;
		
		default:
			cout<<" "<<"Error! Choose correct operator.";
	}
	return 0;
}
