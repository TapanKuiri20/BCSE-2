#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int numberOfWeakCharacters(vector<vector<int>>& properties) {
        unordered_map<int, int> mp;
        for(vector<int> i : properties){
            mp[i[0]] = i[1];

        }
        int count = 0;
        auto prev = mp.begin();  // Track the previous iterator
        auto it = mp.begin();

    // Move iterator to the second element
    ++it;
    
    for (; it != mp.end(); ++it, ++prev) {
        cout<<it->second<< ">"<<prev->second<<endl;
        if (it->second > prev->second) {
            count++;
        }
    }

        return count;
}


int main(){
    vector<vector<int>> properties = {{1,5},{10,4},{4,3}};
    cout<<"h";
    cout<< numberOfWeakCharacters(properties);
}
      