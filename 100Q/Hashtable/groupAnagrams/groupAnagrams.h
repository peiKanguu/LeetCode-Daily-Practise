#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        // Remove elements from the container 'strs' one by one and assign them to 'str' in turn.
        for (string str : strs) {
            string key = str;

            // sort string (in alphabetical order)
            sort(key.begin(), key.end());

            // {ate: ate eat tae ...} 
            // {string(key): vector<string>(value)}
            mp[key].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end();it++) {
            ans.push_back(it->second);
        }
        
        return ans;
    }
};
