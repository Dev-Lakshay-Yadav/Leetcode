class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<bool> isPrime(n + 1, true);
        int i = 2, count = 0;

        while (i < n) {
            if (isPrime[i]) {
                count++;
                int j = 2 * i;
                while (j <= n) {
                    isPrime[j] = false;
                    j += i;
                }
            }
            i++;
        }
        return count;
    }
};