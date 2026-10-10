#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Read all bytes from stdin and count 4-byte instructions
    std::istreambuf_iterator<char> it(cin), end;
    size_t total_bytes = 0;
    for (; it != end; ++it) ++total_bytes;
    long long instr_cnt = total_bytes / 4;
    cout << instr_cnt << "\n";
    return 0;
}
