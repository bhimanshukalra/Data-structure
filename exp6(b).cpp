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
   stack(){top=-1;}
};

bool stack :: push(int num)
{
   stack s;
   if(top>=MAX-1)
   {
       cout<<"Stack overflow";
       return false;
   }else{
       arr[++top]=num;
//        cout<<num<<" pushed into stack.\n";
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

int stack::peek()
{
   return arr[top];
}

int evaluatePostfix(char *exp)
{
   stack s;
   for(int i=0;exp[i];i++)
   {
       if(isdigit(exp[i]))
           s.push(exp[i]-'0');
       else{
           int val1=s.pop();
           int val2=s.pop();
           switch(exp[i]){
               case '+':
                   s.push(val2+val1);
                   break;
               case '-':
                   s.push(val2-val1);
                   break;
               case '*':
                   s.push(val2*val1);
                   break;
               case '/':
                   s.push(val2/val1);
                   break;
           }
       }
   }
   return s.pop();
}

int main()
{
   char exp[]="231*+9-";
   cout<<"Postfix eval: "<<evaluatePostfix(exp)<<endl;
   return 0;
}
