#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    int f = 1;
    while(n>0)
    {
        f *= n;
        n--;
    }
    return f;
}
int main()
{
    int r;
    cin>>r;
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<Factorial(i)/(Factorial(j)*Factorial(i-j))<<" "; 
        }
        cout<<endl;
    }
}