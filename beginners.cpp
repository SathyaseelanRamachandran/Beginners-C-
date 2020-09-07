/*
#include <iostream>
using namespace std;
int main(){
	cout<<"Hello world!!!"<<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int a,b, total=0; //good method to initialise variables
	cout<<"Please enter first digit and second digit: "<<endl;
	cin>>a>>b;
	total=a+b;
	cout<<a<<"+"<<b<<"total is:"<<total<<endl;
	return 0;
	}
	
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter starting point:";
	cin>>a;
	int b;
	cout<<"Enter stop point:";
	cin>>b;
	for(int i=a;i<=b;i++){
	cout<<"The variable i is:"<<i<<endl;
	}
	return 0;
}



#include<iostream>
using namespace std;
int main(){
       //discussion about break and continue statement
     
       for(int i=0; i<=9; i++){
       cout<<i;
       if(i==5){ //will display 0,1,2,3,4,5 only
       break;
       }
       }
       for(int j=0; j<=9; j++){  //will display 0,1,2,3,4,6,7,8,9,10
       cout<<j;
       if(j==5){
       continue;
       }
       }
}
return 0;
}

#include <iostream>
using namespace std;
int main(){
	int a=0;
	do{
		a++;
		cout<<a<<endl;
	}
	while (a<10);
}

#include<iostream>
using namespace std;
int main(){
int a=0;
do{

cout<<"hello, this is do while loop<<endl; //repeat the statement for ten times until loop condition becomes false
a++;
while(a<=10){
cout<<"Program ends here!"<<endl;
return 0;
}

//call by reference function
// function definition to swap the values.
void swap(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}


//call by value function
// function definition to swap the values.
void swap(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age>18){
	cout<<"You are an adult."<<endl;	
	}
	else if(age<=5){
		cout<<"You are a toddler."<<endl;
	}
	else if(age<=12){
		cout<<"You are a kid."<<endl;
	}
	else{
		cout<<"You are teenager."<<endl;
	}
}*/




