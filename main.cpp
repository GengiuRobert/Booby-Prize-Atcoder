#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(), v.end());
    cout<<v[n-2].second;
    return 0;
}

