#include <bits/stdc++.h>
using namespace std;
#define incr_loop(a, b) for (int i = a; i <= b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
typedef long long ll;
#define in(x) cin >> x;
#define out(x) cout << x;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
void solution()
{
    int i, j, n, m,c=0;
    in(n);
    incr_loop(1,n)
    {
        int r = n % i;
        if (r==0)
        {
            c++;
        }
    }
    out(c);
    line;
    incr_loop(1, n)
    {
        int r = n % i;
        if (r == 0)
        {
            out(i);
            out(" ");
        }
    }
}
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solution();

    return 0;
}
