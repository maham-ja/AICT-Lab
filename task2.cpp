#include<iostream>
using namespace std;
 int main()
{
 int n;
cout << "Enter how many words you want to Enter: ";
cin >> n;
string words[n];
for (int i = 0; i < n; i++) {
cout << "Enter word :" << i + 1 << "  ";
cin >> words[i];
}
char letter;
cout << "Enter the letter you want to count: "<<endl;
cin >> letter;
int count = 0;
for (int i = 0; i < n; i++) {
for (int j = 0; j < words[i].length(); j++) {
if (words[i][j] == letter) {
count++;
}
}
}
cout << letter << " shows up " << count << " times in the data.";
return 0;
}