#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;
bool checkpattern(string s , string pattern) {
       stringstream ss(s); // Split the string s into words
    string token;
    unordered_map<string, int> wordMap;
    unordered_map<char,int> charMap;

    int countTokens=0;
    int i=0;
    int n=pattern.size();
    while(ss >> token){
        countTokens++;

        if(i==n || charMap[pattern[i]]!=wordMap[token]) return false;

        charMap[pattern[i]]=i+1;
        wordMap[token]=i+1;

        i++;
    }
    if(countTokens!=n ||i !=n) return false;

    return true;

}
int main() {
    // Your code goes here
    string s = "dog cat cat dog";
    string pattern = "abba";
    checkpattern(s,pattern);
    if(checkpattern(s, pattern)) {
        cout << "The string follows the word pattern." << endl;
    } else {
        cout << "The string does not follow the word pattern." << endl;
    }
 
    return 0;
}