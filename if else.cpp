#include<bits/stdc++.h>
using namespace std;
//  write a program that take input of the age
// and print if your are adult or not
int main(){
       int age;
       cin>> age;
       return 0;;
       if (age>=18){
        cout<< "You are an adult!";
         }

         else{
        cout<< "You are not an adult!";

        }
        return 0;
}

int main(){
    int marks;
    cin >> marks;
    if (marks<=25){
        cout << "F";
    }
 if (marks >=25 && marks <=49) {
    cout << "E";
 }

 if(marks>=45&& marks <=59){
    cout << "D";
 }

 if (marks>=50&& marks <=59){
    cout<<"C";
 }

 if (marks >= 60&& marks <=79){
    cout << "B";
 }

 if (marks>=80 && marks <=100){
    cout<< "A";
 }

 return 0;

}

int main (){
    int age ;
    cin>> age;
    if (age<18){
        cout<< "Not eligible for job";
    }

    else if(age>=18){
        cout<<" Eligible for job";
    }

    else if(age<=54){
        cout<<"Eligible for job";
    }

   else if (age<=57){
        cout<<"Eligible for job ,but soon retirement";
    }

    else{
        cout<<"Retirement time";
    }
    return 0;
}