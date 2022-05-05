#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, c, b=0, a=0;
    bool x=true;
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    while(in >> n){
        b=n;
        c=0;
        while(b>0){
            c=b%10;
            b=b/10;
            if(c%2!=0){
                x=false;
            }
        }
        if(x){
        out << n << " ";
        a=1;
        }
        x=true;
    }
    if(a==0){
        out << "nem letezik";
    }

    return 0;
}
