// 1.Write a program in C++ to display the pattern like right angle triangle using an asterisk.
//Sample Output:
//Input number of rows: 5
// write program that draw * pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int r,m=1,y,k,c=1,l,g,z=1,sn, en, h;
	char b='A';
	int i,j;
	cout<<"1. a program in C++ to display the pattern like right angle triangle using an asterisk "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"Enter no of Row : ";
	cin>>r;
	cout << " Input the starting value for ASCII characters: ";
    cin >> sn;
    cout << " Input the ending value for ASCII characters: ";
    cin >> en;	
	y=r+4-1;
	  
	for(i=1;i<=r;i++){ 
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"2. a program in C++ to display the pattern like right angle triangle with number"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
		  
	for(i=1;i<=r;i++){ 
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"3. a program in C++ to make such a pattern like right angle triangle using number"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(i=1;i<=r;i++){ 
		for(j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	cout<<"4. a pattern like right angle triangle with number increased by 1"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
		for(i=1;i<=r;i++){ 
		for(j=1;j<=i;j++){
			cout<<m++<<" ";
		}
		cout<<endl;
	}
	cout<<"5. a pattern like right angle triangle with number increased by 1"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
		for(i=1;i<=r;i++){
	 for(k=y;k>=1;k--){
	 	cout<<" ";
	 }
		for(j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		y--;
	}
	cout<<"6. a program in C++ to make such a pattern like a pyramid using number and a number will repeat for a row. "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
		for(i=1;i<=r;i++){
	 for(k=y;k>=1;k--){
	 	cout<<" ";
	 }
		for(j=1;j<=i;j++){
			cout<<i<<" ";
		}
	 
		y--;
		cout<<endl;
	}
	 
	cout<<"7. a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
		for(i=0;i<r;i++){
		for(j=1;j<=r-i;j++)
		cout<<" ";
		for(j=1;j<=2*i-1;j++)
		cout<<"*";
		cout<<endl;
		
	}
	cout<<"8. a program in C++ to display the pattern like a diamond. Go to the editor "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(i=0;i<r;i++){
		for(j=1;j<=r-i;j++)
		cout<<" ";
		for(j=1;j<=2*i-1;j++)
		cout<<"*";
		cout<<endl;
		
	}
	for(i=r-1;i>=1;i--){
		for(j=1;j<=r-i;j++)
		cout<<" ";
		for(j=1;j<=2*i-1;j++)
		cout<<"*";
		cout<<endl;
		
	}
	cout<<"9 .a program in C++ to display Pascal's triangle like right angle traingle "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(i=0;i<r;i++){
		 for(l=1;l<=r-i;l++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
         
		cout<<endl;
	}  
	
	 

	cout<<"10 .a program in C++ to display Pascal's triangle like right angle traingle "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(i=0;i<r;i++){
		 
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			c=1;
			else
			c=c*(i-j+1)/j;
			cout<<c<<"  ";
		}
		cout<<endl;
	} 
	cout<<"11. a program in C++ to display the pattern like pyramid using the alphabet "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(i=1;i<=r;i++){
		for(g=1;g<=r-i;g++)
		cout<<"  ";
		for(j=0;j<=(z/2); j++)
		{
			cout<<b++<<" ";
		}
		b=b-2;
		for(j=0;j<(z/2);j++)
		{
			cout<<b--<<" ";
		}
		z=z+2;
		b='A';
		cout<<endl;
	}
	cout << "12.  Print ASCII character with their values: "<<endl;
    cout << "------------------------------------------------- "<<endl;
	 if (sn>255 || sn<0)
	sn=1;
	if(en<0 || en>255)
	en=255;
	cout << "The ASCII characters:"<<endl ;
    for (i = sn; i <=en; i++) 
    {
        cout << i<<" --> "<<char(i)<<endl;
    }
 
 
	
	
	
	
	
	getch ();
	return 0;
}
