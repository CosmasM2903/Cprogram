//C++Bsics
//driving test results
#include<iostream>
using namespace std;
int main(){
	
    string student_name;
	float Theory_marks,practical_marks;
	float avarage_marks;
	
	cout<<"enter student_name:";
	cin>>student_name;
	cout<<"enter theory_marks:";
	cin>>Theory_marks;
	cout<<"enter practical_marks:";
	cin>>practical_marks;
	
	
	
	cout<<"==================================="<<endl;
	cout<<"==================================="<<endl;
	avarage_marks=(Theory_marks+practical_marks)/2;
	cout<<"student_name:"<<student_name<<endl;
	cout<<"theory_marks:"<<Theory_marks<<endl;
	cout<<"practical_marks:"<<practical_marks<<endl;
	cout<<"avarage_marks:"<<avarage_marks<<endl;
	
	if (avarage_marks>50){
		cout<<"THE STUDENT HAS PASSED:"<<endl;
		}
		else{
			cout<<"THE STUDENT HAS FAILED:"<<endl;
		}
	cout<<"======================================"<<endl;
	cout<<"=======================================";	
}