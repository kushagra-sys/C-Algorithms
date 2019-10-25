/*
You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.

You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.

For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.

Input format
Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.

Output format
The output consists of a single integer, the maximum possible revenue you can earn from selling your app.

Sample Input 1
4
30
20
53
14

Sample Output 1
60

https://www.codechef.com/ZCOPRAC/problems/ZCO14003#
*/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define lld unsigned long long
using namespace std;
int main() {
    lld N, k;
    int price, totalr, mostr = 0;
    cin >> N;
    k = N;
    vector<lld> prices;
    while (k > 0){
        cin >> price;
        prices.push_back(price);
        k--;
    }
    sort(prices.begin(), prices.end());
    for(int k = 0; k < N; k++){
        int price = prices[k];
        totalr = price * (N - k);
        if (totalr > mostr)
            mostr = totalr;
    }
    cout << mostr;
    return 0;
}
