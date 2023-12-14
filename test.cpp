#include<bits/stdc++.h>
using namespace std;
int main() {
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    v.insert(v.begin(), 6);
    for( int i=0; i<5; i++ )
        cout<<v[i];
}