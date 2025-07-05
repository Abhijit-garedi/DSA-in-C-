// recursion problem 

#include <iostream>
using namespace std;


void funThree(){
	
	cout<<"funThree executing"<<endl ;
	
	return ;
}

void funTwo(){
	cout<<"funTwo executing"<<endl ;
	
	cout<<"Calling funThree"<<endl ;
	funThree() ;
	
	cout<<"Back to FunTwo"<<endl ;
}

void funOne(){
	cout<< "funOne executing"<<endl ;
	
	cout<<"Calling funTwo"<<endl ;
	funTwo() ;
	
	cout<<" Back to funOne"<<endl ;
}

int main() {
	// your code goes here
	
	// Calling funOne
	cout<<"Main executing"<<endl ;
	
	cout<<"calling funOne"<<endl ;
	funOne() ;
	
	cout<<"Back to main"<<endl ;
	
	return 0;
}


 