#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	
	int choice; 
	cout<<"ENTER A NUMBER FROM 1 TO 12 TO SEE  THE ASSIGNMENT'S RESULT "<<endl;
	cout<<"1.Write a program in C++ to display the pattern like right angle triangle using an asterisk. "<<endl;
	cout<<"2.Write a program in C++ to display the pattern like right angle triangle with number.  "<<endl;
	cout<<"3.Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row. "<<endl;
	cout<<"4.Write a program in C++ to make such a pattern like right angle triangle with number increased by 1. "<<endl;
	cout<<"5.Write a program in C++ to make such a pattern like a pyramid with an asterisk.  "<<endl;
	cout<<"6.Write a program in C++ to make such a pattern like a pyramid using number and a number will repeat for a row. Go to the editor "<<endl;
	cout<<"7.Write a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks. Go to the editor "<<endl;
	cout<<"8.Write a program in C++ to display the pattern like a diamond. "<<endl;
	cout<<"9.Write a program in C++ to display Pascal's triangle like pyramid. "<<endl;
	cout<<"10.Write a program in C++ to display Pascal's triangle like right angle traingle.  "<<endl;
	cout<<"11.Write a program in C++ to display the pattern like pyramid using the alphabet.  "<<endl;
	cout<<"12.Write a program in C++ to print all ASCII character with their values. "<<endl;
	cin>>choice;
	 
	 if(choice==1){
	 	system("cls");
	 	 int i=0,j,rows;
 	                   cout<<"Enter NO of Rows: ";
 	                   cin>>rows;
	                   for(i=1;i<=rows;i++){
 	                    for(j=1;j<=i;j++)
	                    cout<<"*";
	                    cout<<endl; 
  	                              }
	}
	else if(choice==2){
			system("cls");
			int i=0,j,rows;
	cout<<"Enter NO of Rows: ";
	cin>>rows;
	for(i=1;i<=rows;i++){
	for(j=1;j<=i;j++)
	  cout<<j;
	  cout<<endl;
                             }
		
		
	}
	
	else if(choice==3){
		system("cls");
		   int i=0,j,rows;
	cout<<"Enter NO of Rows: ";
	cin>>rows;
	for(i=1;i<=rows;i++){
	for(j=1;j<=i;j++)
	  cout<<i;
	  cout<<endl;	
	

	}
			
	}
	
	else if(choice==4){
		system("cls");
		   int i=0,j,rows,k=1;
	cout<<"Enter NO of Rows: ";
	cin>>rows;
	for(i=1;i<=rows;i++){
	for(j=1;j<=i;j++)
	  cout<<k++<<" ";
	  cout<<endl;	
	

	}
	
			
	}
	
	else if(choice==5){
		system("cls");
			int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid with an asterisk:\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<"*"<<" ";
	cout<<endl;
    spc--;
   }
}

                  else if(choice==6){
		system("cls");
		int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid with an asterisk:\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }

	
	}
}



	
	
	
	
	

	
     

  // 7.Write a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks
 /*    int i,j,n;
    cout << "\n\n Display such a pattern like a pyramid containing odd number of asterisk in each row:\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
  for(i=0;i<n;i++)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   } */
   
   // 8.Write a program in C++ to display the pattern like a diamond
  /*   int i,j,r;
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   } */
  
  // 9.Write a program in C++ to display Pascal's triangle like pyramid 
 /*   int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
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
    } */
    
 // 10.Write a program in C++ to display Pascal's triangle like right angle traingle
 /*    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
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
    } */
    
    
    
// 11.Write a program in C++ to display the pattern like pyramid using the alphabet.   
   /* 
    int i, j;
    char alph = 'A';
    int n, blk;
    int ctr = 1;
    cout << "\n\n Display the pattern like pyramid using the alphabet:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (blk = 1; blk <= n - i; blk++)
            cout << "  ";
        for (j = 0; j <= (ctr / 2); j++) 
        {
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    } 
    */
    
    
    
    // 12.Write a program in C++ to print all ASCII character with their values.
/*	int i;
	
	cout << "\nThe ASCII Values of all the Characters are\n";
	
	for(i = 0; i <= 255; i++)
	{
		cout << "The ASCII value of " << (char)i << " = " << i << endl;
	} */
	
getch();
return 0;
}



		
	


