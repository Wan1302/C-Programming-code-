
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

// #include <iostream>
// using namespace std;

// int main() {
//     for ( int i = 1; i <= 50; i++) {
//         if (i % 2 == 1) {
//             if (i == 3 || i == 9 || i ==31) {
//                 continue;
//             } 
//             cout << i << " ";
//         }
//     }
//     return 0;
// }
//Viết chương trình nhập vào số nguyên dương n. Tính tổng:S = 1/2 + 1/4 + ... 1/(2n)
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     double S = 0 ;
//     cout << "Nhap n de tinh S = 1/2 + 1/4 + ... 1/(2n) , n =  " ;
//     cin >> n;
//     for (double i = 1; i <= n; i = i + 1) {
//         S = S + 1/(2*i);
//     }
//     cout << "Tong S = " << S;
//     return 0;
// }

//2. Viết chương trình nhập vào số nguyên dương n. Tính tổng: S= 1 +
//1.2 + . . . . + 1.2.3….n
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long long S = 1,T = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         S = S*i;
//         T = T + S;
//     }
//     cout << T;
//     return 0;

// }

//3. Viết chương trình liệt kê tất cả các số nguyên tố nhỏ hơn giá trị N nhập từ bàn phím (N < 100).

// #include <iostream>
// #include <math.h>
// using namespace std;
// int songuyento(int n) {
//     for (int i = 2; i <= sqrt(n) ; i++) {
//             if (n % i == 0) return 0;
            
//     }
//     return 1;
// }
// int main() {
//     int N, n;
//     cin >> N;
//     for (n = 2; n <= N; n++) {
//         if (songuyento(n) == 1) cout << n << " ";        
//     }
//     return 0;
// }
// //2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

//4. Viết chương trình tính tổng các chữ số trong 1 số Ví dụ: số 1234 có tổng S = 1 + 2 + 3 + 4 = 10
// #include <iostream>
// using namespace std;

// int main() {
//     long long n;
//     int S = 0, i = 0;
//     cin >> n;
//     while (n > 0) {
//         i = n % 10;
//         n = n /10;
//         S = S + i;
//     }
//     cout << S;
//     return 0;
// }

//5. Tìm ước số chung lớn nhất của 2 số nguyên dương a và b
// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cin >> a >> b;
//     if (a > b) {
//         for (int i = a; i >= 1; i--) {
//             if ((a % i==0) && (b % i==0)) {
//                 cout << "UCLN la: " << i;
//                 break;
//             }
//         }
//     }
//     else {
//         for (int i = b; i >= 1; i--) {
//             if ((a % i==0) && (b % i==0)) {
//                 cout << "UCLN la: " << i;
//                 break;
//     }
// }

//     }
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <iomanip>
// using namespace std;


// int main(){
//     double a,b,c,d;
//     cin >> a >> b >> c;
//     d = b*b - 4*a*c;
//     if (a == 0) {
//         if (b == 0) {
//             if (c == 0) cout << "Counless solutions";
//             else cout << "No solution";
//         }
//         else  cout << fixed << setprecision(4) << -c/b;
//     }
//     else {
//         if (d >= 0) {
//             if (d > 0) {
//                 cout << fixed << setprecision(4) << (-b + sqrt(d))/(2*a) << endl;
//                 cout << fixed << setprecision(4) << (-b - sqrt(d))/(2*a) ;
//             }
//             else cout <<  fixed << setprecision(4) << (-b)/(2*a) ;
//         }
//         else {
//             cout << fixed << setprecision(4) << (-b)/(2*a) << sqrt(-d)/(2*a) << "*i" << endl;
//             cout << fixed << setprecision(4) << (-b)/(2*a) << -sqrt(-d)/(2*a) << "*i";
//         }
        
//     }
    
    
// }

// //CHUYEN CHUOI NHI PHAN SANG SO HE THAP PHAN
// #include <iostream>
// using namespace std;
// int convertBinaryToDecimal(string n)
// {
//    string one = "1";
//    int a = 0, b = 1;
//    for (int i = 0; i < n.length() ; i++) {
//       string m(n,i,1);
//       if (m.compare(one) == 0) {
//          for (int j = 1; j <= n.length()-i-1; j++) {
//             b = b*2;
//          }
//          a = a + b;
//          b = 1;
//       }
//    }
//    return a;
// }
// int main()
// {
//     string n;
//     cin >> n;
//     cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";
//     return 0;
// }