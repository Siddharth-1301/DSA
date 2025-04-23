#include <iostream>
#include <vector>

using namespace std;

vector<int> replace(vector<int> &arr) {
    if (arr.size() == 1) {
        arr[0] = -1;
        return arr;
    }

    for (int i = 0; i < arr.size() - 1; i++) {
        int max = arr[i + 1];  
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        arr[i] = max;  
    }

    arr[arr.size() - 1] = -1;  
    return arr;
}

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    vector<int> result = replace(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
