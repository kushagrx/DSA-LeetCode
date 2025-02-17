//Back on the coding grind      CB-> Come Back

/* ARRAYS MEDIUM : SORT ARRAY OF 0,1,2 
OPTIMAL Solution Using the Dutch National Flag algorithm,
[0..low-1] -> 0
[low...mid-1] -> 1
mid...high -> unsorted
[high+1...n-1] -> 2
*/

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr1 = {0, 1, 1, 0, 2, 1, 0, 0, 1, 2, 0, 2};
    int n = arr1.size();
    sortArray(arr1, n);
    for (auto it : arr1) {
        cout<<it<<" ";
    }
    return 0;
}
  