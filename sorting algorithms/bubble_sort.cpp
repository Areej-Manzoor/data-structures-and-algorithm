#include <iostream>
using namespace std;


void print_array_before_sorting(int arr[],int n)
{
    cout<<"Array Before Sorting"<<endl<<endl;
    for(int i=0;i<n;i++)
    {   if(i==(n-1))
       cout<<arr[i];
       else
        cout<<arr[i]<<",";
    }
}

void bubble_sort(int arr[],int n)
{
    int i,j;
    int temp=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void print_array_after_sorting(int arr[],int n)
{
    cout<<"Array After Sorting"<<endl<<endl;
    for(int i=0;i<n;i++)
    {   if(i==(n-1))
       cout<<arr[i];
       else
        cout<<arr[i]<<",";
    }
}

int main() {
    // Write C++ code here
int arr[]={64, 34, 25, 12, 22, 11, 90};
print_array_before_sorting(arr,6);
bubble_sort(arr,6);
cout<<endl<<endl;
print_array_after_sorting(arr,6);


    return 0;
}