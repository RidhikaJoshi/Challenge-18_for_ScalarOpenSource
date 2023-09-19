#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    itn s=0;
    while(n!=0)
    {
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int rev=reverse(n);
    cout << rev << endl;
}