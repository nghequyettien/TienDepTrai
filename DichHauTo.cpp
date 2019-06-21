#include <bits/stdc++.h>
using namespace std;
int cap_do(char a)
{
    if(a=='*')
        return 2;
    else if(a=='/')
        return 2;
    else if(a=='+')
        return 1;
    else if(a=='-')
        return 1;
}
string dich_hauto(stack<char> a,string c)
{
    // a la toan tu
    string endgame="";
    for(int i=0;i<c.size();i++)
    {
        if( (c[i]<=122 && c[i]>=97) || (c[i]<=90 && c[i]>=65))
        {
            endgame=endgame+c[i];
        }
        if( c[i]=='*' || c[i]=='/' || c[i]=='+' || c[i]=='-')
        {
            if(a.top()=='+' || a.top()=='*' || a.top()=='/' || a.top()=='-')
            {
                if (cap_do(c[i]) <= cap_do(a.top()))
                {
                    endgame = endgame + a.top();
                    a.pop();
                    a.push(c[i]);
                }
                else
                    a.push(c[i]);
            }
            else
                a.push(c[i]);
        }
        if(c[i]=='(')
            a.push(c[i]);
        else if(c[i]==')')
        {
            while(a.top()!='(')
            {
                endgame=endgame+a.top();
                a.pop();
            }
        }
    }
    return endgame;
}
int main()
{
    stack<char> toantu;
    string mau = "A*B+C*((D-E)+F)/G";
    string endgame=dich_hauto(toantu,mau);
    cout<<endgame<<endl;
    return 0;
}