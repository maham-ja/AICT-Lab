#include<iostream>
using namespace std;
int main() 
{
int n;
cout<<"Enter number of elements: ";
cin >> n;
int arr[n];
cout<<"Enter the elements:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int peaks[n];   
int count = 0;  
for (int i = 1; i < n - 1; i++)
{if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
{
peaks[count] = arr[i];
count++;
}
}
if (count == 0)
{
cout<<"No Peak found";
}else {cout << "Peaks are: ";
for (int i = 0; i < count; i++) {
cout<<peaks[i] << " ";
}
}
return 0;
}
