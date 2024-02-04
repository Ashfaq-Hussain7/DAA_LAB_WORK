#include<iostream>
using namespace std;
using ull=unsigned long long; 

// Dynamic implementation
ull Fibonacci(int N)
{
    ull fib[N + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[N];
}

int main()
{
    int n;
    cout << "\n\nEnter n to calculate nth fibonacci term: ";
    cin >> n;
    ull fib = Fibonacci(n);
    cout << "\n\nThe nth Fibonacci term: " << fib << endl;
    cout<<"\n\n";
    return 0;
}