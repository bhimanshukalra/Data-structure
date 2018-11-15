#include <iostream>
using namespace std;
#define MAX 100

class stack
{
    int top;
public:
    char arr[MAX];
    bool push(int num);
    char pop();
    bool isEmpty();
    char peek();
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

char stack::pop()
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

char stack::peek()
{
    return arr[top];
}

int isOperand(char ch)
{
    return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}

int prec(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

int inToPost(char * exp)
{
    stack s;
    int i, k;
    for(i=0,k=-1;exp[i];++i)
    {
        if(isOperand(exp[i]))
            exp[++k]=exp[i];
        else if(exp[i]=='(')
            s.push(exp[i]);
        else if(exp[i]==')')
        {
            while(!s.isEmpty()&&s.peek()!='(')
                exp[++k]=s.pop();
            if(!s.isEmpty()&&s.peek()!='(')
                return -1;
            else
                s.pop();
        }
        else{
            while(!s.isEmpty() && prec(exp[i])<=prec(s.peek()) )
                exp[++k]=s.pop();
            s.push(exp[i]);
        }
    }
    while(!s.isEmpty())
        exp[++k]=s.pop();
    exp[++k]='\0';
    cout<<exp;
    return 0;
}

int main()
{
//    stack s;
//    s.push(0);
//    s.push(1);
//    s.push(2);
//    cout<<s.pop()<<" popped from stack.\n";
//    s.isEmpty()==1?cout<<"Empty\n":cout<<"NOT empty\n";
    char exp[]="a+b*(c^d-e)^(f+g*h)-i";
    inToPost(exp)==-1?cout<<"Invalid expression.\n":cout<<endl;
    return 0;
}

