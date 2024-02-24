#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n,no;
    cin>>n;
    int lar=INT_MIN;
    for(int i=1;i<=n;i++) {
        cin>>no;
        if(no>lar) {
            lar=no;
        }
    }
    cout<<"Largets Number="<<lar;
    return 0;
}