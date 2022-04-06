#include <iostream>

using namespace std;

int main()
{
    int n, v1[100], v2[100], osszeg1=0, osszeg2=0;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "v1[" << i << "]=";
        cin >> v1[i];
    }
    for(int i=0; i<n; i++){
        cout << "v2[" << i << "]=";
        cin >> v2[i];
    }
    for(int i=0; i<n; i++){
        if(v1[i]%2==0){
            osszeg1+=v1[i];
        }
    }
    for(int i=0; i<n; i++){
        if(v2[i]%2 != 0){
            osszeg2+=v2[i];
        }
        if(osszeg1<=osszeg2){
            osszeg2-=v2[i];
        }
    }
    cout << osszeg2;
    return 0;
}
