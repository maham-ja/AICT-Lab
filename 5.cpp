#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int totalVolume = 0;
    for (int i = 0; i < n; i += 3) {
        int length = arr[i];
        int width  = arr[i + 1];
        int height = arr[i + 2];

        int volume = length * width * height;

        totalVolume += volume;
    }

    cout << "Total Volume = " << totalVolume;
}
