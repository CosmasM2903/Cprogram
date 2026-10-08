//Control Structures
//Grading system
#include<iostream>
using namespace std;
int main(){
string studentname;
float marks;
char grade;


//prompt to enter student details
cout<<"enter studentname:";
cin>>studentname;
cout<<"enter marks:";
cin>>marks;

//if-else ladder to assighn grades
   if(marks >=70&& marks<=100){
	grade='A';
   }
	else if (marks >= 60 && marks <=69){
		grade='B';
	}
		else if (marks>=50&& marks <=59){
			grade ='C';
		}
		else if (marks>=40&&marks<=49){
      grade='D';
		}
		else 
		{

			grade='E';
		}
		
		//student details display
		cout<<"================================"<<endl;
		cout<<"============================="<<endl;
		cout<<"studentname:"<<studentname<<endl;
		cout<<"studentmarks:"<<marks<<endl;
		cout<<"studentgrade:"<<grade<<endl;
		cout<<"=============================="<<endl;
		cout<<"==============================";

		
		}