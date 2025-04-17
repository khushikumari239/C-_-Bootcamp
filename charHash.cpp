#include<bits/stdc++.h>
using namespace std;

int main (){

    // Character hashing will be going on here...
    // i will need a input as "string s" where the whole nvalues will exist then i will need no. of "queries q" i need to find ... then i will be in the need of a "Char c" which will be the no's i need to find 

    string s;
    cin>>s;

    //STEP 1 PreCompute
    int hash[26] ={0};
    for(int i=0; i< s.size(); i++) {
        hash[s[i] - 'a']++;
    }



    int q ;
    cin>>q;

    while(q--) {
        char c;
        cin>>c;

        //STEP 2 Fetch
        cout<<hash[c-'a']<<endl;
        
    }






    return 0;
}
