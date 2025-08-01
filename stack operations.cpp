#include<iostream>
using namespace std;
#define size 5
int stack [size];
int top= -1;

void push(int num){
    if(top==size-1){
        cout<<"stack is overflow can not be inserted"<<endl;
    }else{
        top++;
        stack [top] = num;
        cout<<num<<" inseterd "<<endl;
    }
}
void pop(){
    if(top==-1){
        cout<<"stack is underflow can not be removed"<<endl;
    }else{
        cout<<stack[top]<<" removed "<<endl;
        top--;
    }
}
void display(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        }else{
            for(int i=top; i>=0; i--){
                cout<<stack[i]<<endl;
                
            }
        }
}
void peek(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        
    }else{
        cout<< " top element is : "<<stack[top]<<endl;
        
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    display();
    peek();
    return 0;
}
