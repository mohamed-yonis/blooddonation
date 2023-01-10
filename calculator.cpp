 #include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int num1,num2,choices;
	cout<<"Enter The Choice \n1.For Addition \n2.For Subtruction \n3.For Multiplication \n4.For Division \n5.For Modules\n";
	cin>>choices;
	if(choices==1){
		system("cls");
		cout<<"Enter The Value of Number One: "<<endl;
		cin>>num1;
		cout<<"Enter The Value of Number Two: "<<endl;
		cin>>num2;
		system("cls");
		cout<<"The Addition Of The Two Numbers Are: "<<num1+num2;
	}
	else if(choices==2){
		system("cls");
		cout<<"Enter The Value of Number One: "<<endl;
		cin>>num1;
		cout<<"Enter The Value of Number Two: "<<endl;
		cin>>num2;
		system("cls");
		cout<<"The Subtraction Of The Two Numbers Are: "<<num1-num2;
	}
		else if(choices==3){
		system("cls");
		cout<<"Enter The Value of Number One: "<<endl;
		cin>>num1;
		cout<<"Enter The Value of Number Two: "<<endl;
		cin>>num2;
		system("cls");
		cout<<"The Multiplication Of The Two Numbers Are: "<<num1*num2;
	}
		else if(choices==4){
		system("cls");
		cout<<"Enter The Value of Number One: "<<endl;
		cin>>num1;
		cout<<"Enter The Value of Number Two: "<<endl;
		cin>>num2;
		system("cls");
		cout<<"The Division Of The Two Numbers Are: "<<num1/num2;
	}
		else if(choices==5){
		system("cls");
		cout<<"Enter The Value of Number One: "<<endl;
		cin>>num1;
		cout<<"Enter The Value of Number Two: "<<endl;
		cin>>num2;
		system("cls");
		cout<<"The Modules Of The Two Numbers Are: "<<num1%num2;
	}
	
	else{
		system("cls");
		cout<<" Sorry! Unexsist number";
	}
	getch();
	return 0;
}
