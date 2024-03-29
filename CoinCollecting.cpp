#include<iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

void CoinPath(int **sum, int m, int n)
{
    cout<<"\tPath\n("<<m+1<<","<<n+1<<")";
    while((m>0)||(n>0)){
        if (m==0)
        {
            n--;
        }
        else if (n==0)
        {
            m--;
        }
        else if (sum[m-1][n]>=sum[m][n-1]){
            m--;
        }
        else {
            n--;
        }
        cout<<"<--("<<m+1<<","<<n+1<<")";
    }
    return;
}

void CCP(bool **coins, int m, int n)
{
    int **sum = new int *[m];
    for (int i = 0; i < m; i++)
    {
        sum[i] = new int[n];
    }

    sum[0][0] = coins[0][0];
    for (int i = 1; i < n; i++)
    {
        sum[0][i] = sum[0][i - 1] + coins[0][i];
    }
    for (int i = 1; i < m; i++)
    {
        sum[i][0] = sum[i - 1][0] + coins[i][0];
        for (int j = 1; j < n; j++)
        {
            sum[i][j] = max(sum[i - 1][j], sum[i][j - 1]) + coins[i][j];
        }
    }

    cout << endl
         << "\tSum" << endl
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << i + 1;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << i + 1;
        for (int j = 0; j < n; j++)
        {
            cout << " " << sum[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "\n\nLargest value=" << sum[m - 1][n - 1] << endl;

    cout<<endl;

    CoinPath(sum, m - 1, n - 1);

    for (int i = 0; i < n; i++)
        delete sum[i];
    delete sum;

    return;
}

int main()
{
    int m, n;
    cout << "\n\nEnter dimension of board: ";
    cin >> m >> n;
    bool **coins = new bool *[m];
    for (int i = 0; i < m; i++)
        coins[i] = new bool[n];

    cout << "\n\nEnter 1 if coin is present,else zero: " << "\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Location " << i + 1 << "," << j + 1 << ":";
            cin >> coins[i][j];
        }
    }
    cout << endl;

    cout << endl
         << "\tBoard" << endl
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << i + 1;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << i + 1;
        for (int j = 0; j < n; j++)
        {
            cout << " " << coins[i][j];
        }
        cout << endl;
    }

    CCP(coins, m, n);

    for (int i = 0; i < m; i++)
        delete coins[i];
    delete coins;

    return 0;
}