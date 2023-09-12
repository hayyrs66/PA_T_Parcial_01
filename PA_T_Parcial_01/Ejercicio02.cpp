#include "Ejercicio02.h"
#include <algorithm>
#include <iomanip>
#include <iostream>


using namespace std;

int Ejercicio02::rob(int houses[], int n)
{
    if (n == 0) return 0;
    if (n == 1) return houses[0];

    int* dp = (int*)malloc(sizeof(int) * n);

    dp[0] = houses[0];
    dp[1] = max(houses[0], houses[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + houses[i]);
    }

    return dp[n - 1];
	
}


