#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100], n1=0, n2=0;
    double s1=0, s2=0;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                s1=s1+v[i][j];
                n1++;
            }
        }
    }
    s1=s1/n1;
    cout << s1 << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j){
                s2=s2+v[i][j];
                n2++;
            }
        }
    }
    s2=s2/n2;
    cout << s2 << endl;
    cout << s1-s2;
    return 0;
}
