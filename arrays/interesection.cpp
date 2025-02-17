#include <iostream>
#include <vector>
using namespace std;
vector<int> newArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> intersectedArr;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            intersectedArr.push_back(a[i]);  // Push common element
            i++;
            j++;
        }
    }
    return intersectedArr;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr1;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>result = newArray(arr1, arr2);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}