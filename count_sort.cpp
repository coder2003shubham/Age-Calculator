#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Elements in array : ";
    int max = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] > max)
        max = arr[i];
    }
    int a[max+1] = {0};
    for(int i = 0;i<n;i++)
    {
        a[arr[i]]++;
    }
    int sorted[n];
    int j = 0;
    for(int i = 0;i<=max ; i++)
    {
        while(a[i] > 0)
        {
            sorted[j] = i;
            j++;
            a[i]--;
        }
    }
    cout<<"Sorted array : ";
    for(int i = 0;i<n;i++)
    cout<<sorted[i]<<" ";
}
