#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n,  n1=0, n2=0;
    double s1=0, s2=0;
    in >> n;
    int v[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j && v[i][j]>0){
                s1=s1+v[i][j];
                n1++;
            }
        }
    }
    s1=s1/n1;
    out << s1 << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j && v[i][j]>0){
                s2=s2+v[i][j];
                n2++;
            }
        }
    }
    s2=s2/n2;
    out << s2 << endl;
    out << s1-s2;
    return 0;
}
