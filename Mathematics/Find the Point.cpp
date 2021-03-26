#include <iostream>
using namespace std;

int main(){
    
    int n = 0;
    int px = 0, py = 0, qx = 0, qy = 0;
    cin >> n;
    while(n--){
        cin >> px >> py >> qx >> qy;
        cout << 2*qx - px << " " << 2*qy - py << endl;
        
    }
    return 0;
}
