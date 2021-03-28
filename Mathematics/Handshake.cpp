#include <iostream>
using namespace std;

int main(){

    int t = 0, n = 0, h = 0;
    cin >> t;
    while(t--){
        h = 0;
        cin >> n;
        while(--n){
            h += n;
        }
        cout << h << endl;
    }
    return 0;
}
