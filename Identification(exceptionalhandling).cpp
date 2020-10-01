

/**
Name:Sathyaseelan s/o Ramachandran
Student ID: P16007762
Question1
**/

//standard library that allows cin from user(keyboard)
#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int arr[12],age;
    char gen;
    
    char a[12];
    
    cout<<"\nEnter the 12 digit identification number: \t";
    scanf("%s",a);
    
    for(int i=0;i<12;++i)
        arr[i] = (int)(a[i])-48;
    
    cout<<"\nEnter the age: \t";
    cin>>age;
    
    cout<<"\nEnter the gender (m/f): \t";
    cin>>gen;
    
    //Exception handling for gender
    if(((arr[11]%2==0) && (gen=='m')) || ((arr[11]%2==1) && (gen=='f')))
        cout<<"\nGender mismatch";
    
    //Exception handling for age
    int year;
    year = (arr[0]*1000)+(arr[1]*100)+(arr[2]*10)+arr[3];
    
    if(2019-year!=age)
        cout<<"\nAge mismatch";
    
    //Exception handling - Month cannot exceed 12.
    int month;
    month = (arr[4]*10)+arr[5];
    
    if((month>12) || (month<1))
        cout<<"\nMonth must be between 01-12";
    
    //Exception handling - Date cannot exceed 31
    int date;
    date = (arr[6]*10)+arr[7];
    
    if((date>31) || (date<1))
        cout<<"\nDate must be between 01-31";
    
    
    return 0;
}   //end of main()
