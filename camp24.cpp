//Write a program to display the array element.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many elements you want to enter"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
