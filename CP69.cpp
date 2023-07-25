/*

    Created by: Parth Arora

    Delhi India

    Jai shree Ram

*/

#include <iostream>

using namespace std;



#include <bits/stdc++.h>



using ll = long long;

#define inf_pos INT_MAX;

#define inf_neg INT_MIN;

#define mod int(1e9 + 7)

#define pub push_back

#define pob pop_back

#define sz(x) (int)x.size()

#define all(x) (x).begin(), (x).end()

#define loop(i, m, n) for (int i = m; i < n; i++)

#define rloop(i, m, n) for (int i = m - 1; i >= n; --i)

#define loop_auto(mp) for (auto &it : mp)



/* TYPEDEF */



typedef pair<ll, ll> pll;

typedef pair<int, int> pii;

typedef vector<int> vi;

typedef vector<vector<int>> vvi;



const ll INF = ll(1e17);



/*--------------------------------CALCULATE POWER HERE------------------------*/

ll fastpow(ll a, ll n, ll md = mod)

{

    ll r = 1;

    while (n)

    {

        if (n & 1)

            r = r * a % md;

        a = a * a % md;

        n >>= 1;

    }

    return r;

}



/*--------------------------------CALCULATE LCM HERE------------------------*/

ll lcm(ll a, ll b)

{

    return (a * b) / __gcd(a, b);

}



/*--------------------------------IS POWER 2------------------------*/

bool ispow2(ll n)

{

    return !(n & (n - 1));

}



/*-------------------isprime-----------------*/



bool isprime(ll n)

{

    if (n <= 1)

        return false;

    for (ll i = 2; i * i <= n; i++)

    {

        if (n % i == 0)

        {

            return false;

        }

    }

    return true;

}



/*---------------------SEGMENT TREE IMPLEMENTATION(RANGE MIN QUERY)----------------------*/



void buildtree(int s, int e, int idx, vector<int> &arr, vector<int> &tree)

{

    if (s == e)

    {

        tree[idx] = arr[s];

        return;

    }

    int mid = (s + e) / 2;

    buildtree(s, mid, 2 * idx, arr, tree);

    buildtree(mid + 1, e, 2 * idx + 1, arr, tree);

    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);

    return;

}



int query(int ss, int se, int qs, int qe, int idx, vector<int> &tree)

{

    if (ss >= qs && se <= qe)

    {

        return tree[idx];

    }



    if (se < qs || qe < ss)

    {

        return INT_MAX;

    }



    int mid = (ss + se) / 2;

    int la = query(ss, mid, qs, qe, 2 * idx, tree);

    int ra = query(mid + 1, se, qs, qe, 2 * idx + 1, tree);

    return min(la, ra);

}



void update(int ss, int se, int i, int idx, int increment, vector<int> &tree)

{

    if (i < ss || i > se)

        return;

    if (ss == se)

    {

        tree[idx] += increment;

        return;

    }

    int mid = (ss + se) / 2;

    update(ss, mid, i, 2 * idx, increment, tree);

    update(mid + 1, se, i, 2 * idx + 1, increment, tree);

    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);

    return;

}



/*----------------------------SEGMENT TREE ENDS HERE-------------------------------*/



/*...............................Sieve of Eratosthenes algorithm................*/



// vector<ll> Prime(100000001, 1);



// void sieve()

// {

//     for (ll i = 2; i <= 10000000; i++)

//     {

//         if (Prime[i] == 0)

//             continue;

//         // prime.push_back(i);

//         for (ll j = i * i; j < 10000001; j += i)

//         {

//             Prime[j] = 0;

//             // factors[j].pb(i);

//         }

//     }

// }



/*-----------------DISJOINT SET UNION-------------------------------------*/

class DSU

{

public:

    vector<int> parent;

    vector<int> rank;

    int cc;

    DSU(int n)



    {

        parent.resize(n);

        rank.resize(n);

        cc = n;

        for (int i = 0; i < n; i++)

        {

            parent[i] = i;

            rank[i] = 1;

        }

    }

    int get(int x)

    {

        return parent[x] = parent[x] == x ? x : get(parent[x]);

    }

    void merge(int l, int r)

    {

        l = get(l);

        r = get(r);

        if (l == r)

            return;

        if (rank[l] == rank[r])

            rank[l]++;

        if (rank[l] > rank[r])

            parent[r] = l;

        else

            parent[l] = r;

        cc--;

        return;

    }

};



/* ........................................................... YOUR CODE STARTS HERE(>‿◠)✌..................................................................... */



void solve()

{

    ll n;

    cin >> n;

    vector<ll> a(n);

    for(auto &x : a) cin >> x;

    ll maxi = *max_element(all(a));

    ll cnt = count(all(a),maxi);

    if(cnt == sz(a)) {

        cout << 0 << endl;

        return;

    }

    else{

        if(maxi == a[sz(a) - 1]) cout << 1 << endl;

        else cout << 2 << endl;

    }

}



signed main()

{

    ios::sync_with_stdio(0);

    cin.tie(0);

    int t;

    cin >> t;

    while (t--)

    {

        solve();

    }

}
