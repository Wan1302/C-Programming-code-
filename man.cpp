// #include <iostream>
// using namespace std;

// int main() {
//     int n ;
//     cin >> n;
//     if (n > 0) {
//         cout << "S = " << (1 + n)*n/2;
//     }
//     else {
//         cout << "Ban nhap so khong nguyen duong";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << "  " ;
        }

    }
return 0;
}