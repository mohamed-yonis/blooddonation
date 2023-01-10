#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	int y=5, x=100; 
	cout<<"Program That Displays a Series Of Numbers From 5 to 100 By jumping Over 5 "<<endl;
	while(y<=100){
		
	 cout<<" "<<y;
	 y=y+5;
	}cout<<endl;
	cout<<"Program That Displays a Series Of Numbers From 100 to 5 By jumping Over 5 "<<endl;
		while(x>0){
		cout<<" "<<x;
		x-=5;
	}
	
	getch();
	return 0;
} 
