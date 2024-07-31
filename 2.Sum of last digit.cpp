------------------------------ Code -------------------------

  #include <iostream>

using namespace std;

#define longint long long int
int main () {
    longint a,b;
    cin>>a>>b;
    longint sum = ((a%10)+(b%10));
    cout<<sum;
}
