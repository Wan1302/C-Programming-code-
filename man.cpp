
//Ví dụ 1: Viết chương trình Nhập một số nguyên dương n (có kiểm tra điều kiện nhập) và tính tổng S=1+2+…+ n

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

//Ví dụ 2: Viết chương trình Liệt kê tất cả các ước số của số nguyên dương n

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << "  " ;
//         }

//     }
// return 0;
// }
 
//Ví dụ 3: Viết chương trình Đếm số lượng chữ số của số nguyên dương n

// #include <iostream>
// using namespace std;

// int main() {
//     int n, i = 0;
//     cin >> n;

//     while (n >= 1) {
//             n = n/10;
//             i++;
//         }
//     cout << i;
//     return 0;
//     }    

//Ví dụ 4: Viết chương trình Kiểm tra số nguyên tố (có dùng break)
// #include <iostream> 
// using namespace std;

// int main() {
//     int n, count = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) count++;
//         if (count > 2) {
//             cout << "Khong la so nguyen to";
//             break;
//         } 
//     }
//     if (count == 2) {
//         cout << "La so nguyen to";
//         }
//     return 0;
//     }

/*Ví dụ 5: Viết chương trình In tất cả các số lẻ nhỏ hơn 50 trừ các số
3,9,31 (có dùng continue)*/

#include <iostream>
using namespace std;

int main() {
    for ( int i = 1; i <= 50; i++) {
        if (i % 2 == 1) {
            if (i == 3 || i == 9 || i ==31) {
                continue;
            } 
            cout << i << " ";
        }
    }
    return 0;
}


