#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Elements in array : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag = 0;
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 1;j<n;j++)
        {
            if(arr[j-1] >arr[j])
            {
                swap(arr[j-1] , arr[j]);   
                flag = 1;
            }
        }
        if(flag == 0)
        break ;
    }
    cout<<"Sorted array : ";
    for(int i = 0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
