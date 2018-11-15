#include <iostream>
using namespace std;
#define MAX 100

class stack
{
   int top;
public:
   int arr[MAX];
   bool push(int num);
   int pop();
   bool isEmpty();
   int peek();
};

bool stack :: push(int num)
{
   if(top>=MAX-1)
   {
       cout<<"Stack overflow";
       return false;
   }else{
       arr[++top]=num;
       cout<<num<<" pushed into stack.\n";
       return true;
   }
}


int stack::pop()
{
   if(top<0)
   {
       cout<<"Stack underflow.\n";
       return 0;
   }
   return arr[top--];
}

bool stack::isEmpty()
{
   return (top<=0);
}

int stack::peek(){
   return arr[top];
}

int main()
{
   stack s;
   s.push(0);
   s.push(1);
//    s.push(2);
//    cout<<s.pop()<<" popped from stack.\n";
//    s.isEmpty()==1?cout<<"Empty\n":cout<<"NOT empty\n";
//    cout<<s.peek();
   return 0;
}
