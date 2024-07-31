----------------------- Code----------------------

#include <iostream>
using namespace std;
 
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
 
    long long result = (A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100;
   
    if (result < 10) {
        cout << '0';
    }
    cout << result << endl;
 
    return 0;
}



---------------------------- test case failed ------------------------------

// #include <iostream>

// using namespace std;

// #define longint long long int
// int main() {
//     int product=1;
//     int value;
//     int twodigit;
//     for(int i=0 ; i<4 ; i++){
//         cin>>value;
//         product*=value;
//         twodigit=product%100;
//     }
//     cout<<twodigit;
// }
