#include<iostream>

void selectionSort(int* arr, int n)
{
    int min_index;
    for(int i=0; i<n; i++)
    {
        min_index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            std::swap(arr[min_index],arr[i]);
        }
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
    selectionSort(array,N);
    std::cout<<"The Sorted Array is: ";
    for(int i=0; i<N; i++)
    {
        std::cout<<array[i]<<" ";
    }
    return(0);
}
