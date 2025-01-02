#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define N 1000000007
// Function to check if placing a queen at (x, y) is safe
bool issafe(ll v[][100], ll x, ll y, ll n) {
    // Check column for any queen
    for (ll r = 0; r < x; r++) {          
        if (v[r][y] == 1) {
            return false;
        }
    }

    // Check upper-left diagonal
    ll ro = x, co = y;
    while (ro >= 0 && co >= 0) {
        if (v[ro][co] == 1) {
            return false;
        }
        ro--;
        co--;
    }

    // Check upper-right diagonal
    ro = x, co = y;
    while (ro >= 0 && co < n) {
        if (v[ro][co] == 1) {
            return false;
        }
        ro--;
        co++;
    }

    return true;
}

// Function to solve the N-Queens problem
bool nqueen(ll v[][100], ll x, ll n) {
    // Base case: if all queens are placed, return true
    if (x >= n) {
        return true;
    }

    // Try placing a queen in each column of the current row
    for (ll c = 0; c < n; c++) {
        if (issafe(v, x, c, n)) {
            v[x][c] = 1; // Place the queen

            // Recursively place the remaining queens
            if (nqueen(v, x + 1, n)) {
                return true;
            }

            v[x][c] = 0; // Backtrack if placing the queen doesn't lead to a solution
        }
    }

    return false; // If no placement is possible, return false
}

int main() {
    ll n;
    cin >> n;

    
    ll v[100][100] = {0};

    if (nqueen(v, 0, n)) {
        // Print the solution
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
