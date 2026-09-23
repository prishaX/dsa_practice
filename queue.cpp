#include <bits/stdc++.h>
using namespace std;

class Queue{
    public: 
    int cursize=0, start=-1, end=-1;
    int size=10000;
    int arr[10000];

    void push(int element){
        if(cursize==0){
            start=0;
            end=0;
        }
        else if (cursize < size){
            end=(end+1)%size;
        }
        else{
            cout<<"queue filled"<<endl;
        }
        arr[end]=element;
        cursize++;
    }
    
    void pop(){
        if(cursize==1){
            start=-1;
            end=-1;
        }
        else if (cursize>1){
            start=(start+1)%size;
        }
        else{
            cout<<"queue is empty"<<endl;
        }
    }

    int top(){
        if (cursize==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else {
            return arr[start];
        }
    }
    
    int Size(){
        return cursize+1;
    }
};

int main(){
Queue q;

q.push(10);
q.push(20);
q.push(30);
cout << q.top()<<endl;
q.pop();
cout << q.top()<<endl;
q.pop();
cout << q.top()<<endl;

return 0;
}