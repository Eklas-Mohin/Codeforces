#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <utility>
#include <functional>
#include <limits>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <regex>
#include <concepts>
#include <ranges>
#include <type_traits>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <cfloat>

#define MAX_SIZE 1000005
#define MOD 1000000007
#define INF INT_MAX
#define EPS 1e-9
#define PI acos(-1)

using namespace std;

int minBacteria(int n) {
    int res = 0;

    while (n > 0) {
        res += n % 2;
        n = n / 2;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;

    cin >> n;

    cout << minBacteria(n) << endl;

    return 0;
}
