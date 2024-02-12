class Solution {
public:
    void sieve(int n,vector<int> &primes) {
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i <n; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
    }

    int countPrimes(int n) {
        if (n <= 2) return 0; 

        int cnt = 0;
        int segSize = floor(sqrt(n)); 

        vector<int> primes;
        sieve(segSize+1,primes);

        for (int low = 2; low < n; low += segSize) {
            int high = min(n - 1, low + segSize - 1);

            vector<bool> segPrime(high - low + 1, true);

            for (int p : primes) {
                if (p * p > high) break;
                int start = max(p * p, (low + p - 1) / p * p);
                for (int j = start; j <= high; j += p) {
                    segPrime[j - low] = false;
                }
            }

            for (int i = low; i <= high; ++i) {
                if (segPrime[i - low]) {
                    ++cnt;
                }
            }
        }

        return cnt;
    }
};
