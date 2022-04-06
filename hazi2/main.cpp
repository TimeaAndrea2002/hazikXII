#include <iostream>

using namespace std;

int main()
{
    int n, k, a, c, d=0, sz1, sz2=0;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        cout << "a=";
        cin >> a;
        sz1=0;
        while(a>0){
        c=a%10;
        a=a/10;
        d=d*10+c;
        sz1++;
        }
    if(sz1>k){
        sz2++;
        }
    }
    cout << sz2;
    return 0;
}
