#include <iostream>
using namespace std;

int main(){
    float InK = -6.45;
    int r;
    int t;
    cin >> r;
    cin >> t;
    float Gibbs;

    cout << "ΔG° = -" << (-r) * (t + 273.15) * InK << endl;

    return 0;
}

