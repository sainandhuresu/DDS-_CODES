#include<iostream>
using namespace std;

  #define size 4
  int stack [size];
  int top = -1;
  void push(int num){
      if(top==size-1){
          cout<<"overflow"<<endl;
      }else{
          top++;
          stack [top] =num;
          cout<<num<<" inserted "<<endl;
      }
  }
  void pop(){
      if(top==-1){
          cout<<"stack is underflow can not remove element"<<endl;
          
      }else{
          cout<<stack[top]<<"removed"<<endl;
          top--;
      }
  }

  int main() {
      push(10);
      push(12);
      push(9);
      push(20);
      push(5);
      pop();
  }
