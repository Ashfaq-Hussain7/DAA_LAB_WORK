#include<iostream>
int LinSearch(int *arr,int n,int V)
{
    int i=0;
    while(i!=n)
    {
        if(arr[i]==V)
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    std::cout<<"*NIL*\n The element is not present in the array."<<std::endl;
}
int main()
{
    int N,value;
    std::cout<<"Enter the size of the Array: ";
    std::cin>>N;
    int array[N];
    std::cout<<"Enter the Elements of the Array: "<<std::endl;
    for(int i=0l;i<N;i++)
    {
        std::cin>>array[i];
    }
    std::cout<<"The value to be Searched: ";
    std::cin>>value;
    LinSearch(array,N,value);
    int position=-1;
    position = LinSearch(array,N,value);
    if(position != -1)
    {
        std::cout<<"position = "<<position;
    }
    return 0;
}