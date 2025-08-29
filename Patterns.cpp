#include<bits/stdc++.h>
using namespace std;

// 1st pattern
void print1( int n){
    for(int i=0; i<=n; i++){
        for ( int j=0; j<=n; j++){
            cout << "*";
        }
       cout  <<endl;

    }
    
}




// 2nd patttern
void print2(int n){
    for(int i =0 ; i<n; i++){
        for( int j = 0; j<=i; j++ ){
       cout <<"* ";
        }
        cout << endl;
    }
}
// 3rd pattern 
void print3(int n){
    for(int i =1 ; i<=n; i++){
        for( int j = 1; j<=i; j++ ){
       cout << j << " ";
        }
        cout << endl;
    }
}

// 4th pattern
void print4(int n){
    for(int i =1 ; i<=n; i++){
        for( int j = 1; j<=i; j++ ){
       cout << i << " ";
        }
        cout << endl;
    }
}

//  5th pattern
void print5(int n){
    for(int i =1; i<=n; i++){
        for( int j = 0; j<n-i+1; j++ ){
       cout <<  "* ";
        }
        cout << endl;
    }
}
//  6th pattern
void print6(int n){
for(int i =1;i<=n;i++){
    for(int j = 1;j<=n-i+1;j++){
        cout<< j << " ";

    } 
    cout << endl;

}
}

// 7th pattern
void print7(int n){
    for(int i = 0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j = 0;j<2*i+1;j++){
           cout <<"*";
        }
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        cout<<endl;
    }
}

// 8th pattern
void print8(int n){
    for(int i=0; i<n; i++){
        // Print spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        // Print stars or any pattern
        for(int k=0; k < 2*n - (2*i + 1); k++){
            cout << "*";
        }
        cout << endl;
    }
}

// 9th pattern 
void erect_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

void inverted_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}
void print10(int N){
    {
      // Outer loop for number of rows.
      for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N) stars = 2*N-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
           // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}
}

void print11(int n){
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0){
            start = 1;
        }
        else {
            start = 0;
        }

        for(int j = 0; j <= i; j++){
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void print12(int n){
    int spaces =2*(n-1);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
       spaces-=2;
    }
}

void print13(int n){

    int num=1;
    for(int i =0;i<=n;i++){
        for(int j= 0;j<=i;j++){
            cout<<num<<" ";
            num=num+1;

        }
        cout<<endl;    }
}

void print14(int n){
    char ch ='A'+1;
    for(int i=1;i<n;i++){
   for(char ch ='A'; ch<'A'+i;ch++){
    cout<<ch<<" ";
}
cout<<endl;
}
}

void print15(int n){
    for(int i=0;i<n;i++){
    for(char ch ='A'; ch<='A'+(n-i-1);ch++){
       cout<<ch<<" ";
 }

    cout<<endl;
 
    }
}

void print16(int N){
    
       
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // Defining character for each row.
          char ch = 'A'+i;
          for(int j=0;j<=i;j++){
              
              // same char is to be printed i times in that row.
              cout<<ch<<" ";
              
          }
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
          
      }
}

void print17(int N){
  // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // for printing the spaces.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
          
      }
}

void print18(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch ='E';
        for(int j =0;j<2*i+1;j++){

            cout<<ch;
            if(j<2*i+1) ch--;
            else ch++;

        }
        for(int j=0;j<n-i-1;j++){
            cout<< endl;
        }
    }
}

int main()
{   
    int n= n;
    cin>>n;
    print18(n);

    return 0;
} 