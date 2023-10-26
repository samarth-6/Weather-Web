#include <iostream>
#include <vector>

using namespace std;

void generateSubarrays(const vector<int>& arr, int start, int end) {
    if (start > end) {
        return;
    }

    for (int i = start; i <= end; ++i) {
        for (int j = i; j <= end; ++j) {
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    generateSubarrays(arr, start + 1, end);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    generateSubarrays(arr, 0, n - 1);

    return 0;
}