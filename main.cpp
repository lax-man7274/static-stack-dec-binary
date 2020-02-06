/*
this is static implementation of stack(using array) to convert decimal to binary...
*/



#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class stack{
private:
	int top,SIZE,deleted_data,array[10];
public:
	stack(){
		top=-1;
		SIZE=10;
	}

	void push(int value){
		if(top == (SIZE-1)){
			cout<<"STACK IS FULL CANNOT BE PUSHED!!";
		}
		else if(top == -1){
			top=0;
			array[top]=value;
		}
		else{
			top++;
			array[top]=value;
		}

	}

	int pop(){
		if(top==-1){
			cout<<"\n\nstack is empty. Cannot be popped!! \n\n";
		}
		deleted_data=array[top];
		top--;
		return deleted_data;

	}

	int topvalue(){
		return top;
	}
	void display(){
	    cout<<"\n\nThe binary output is:\n\n";
		for( int i=top;i>=0;i--){
			cout<<array[i]<<"  ";
		}
	}
	void makeNull(){
	top=-1;
	}
};

main(){
	stack S;
	int quotient;
	int decimal_number, remainder;
	do{
    cout<<"\n\nenter any decimal number to convert in to binary\n\n";
	cin>>decimal_number;
	if(decimal_number==0){
		cout<<"\n\nthe binary output=0\n\n";
	}
	else if(decimal_number==1){
		cout<<"\n\n The binary output is =1\n\n";
	}
	else{
	quotient=decimal_number;
	do{
		remainder=quotient%2;
		S.push(remainder);
		quotient=quotient/2;
	}while(quotient!=0);
    S.display();
    }
    S.makeNull();//empty  stack for next number ..............
	}while(1);

getch();
return 0;

}
