#include<iostream>

int CoinRow(int* arr, int n)
{
    if(n==1){
        return arr[0];
    }
    if(n==2){
        return std::max(arr[0],arr[1]);
    }
    
    int i;
    
    int F[n];
    F[0]=0;
    F[1]=arr[0];
    for(i=2; i<n; i++)
    {
        F[i]=std::max(arr[i]+F[i-2],F[i-1]);
    }
    return F[n-1];
}
int main()
{
    int N;
    std::cout<<"Enter the Number of Coins: ";
    std::cin>>N;
    int array[N];
    std::cout<<"Enter the Values of the Coin: ";
    for(int i=0; i<N; i++){
        std::cin>>array[i];
    }
    int F[CoinRow(array,N)];

    std::cout<<"The values: ";
    for(int i=0; i<N; i++){
        std::cout<<F[i]<<" ";
    }

}