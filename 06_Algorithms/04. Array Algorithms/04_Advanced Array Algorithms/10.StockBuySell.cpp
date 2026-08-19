#include <iostream>
#include <algorithm>
using namespace std;

int maxProfit(int prices[], int size)
{
    int minimumPrice = prices[0];
    int maximumProfit = 0;

    for (int i = 1; i < size; i++)
    {
        int currentProfit = prices[i] - minimumPrice;

        maximumProfit = max(maximumProfit, currentProfit);

        minimumPrice = min(minimumPrice, prices[i]);
    }

    return maximumProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};

    int size = sizeof(prices) / sizeof(prices[0]);

    cout << "Maximum Profit = "
         << maxProfit(prices, size);

    return 0;
}