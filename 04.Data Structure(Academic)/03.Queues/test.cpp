#include <iostream>
#include <vector>
#include <unordered_map>

const int MOD = 1000000007;
const int MAX_K = 100000;

// Function to compute the Pisano period for a given k
std::vector<int> computePisanoPeriod(int k) {
    std::vector<int> pisano;
    pisano.push_back(0);
    pisano.push_back(1);
    for (int i = 2; ; ++i) {
        pisano.push_back((pisano[i-1] + pisano[i-2]) % k);
        if (pisano[i] == 1 && pisano[i-1] == 0) {
            pisano.pop_back();
            pisano.pop_back();
            break;
        }
    }
    return pisano;
}


// Precompute Pisano periods for all k up to MAX_K
std::vector<std::vector<int>> precomputePisanoPeriods() {
    std::vector<std::vector<int>> pisanoPeriods(MAX_K + 1);
    for (int k = 1; k <= MAX_K; ++k) {
        pisanoPeriods[k] = computePisanoPeriod(k);
    }
    return pisanoPeriods;
}


// Function to find the index of the n-th Fibonacci number divisible by k
int findIndex(long long n, int k, const std::vector<std::vector<int>>& pisanoPeriods) {
    const std::vector<int>& pisano = pisanoPeriods[k];
    int period = pisano.size();
    std::unordered_map<int, int> fibIndex;
    int count = 0;
    for (int i = 0; i < period; ++i) {
        if (pisano[i] == 0) {
            fibIndex[++count] = i + 1;
        }
    }
    int result = fibIndex[n % count] + (n / count) * period;
    return result % MOD;
}


int main() {
    std::vector<std::vector<int>> pisanoPeriods = precomputePisanoPeriods();
    int t;
    std::cin >> t;
    while (t--) {
        long long n;
        int k;
        std::cin >> n >> k;
        std::cout << findIndex(n, k, pisanoPeriods) << std::endl;
    }
    return 0;
}

