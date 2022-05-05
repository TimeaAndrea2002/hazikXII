#include <iostream>

using namespace std;

int main()
{
    int n, x=1, p=1, S=0;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        x=x*p;
        if(p%2==0){
            S=S-x;
        }else{
            S=S+x;
        }
        p++;
    }
    cout << S;
    return 0;
}
