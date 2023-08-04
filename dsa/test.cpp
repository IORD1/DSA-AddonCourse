#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = start+1;
    int temp=0;
    while(end <= size-1)
    {
        if(arr[start]<0 && arr[end]<0)
        {
            start++;
            end++;
        }
        if(arr[start]>0 && arr[end]<0)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end]=temp;
            start++;
            end++;
        }
        if(arr[start]>0 && arr[end]>0)
        {
            end++;
        }
        if(arr[start]<0 && arr[end]>0)
        {
            start++;
            end++;
        }
    }
    for (int i = 0; i < size-1; i++)
    {
        cout<<arr[i]<<'\t';
    }
    
}