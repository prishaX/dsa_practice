
#include <bits/stdc++.h>
using namespace std;

class Stack{
public: 
    int arr[100];    
    int top=-1;
    int size=100;
    //to create nd allocate memory for stack
    
    void push(int element){
        if (top < size){
            top++;
            arr[top]=element;
        }
        else {
            cout<<"Stack is filled"<<endl;
        }
    }

    void pop(){
        if (top>0){
            top--;
        }
        else { 
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if (top >=0 && top <=size){
            return arr[top];
        }
        else {
            cout<<" the stack is empty"<<endl;
        }

    }

    bool isEmpty(){
        if(top==0){
            return true;
        }
        else{
            return false;
        }
    }

    int Size(){
        return top+1;
    }
};

string prefixtopostfix(string s){
    stack<string> stk;
    for (int i=s.length()-1;i>=0;i++){
        char c= s[i];
        if(isalnum(c)){
            stk.push(string(1,c));
        }
        else {
            string o1=stk.top();
            stk.pop();
            string o2=stk.top();
            stk.pop();
            stk.push(o1+o2+c);
        }
    }
    return stk.top();
}

string prefixtoinfix(string s){
    stack<string> stk;
    for (int i=s.length()-1;i>=0;i++){
        char c= s[i];
        if(isalnum(c)){
            stk.push(string(1,c));
        }
        else {
            string o1=stk.top();
            stk.pop();
            string o2=stk.top();
            stk.pop();
            stk.push("("+o1+o2+c+")");
        }
    }
    return stk.top();
}

string postfixtoinfix(string s){
    stack<string> stk;
    for (int i=0;i<s.length();i++){
        char c= s[i];
        if(isalnum(c)){
            stk.push(string(1,c));
        }
        else {
            string o1=stk.top();
            stk.pop();
            string o2=stk.top();
            stk.pop();
            stk.push("("+o1+o2+c+")");
        }
    }
    return stk.top();
}

string postfixtoprefix(string s){
    stack<string> stk;
    for (int i=0;i<s.length();i++){
        char c= s[i];
        if(isalnum(c)){
            stk.push(string(1,c));
        }
        else {
            string o1=stk.top();
            stk.pop();
            string o2=stk.top();
            stk.pop();
            stk.push(c+o1+o2);
        }
    }
    return stk.top();
}

string infixtoprefix(string s){
    stack<string> stk;
    for (int i=0;i<s.length();i++){
        char c= s[i];
        if(isalnum(c)){
            stk.push(string(1,c));
        }
        else {
            string o1=stk.top();
            stk.pop();
            string o2=stk.top();
            stk.pop();
            stk.push("("+o1+o2+c+")");
        }
    }
    return stk.top();
}

int main(){

    return 0;
}