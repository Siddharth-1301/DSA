#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2,2,3,3,1,2,2};
    
    for(int i = 0; i < arr.size(); i++) {
        int count = 1;  // Reset count for each number
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > arr.size()/2) {
            cout << "Majority element is: " << arr[i] << endl;
            return 0;
        }
    }
    cout << "No majority element found" << endl;
    return 0;
}