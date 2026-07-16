class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    long long modPow(long long a, long long b) {
        long long res = 1;
        a %= MOD;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        if (multiplier == 1) {
            for (int &x : nums) x %= MOD;
            return nums;
        }

        long long mx = *max_element(nums.begin(), nums.end());

        using T = pair<long long, int>;
        priority_queue<T, vector<T>, greater<T>> pq;

        for (int i = 0; i < n; i++)
            pq.push({nums[i], i});

        // Simulate until the minimum reaches the initial maximum
        while (k > 0 && pq.top().first < mx) {
            auto [val, idx] = pq.top();
            pq.pop();
            val *= 1LL * multiplier;
            pq.push({val, idx});
            k--;
        }

        vector<pair<long long, int>> order;
        while (!pq.empty()) {
            order.push_back(pq.top());
            pq.pop();
        }

        int full = k / n;
        int extra = k % n;

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            auto [val, idx] = order[i];
            long long cur = val % MOD;
            cur = cur * modPow(multiplier, full + (i < extra)) % MOD;
            ans[idx] = cur;
        }

        return ans;
    }
};