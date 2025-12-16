#include<iostream>
using namespace std;
int arr[100];
int n;  
bool isRepeatingCycle(int cycleLength)
{
if (cycleLength > n) {
return true;
}
for (int i = cycleLength; i < n; i++) {
if (arr[i] != arr[i - cycleLength]) {
return false;
}
}
return true; 
int main() {
cout << "Array Length: ";
cin >> n;
cout << "Enter array elements:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int cycleLength;
cout << "Enter cycle length: ";
cin >> cycleLength;
if (isRepeatingCycle(cycleLength)) {
cout << "true";
} else {
cout << "false";
}
return 0;
}

