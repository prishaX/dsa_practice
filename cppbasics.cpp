#include <iostream>
#include <string>
using namespace std;

class Stringsclass{
    string example;
public:
    int lengthofstring(string s){
      return s.length();
    }
};

int main(){
    Stringsclass str;
    string s;
    cout<<"Enter a line: ";
    getline(cin,s);
    int length;
    length=str.lengthofstring(s);
    cout << "Length = " << length;
    return 0;

//patterns practice
//pattern 1
    for (int a=1;a<=5;a++){
        for (int b=1;b<=5;b++){
            cout<<"*";
        }
        cout<<endl;
    }

//pattern2
for (int c=1;c<=5;c++){
        for (int d=1;d<=c;d++){
            cout<<"*";
        }
        cout<<endl;
    }

//pattern 3
for (int g=1;g<=5;g++){
        for (int h=1;h<=g;h++){
            cout<<h;
        }
        cout<<endl;
    }

//pattern 4
for (int e=1;e<=5;e++){
        for (int f=1;f<=e;f++){
            cout<<e;
        }
        cout<<endl;
    }

//pattern 5
for (int i=5;i>=0;i--){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

//pattern 6
for (int k=5;k>=0;k--){
        for (int l=1;l<=k;l++){
            cout<<l;
        }
        cout<<endl;
    }

//pattern 7

    for (int n=1;n<=5;n++) //no of columns

    for (int l=4;l>=n;l--){
        cout<<" ";                //left side leading spaces
    }
    for (int p=1;p<=2*n-1;p++){
        cout<<"*";              //pattern 
    }

//pattern 9
 for (int i=0;i<5;i++){   //number of columns
        for (int j=4;j>i;j--){  cout<<" "; } //leading spaces
        for (int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
   }
   for (int n=0;n<5;n++){   //number of columns
        for (int m=0;m<n;m++){  cout<<" "; } //leading spaces
        for (int l=0;l<(-2*n)+9;l++){
            cout<<"*";
        }
        cout<<endl;
   }
  
//pattern 10
    for (int i=0;i<=5;i++){   //number of columns
        for (int j=0;j<i;j++){  cout<<"*"; } //stars 
        cout<<endl;
   }
    for (int i=0;i<5;i++){   //number of columns
        for (int j=4;j>i;j--){  cout<<"*"; } //stars 
        cout<<endl;
   }

//pattern 11
for (int i=1;i<=5;i++){   //number of rows
     for (int j=1;j<=i;j++){
        if ((i+j)%2==0)
        cout<<"1";
        else 
        cout<<"0";
     }
     cout<<endl;
   }

//pattern 12
//cross check once 
//not correct 
for (int i=1;i<5;i++){  //number of rows
    for (int j=1;j<=i;j++){ //right side pattern
        cout<<j;
    }
    for (int k=1;k<(-2*i)+8;k++){
        cout<<" ";         //spaces
    }
    for (int n=1;n<=i;n++){
        cout<<n;
    }
    cout<<endl;
   } 

//pattern 13


    return 0;
}