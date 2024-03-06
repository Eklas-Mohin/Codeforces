/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, in{}, ans{};
    queue<pair<int, int>>  qp;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        qp.push(make_pair(in, i + 1));
    }
    while (!qp.empty()) {
        pair<int, int> temp;
        temp = qp.front();
        qp.pop();
        temp.first = temp.first - m;
        if (temp.first > 0) {
            qp.push(temp);
        }
        ans = temp.second;
    }
    cout << ans << endl;
    return 0;
}