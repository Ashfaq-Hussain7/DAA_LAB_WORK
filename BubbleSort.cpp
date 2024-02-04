#include<iostream>

void bubbleSort(unsigned int* arr, int size)
{
    for(int step=0; step<size-1; ++step)
    {
        for(int i=0; i<size-step-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

void print_array(unsigned int* arr, int size)
{
    std::cout<<"\n\nThe sorted array is: ";
    for(int i=0; i<size; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int main()
{
    int N;
    std::cout<<"\n\nEnter the Size of the Array: ";
    std::cin>>N;
    unsigned int array[N];
    std::cout<<"\n\nEnter the Elements of the Array: ";
    for(int i=0;i<N;i++)
    {
        std::cin>>array[i];
    }
    bubbleSort(array,N);
    print_array(array,N);
    std::cout<<std::endl;
}

