#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin >> n; 
    vector<int>a(n), b(n); 
    int aj = 0, m = 0; 
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(a[i] == 1) aj++; 
    }
    for(int i = 0; i < n; i++){
        cin >> b[i]; 
        if(b[i] == 1) m++; 
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(aj % 2 == 0){
                if(a[i] == 1 && b[i] == 0){
                    swap(a[i], b[i]); 
                    aj--; 
                    m++; 
                }
                else if(a[i] == 0 && b[i] == 1){
                    swap(a[i], b[i]); 
                    aj++; 
                    m--; 
                }
            }
        }
        else{
            if(m % 2 == 0){
                if(a[i] == 0 && b[i] == 1){
                    swap(a[i], b[i]); 
                    m--; 
                    aj++; 
                }
                else if(a[i] == 1 && b[i] == 0){
                    swap(a[i], b[i]); 
                    m++; 
                    aj--; 
                }
            }
        }
    }
    if((aj % 2 == 1) && (m % 2 != 1)) cout << "Ajisai\n"; 
    else if((aj % 2 == 0) && (m % 2 == 1)) cout << "Mai\n"; 
    else cout << "Tie\n"; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}