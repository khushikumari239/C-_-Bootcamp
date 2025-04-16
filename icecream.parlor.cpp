vector<int> icecreamParlor(int m, vector<int> arr) {

    map <int, int>mp;
    vector<int>res;
    
    for(int i=0; i<arr.size(); i++) {
        
        int complement = m-arr[i] ;
        if (mp.count(complement)) {
            res= {mp[complement] +1, i+1};
            break;
        }
        mp[arr[i]] = i;
        
    }
    return res;
    }
    