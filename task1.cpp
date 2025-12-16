#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter the number saturday:";
cin>>num;
int miles[num];
cout<<"enter miles runs each saturday:";
for(int i=0;i<num;i++){
cin>>miles[i];
int progressDays=0;
if(miles[i]>miles[i-1]){
progressDays++;
cout<<"total progress days ="<<progressDays;

}
}
}