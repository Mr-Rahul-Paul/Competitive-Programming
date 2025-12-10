#include <iostream>
#include <vector>

bool is_friend_group(const std::vector<long long>& a, int i, int j) {
    long long m = 2;
    while (true) {
        bool is_group = true;
        for (int k = i; k <= j; k++) {
            if (a[k] % m != a[i] % m) {
                is_group = false;
                break;
            }
        }
        if (is_group) {
            return true;
        }
        m++;
    }
    return false;
}

int find_largest_friend_group(const std::vector<long long>& a) {
    int n = a.size();
    int max_size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (is_friend_group(a, i, j)) {
                max_size = std::max(max_size, j - i + 1);
            }
        }
    }
    return max_size;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        std::vector<long long> a(n);
        for (int j = 0; j < n; j++) {
            std::cin >> a[j];
        }
        std::cout << find_largest_friend_group(a) << std::endl;
    }
    return 0;
}