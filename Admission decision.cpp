//Admission Decision
#include<iostream>
using namespace std;
int main(){
	string studentname;
	int age;
	float examscore;
	
	//enter student details
	cout<<"enter student name:";
	cin>>studentname;
	cout<<"enter student age:";
	cin>>age;
	cout<<"enter exam score:";
	cin>>examscore;
	
	//check the age
	if (age>=18){
		
		if(examscore>=50){
        cout<<"studentname:"<<studentname<<endl;
		cout<<"Admission Status:Admitted"<<endl;
	}
	else{
			cout<<"studentname:"<<studentname<<endl;
			cout<<"Admission Status:Not Admitted:Low sscore"<<endl;
		}
		}
		else{
			cout<<"studentname:"<<studentname<<endl;
			cout<<"Admission Status: Not Admitted:Underage"<<endl;
		
		}
}
	
		
