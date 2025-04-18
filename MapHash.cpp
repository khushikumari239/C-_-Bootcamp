#include <bits/stdc++.h>
using namespace std;

int main(){
    // i will need a " n " then the " array " then i will need " q " the queries .... later on the " numbers "
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    // PRE-COMPUTE STEP 1

    map<int , int>mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]] ++;
    }

    int q;
    cin>>q;

    while (q--) {
        int number;
        cin>>number;

        //FETCH STEP 2

        cout<<mpp[number] << endl;




    }




    return 0;
}
