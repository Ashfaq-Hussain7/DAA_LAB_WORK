#include<iostream>

void insertionSort(int *arr,int n)
{
    for(int i=1; i<n; i++)
    {
        int key,j;
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
 
int main()
{
    int N;
    std::cout<<"Enter the Size of the Array: ";
    std::cin>>N;
    int array[N];
    std::cout<<"Enter the Elements of the Array: "<<std::endl;
    for(int i=0; i<N; i++)
    {
        std::cin>>array[i];
    }
    insertionSort(array,N);
    std::cout<<"The Sorted Array is: ";
    for(int i=0; i<N; i++)
    {
        std::cout<<array[i]<<" ";
    }
    return(0);
}