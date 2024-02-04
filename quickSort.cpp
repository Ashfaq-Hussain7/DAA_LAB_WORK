#include <iostream>

int partition(int *arr, int start, int end)
{
    int piv = arr[start];
    int low=start;
    int high=end;

    while (arr[low]<piv)
    {
        low++;
    }
    while (arr[low]>piv)
    {
        high--;
    }
    if(low<high)
    {
        std::swap(arr[start],arr[end]);
    }
    std::swap(arr[start],arr[high]);
    return high;
    
}
void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);

        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}
int main()
{
    int N;
    std::cout << "\nEnter the Size of the Array: ";
    std::cin >> N;
    int array[N];
    std::cout << "\nEnter the Elements of the Array: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cin >> array[i];
    }
    std::cout << "\n\nThe Array Before Sorting: ";
    for (int i = 0; i < N; i++)
    {
        std::cout << array[i] << " ";
    }
    quickSort(array, 0, N - 1);
    std::cout<<"\n\nThe Array After Sorting: ";
    for(int i=0;i<N;i++)
    {
        std::cout<<array[i]<<" ";
    }
    return(0);
}