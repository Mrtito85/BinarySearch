#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int,string> p;
    p=make_pair(7,"zahid");
    p={4,"Ali"};
    pair<int,string> &p1=p;
    
    p1.first=22;
    cout<<p.first <<" "<< p.second;
    return 0;
}