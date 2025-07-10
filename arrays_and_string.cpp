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