#include<bits/stdc++.h>
using namespace std;

int main () {

    // i will need 
    // a input as " n " which will be the no. of elements in the array 
    // and "i" which is the elements in the array... inside the for loop 
    
    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];

    }
    // g++ .\Hashing.cpp
    // .\a.exe

    // STEP 1 PRECOMPUTE 

    int hash[13] = {0}; 
    // 13 is max it can be anything on the basis of the max given in the problem

    for(int i=0; i<n;i++) {
        hash[arr[i]] +=1;
    }



    // now i will go with "q " which is no. of queries i will work on
    // and i will take "number" which is the no's i need to check
    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;

   

    // STEP 2 FETCH
    cout<<hash[number]<<endl;
 }




    
}