#include<iostream>
#include<bits/stdc++.h> // iske andar sab lib install hoti hai , sirf ye #unclude likha toh bhi chalega.
using namespace std; //baar-baar std likhne ki jarurat nai hai function me;

 int main(){
 cout<< "Moin Shaikh"<<endl << "Miya bhai"<< endl; // endl matlab new line se shuruwat hogi 
// // matlab har ek word ya sentence new line se likhna start hoga 
 return 0;
 }

int main(){
    int x,y;
    cin >> x >> y;  // cin matlab character input 
    cout <<"value of x:" << x << "and value of y:" << y << endl;
    return 0;
    // value insert karna padega print karte samay.
}

// ********************************************************* datatypes ****************************************************************************


#include<bits/stdc++.h>
using namespace std;

int main(){
    // int
    int x= 10;
    // long
    long y = 15;
    cin>> x;

    long long z = 1500000000; // ye badi value rahegi toh do baar long aayega

    // float , double 
    float x = 5.6;
    float y = 5;
    cout << "value of y:" << y; // isme value of y = 5 print karega agar double y =5 bhi likha toh ye he print karega.

return 0;
}

 int main(){
//     //int,long,long long,float,double
//     // string and getline
        string s1;
        string s2;
        cin >> s1 >> s2;
        cout<< s1 <<" " << s2;
        return 0;
 }

// hey moin do string hai isliye do string likha s1,s2. " " isse do string k beech space hoga. jaise hey Moin,

 int main (){
     string str;
     getline(cin,str);
     cout<< str;
     return 0;

}
// isme pura sentence print hoga lekin jasie he enter dabaya toh print nai hoga qki vo ek line he print karta hai.
// jaise, hey moin how are you.

int main(){
    char ch = 'g';
    cout << ch;
    return 0;
}

// isme g print hoga qki character 'g' hai.


// **********************************************************************************Functions*********************************************************************************************


#include<bits/stdc++.h>
using namespace std;
//Functions are set of code which performs something for you
//Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times.
// void -> which does not return anything
//return
//parameterised
// non parameterized

void printName (string name){
    cout << "hey" << name << endl;
}

int main (){
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}

// Take two numbers and print its sum
int sum (int num1, int num2) {
    int num3 = num1 + num2; // 5+ 6
    return num3;
}

int main (){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum (num1,num2);
    cout << res;
    return 0;

}

int maxx (int num1,int num2){
    //5>=6
    if  (num1 >= num2 ){
        return num1;
    }
    return num2;
    // looking for a return line 
}

int main (){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2);
    cout <<maximum;
    return 0;
}

// pass by value
void doSomething(int num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;

}

int main(){
    int num =10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
//  pass by refrence
void dosomething(string S){
    S[0] = 't';
    cout << S << endl;
    
}
 int main (){
    string S = "raj";
    dosomething(S);
    cout << S << endl;
    return 0;
 }

// ********************************************************************** if else ***************************************************************************************************


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

// *************************************************************** loops **********************************************************************************

#include<bits/stdc++.h>
using namespace std;

int main (){
    //i=1 
    //i=2
    //i=3
    //i=4
    //i=5
    //i=6
    //i=7
    //i=8
    //i=9
    //i=10
    for(int i=1; i<=10; i=i+1){   // isme + 1 se increment hoga, aur 1 se start hoga, aur 10 ya 10 se kam print hona chaiye.
        cout << "strivers" << endl;
    }

    return 0;


int i = 2 ;
while(i<=1){
cout << "strivers" << i << endl;
i= i+1;
}
 return 0;

// isme false hoga ,print nai hoga qki 2 se start hai aur i ki value 1 k barabar ya chota hona chaiye. 

int i = 2;
do{
    cout << "striver" << i<< endl;
    i = i+1;
    } while (i<=1);
    cout << i << endl;
     return 0;
}

// isme kuch bhi condition chalega lekin print karo .


// ********************************************************************* switch case ************************************************************


#include<bits/stdc++.h>
using namespace std;
/*

Take the day no and print the corresponding day
for 1 print Monday

for1 print Monday
for 2 print tuesday and so on for 7 print sunday.

*/

int main(){
    int day ;
    cin>>day ;
    
    switch(day){
        case 1:
        cout<<"Monday";
        break;

        case 2 :
        cout<< "Tuesday";
        break;

        case 3 :
        cout<< "wednesday";
        break;

        case 4 :
        cout<< "Thursday";
        break;

        case 5 :
        cout<< "Friday" ;
        break;

        case 6 :
        cout<< "Saturday";
        break;

        case 7 :
        cout<< "Sunday";
        break;

        default:
        cout << "Invalid";

        cout<<"Check";
        return 0;




    }

}
//  ******************************************************************* arrays and string ****************************************************************************************


#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[3];
    return 0;
}

int main (){
    // 2d array
    int arr [3] [5] ;
    

    arr [1] [3] =78;
    cout << arr[1] [2];
    return 0;
}

int main (){
    string S = "Striver";
    int len = S.size();
    S[len-1] = 'z'; // agar string ki last value change karni ho toh ye code likhe;
    cout<< S[len-1]; // agar change nai karna ho toh ye likhe
    return 0;
}

