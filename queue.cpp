#include <bits/stdc++.h>
using namespace std;

class Queue{
    public: 
    int cursize=0;
    int start=-1;
    int rear=-1;
    int size=1000;
    int arr[1000];
    
    void push(int element){
        if(cursize<size){
            rear++;
            cursize++;
        }
        else if(cursize==0){
            start++;
            rear++;
            cursize++;
        }
        else{
            cout<<"queue filled"<<endl;
        }
        arr[rear]=element;
    }

    void pop(){
        if(cursize==1){
            start=-1;
            rear=-1;
            cursize=0;
        }
        else if(cursize<size && cursize>0){
            cursize--;
            start++;
        }
        else{
            cout<<"queue empty"<<endl;
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
    
};

class CQueue{
    public: 
    int cursize=0, start=-1, end=-1;
    int size=10000;
    int arr[10000];

    void push(int element){
        if(cursize==0){
            start=0;
            end=0;
            cursize++;

        }
        else if (cursize < size){
            end=(end+1)%size;
            cursize++;

        }
        else{
            cout<<"queue filled"<<endl;
        }
        arr[end]=element;
        }
    
    void pop(){
        if(cursize==1){
            start=-1;
            end=-1;
            cursize--;
        }
        else if (cursize>1){
            start=(start+1)%size;
            cursize--;
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
CQueue q;
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