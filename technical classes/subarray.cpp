#include <bits/stdc++.h>
using namespace std;
// vector<int>findSub(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
int main() {
    vector<int> arr1 = {1,5,6,4};
    list<list<int>> subArrays;

    for (int s = 0; s < arr1.size(); s++) {
        list<int> subArray; 
        for (int e = s; e < arr1.size(); e++) {
            subArray.push_back(arr1[e]);
            subArrays.push_back(subArray); 
        }
    }
    for (const auto& subArray : subArrays) {
        cout << "[";
        for (const auto& element : subArray) {
            cout << element << " ";
        }
        cout << "] "<<"\n";
    }
    cout << endl;

    return 0;
}