#include <iostream>
#include<sstream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
    // Your code goes here
    string s="dog cat cat dog";
    string pattern="abba";
    stringstream ss(s); //Split the string s into words 
    vector<string>v; // vector to store the words
    string word; //used as an intermediate variable to store each word
    // Split the string s into words using stringstream
    // and store them in the vector v
    while(ss>>word){
       v.push_back(word);
    }
    cout<<v.size()<<endl;
    cout<<s.size()<<endl;
    if(v.size()!=pattern.size()) {cout<<"Not a valid word pattern"<<endl; return 0;}
   
    unordered_map<string,char>mp;
    set<char>st;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end() && st.find(pattern[i])==st.end()){
            st.insert(pattern[i]);
            mp[v[i]]=pattern[i];
            cout<<"Inserted "<<v[i]<<" with pattern "<<pattern[i]<<endl;

        }else if(mp[v[i]]!=pattern[i]|| st.find(pattern[i])==st.end()){
            cout<<"Not a valid word pattern"<<endl;
            return 0;

            
        }
    }

    return 0;
}


// codestorywithMik Approach 1:
/*
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string token;
        unordered_map<string,char> mp;
        vector<string>words;
        set<char>used;
        int count=0;
        while(getline(ss,token,' ')){
            words.push_back(token);
            count++;

        }
        int n=pattern.length();
        if(n!=count) return false;

 for (int i = 0; i < pattern.length(); i++) {            string word=words[i];
            char ch=pattern[i];

            if(mp.find(word)==mp.end() && used.find(ch)==used.end()){
                used.insert(ch);
                mp[word]=ch;
            }else if(mp[word]!=ch){
                return false;
            }
        }
        return true;
    }
};


*/


