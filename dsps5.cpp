/*Arti Auti, Roll no.:05,dsps assignment 5,date:12-9-24*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string s;
int precedence(char c)
{
    if(c == '^')
        return 3;
    else if(c == '/' || c == '*')
        return 2;
    else if(c == '-' || c == '+')
        return 1;
    else
        return -1; 
} 
string InfixToPostfix(string exp)
{
    stack<char> s;
    string res;
    for(int i = 0; i < exp.length(); i++)
    {

        if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
            res += exp[i];
       
        else if(exp[i] == '(')
            s.push(exp[i]);

        else if(exp[i] == ')')
        {
            while(!s.empty() && s.top() != '(') {
                res += s.top();
                s.pop();
            }
            s.pop(); 
        } 
        else
        {
            while (!s.empty() && precedence(s.top()) >= precedence(exp[i])) {
                res += s.top();
                s.pop();
            }
            s.push(exp[i]); 
        }
    }
    while(!s.empty()) {
        res += s.top();
        s.pop();
    }
    return res;
}
int main()
{
    cout<<"Enter infix expression";
    cin>>s;
    cout << InfixToPostfix(s) << endl;
}
