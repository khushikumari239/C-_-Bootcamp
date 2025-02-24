#include<bits/stdc++.h>
using namespace std;
int Fact (int n)
{
if(n==0) return 1;
return n * Fact (n-1);

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
            #endif

            int n=3;
            cout << Fact (n) << endl;
            return 0;
