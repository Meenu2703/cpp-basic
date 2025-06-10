#include <iostream>
using namespace std;
int main(){
	float op1,op2;
	char operatr;
	char ans;
	do{
		cout<<"Enter first number:";
		cin>>op1;
		cout<<"Enter second number:";
		cin>>op2;
		cout<<"Enter Operator(+,-,/,X):";
		cin>>operatr;
		if(operatr=='+'){
			cout<<"Result of addition:"<<op1+op2;
		}
		else if(operatr=='-'){
			cout<<"Result of subtraction:"<<op1-op2;
		}
		else if(operatr=='X' || operatr=='x'){
			cout<<"Result of multiplication:"<<op1*op2;
		}
		else if(operatr=='/'){
			if(op2==0){
				cout<<"Division by 0 is not possible!";
				exit(0);
			}
			cout<<"Result of division:"<<op1/op2;
		}
		else{
			cout<<"Invalid Operator!";
		}
		
		cout<<"\nDo you want to continue(Y|N):";
		cin>>ans;
	}
	while(ans=='y' || ans=='Y');
		

}
