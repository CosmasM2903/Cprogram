//Simple Calculator
#include<iostream>
using namespace std;
int main (){
	double number1,number2;
	double Results;
	char operand;
	
	cout<<"enter number1:";
	cin>>number1;
	
	cout<<"enter operand:";
	cin>>operand;
	
	cout<<"enter number2:";
	cin>>number2;
	
	switch (operand){
		case '+':
		Results=number1+number2;
		break;
	
	case'-':
	Results=number1-number2;
	break;
    case'*':
    Results=number1*number2;
    break;
    
    case'/':
    if(number2==0){
		cout<<"ERROR:Division by zero";
	}
	else{
	Results=number1/number2;
	}
    break;
	}
    
	
	cout<<"Result="<<number1<<operand<<number2<<"="<<Results;
	

	
}
