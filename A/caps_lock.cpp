#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <cstring>
#include <cctype>
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'A' and str[i] <= 'Z') {
            cnt += 1;
        }
    }

    if (cnt == str.length()) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else if ((cnt + 1) == str.length() and str[0] >= 'a') {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0] = str[0] - 32;
    }

    cout << str << endl;

    return 0;
}