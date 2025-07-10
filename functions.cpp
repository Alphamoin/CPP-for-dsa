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

