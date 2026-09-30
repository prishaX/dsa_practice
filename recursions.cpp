#include <bits/stdc++.h>
using namespace std;

void deccounting(int n){
    if (n<=0){
        return;
    }
    cout<<n<<endl;
    deccounting(n-1); 
}
void inccounting(int n){
    if (n<=0){
        return;
    }
    inccounting(n-1); 
    cout<<n<<endl;

}

int main(){

    int n;
    cout<<"enter n for counting function"<<endl;
    cin>>n;
    cout<<"counting from "<<n<<" to 1 is: "<<endl;
    deccounting(n);
    cout<<"counting till "<<n<<" is: "<<endl;
    inccounting(n);

    return 0;
}