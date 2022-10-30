//LAU DAI
/*#include <iostream>
using namespace std;

int main()
{
    int value1,value2,w1,w2,maxW;
    cin >> value1 >> w1 >> value2 >> w2 >> maxW;
    if (w1 > w2) {
        if (maxW >= w2 && maxW < w1)
            cout << value2;
        else if (maxW < w2)
            cout << 0;
        else {
            if (maxW < w1 + w2){
                if (value1 > value2)
                    cout << value1;
                else
                    cout << value2;
            }
            else 
                cout << value1 + value2;
        }
    }
    else if (w1 < w2) {
        if (maxW >= w1 && maxW < w2)
            cout << value1;
        else if (maxW < w1)
            cout << 0;
        else {
            if (maxW < w1 + w2) {
                if (value1 > value2)
                    cout << value1;
                else
                    cout << value2;
            }
            else 
                cout << value1 + value2;
    }
}
    else {
        if (maxW >= w1 && maxW < w1 + w2) {
            if (value1 > value2)
                cout << value1;
            else 
                cout << value2;
        }
        else if (maxW < w1)
            cout << 0;
        else 
            cout << value1 + value2;
    }
return 0;
}
*/
//CON GIAP
/*
#include <iostream> 
using namespace std;
int main () {
    int n;
    cin >> n;
    if (n > 0) {
        switch(n%12) {
            case 1: cout << "DAU";
                break;
            case 2: cout << "TUAT";
                break;
            case 3: cout << "HOI";
                break;
            case 4 : cout << "TY'";
                break;
            case 5 : cout << "SUU";
                break;
            case 6 : cout << "DAN";
                break;
            case 7 : cout << "MEO";
                break;
            case 8: cout << "THIN";
                break;
            case 9: cout << "TY.";
                break;
            case 10 : cout << "NGO";
                break;
            case 11 : cout << "MUI";
                break;
            default : cout << "THAN";
        }

    }
    else if (n < 0) {
        switch(abs(n) % 12) {
            case 1: cout << "THAN";
                break;
            case 2: cout << "MUI";
                break;
            case 3: cout << "NGO";
                break;
            case 4 : cout << "TY.";
                break;
            case 5 : cout << "THIN";
                break;
            case 6 : cout << "MEO";
                break;
            case 7 : cout << "DAN";
                break;
            case 8: cout << "SUU";
                break;
            case 9: cout << "TY'";
                break;
            case 10 : cout << "HOI";
                break;
            case 11 : cout << "TUAT";
                break;
            default : cout << "DAU";
        }

    }
    return 0;
}
*/
//TAXI
/*
#include <iostream>
using namespace std;
int main () {
    double a,b,gia;
    bool chieu;
    cin >> a >> chieu >> b;
    if (a < 0 || b <0 )
        cout << "Gia tri khong hop le";
    else {
      if (chieu == 0) {
        if (a >= 0 && a <= 1)
            gia = 10000;
        else if (a>1 && a <= 30) 
            gia = 10000 + (a-1)*13600;
        else 
            gia = 404400 + (a-30)*11000;
    }
      else  {
        if (a > 0 && a <= 1)
            gia = 10000 + (10000*60)/100;
        else if (a>1 && a <= 30) 
            gia = (10000 + (a-1)*13600) + ((10000 + (a-1)*13600)*60)/100;
        else 
            gia = (404400 + (a-30)*11000) + ((404400 + (a-30)*11000)*60)/100;
        if (b > 2)
            gia += (b-2)*20000;
    }
    cout << (int)gia;
    }
    return 0;
}
*/
// CUOC GOI
/*
#include <iostream>
using namespace std;
int main ()
 {
    int min1,min2_10,min11,S,count=0;
    cin >> min1 >> min2_10 >> min11 >> S;
    if (min1 < 1000 || min1 > 10000)
        cout << "Nhap sai";
    if (min2_10 < 1000 || min2_10 > 10000)
        cout << "Nhap sai";
    if (min11 < 1000 ||  min11 > 10000)
        cout << "Nhap sai";
    if (S < 2000 || S > 60000)
        cout << "Nhap sai";
    if (S <= min1)
        cout << 1;
    else {
        S = S-min1;
        if (S < min2_10)
            cout << 1;
        else {
            for (int i=1;i<=9;i++) {
                if (S >= min2_10) {
                    S = S - min2_10;
                    count++;
                }
            }
            if (S == 0 )
                cout << 1 + count;
            else if (S <= min11)
                cout << 1 + count;
            else 
                cout << 10 + (S/min11); 
        }
    }   
    return 0;
 } 
 */
//TONG CAC CHU SO
/*
#include <iostream>
using namespace std;
int main () {
    int n,sum=0,s=0,t;
    cin >> n;
    for (int i=1; i<=4;i++) {
        sum += n%10;
        n /= 10;
    }
    cout << sum ;
    for (int i=1; i<=2;i++) {
        s=s*10 + sum%10;
        sum /= 10;
    } 
    for (int i=1;i<=2;i++) {
        cout << ", ";
        t=s%10;
        cout << t;
        s /= 10;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int UCLN(int m,int n) {
    for (int i = max(m,n); i > 0; --i) {
        if (m %i==0 && n%i==0)
            return i;
    }
}
int main () {
    int a,b,c,d,e,f,tu,mau;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    tu = 3600*d + 60*e + f;
    mau = 3600*a + 60*b + c;
    cout << tu / UCLN(mau,tu) << " " << mau / UCLN(mau,tu);
    return 0;
}
*/

//FIBON
/*
#include <iostream>
using namespace std;
int main () {
    unsigned int n;
    cin >> n;
    if (n==0) 
        cout << 0;
    if (n == 1)
        cout << 1 << " " << 1;
    if (n >= 2) {
        cout <<1 << " ";
        long long fn, f0 = 0 , f1 = 1;
        while (1) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            if (fn > n) break;
            cout << fn << " ";
 
    }
    }
    return 0;
}
*/
//
/*PHAN TICH THANH TONG HAI SO
#include <iostream>
using namespace std;
int main () {
    int n,left,right,count=0,B;
    cin >> n >> left >> right;
    for (int A=left ; A <= right ; A++) {
        B = n - A;
        if (B >= left && B <= right && B >= A)
            count++;
    }
    cout << count++;
    return 0;
}
*/
//DIEN TICH TAM GIAC
/*
#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int a[1000],b[1000],c[1000],n;
    cin >> n;
    for(int i=1 ; i<=n; i++) {
        cin >> a[i]  >> b[i]  >> c[i];
    }
    for (int i=1; i<= n ; i++) {
        if (a[i] < b[i] + c[i] && b[i] < a[i] + c[i] && c[i] < a[i] + b[i]) {
           double s=(a[i] + b[i] + c[i]) / 2.0;
            cout.precision(10);
            cout << sqrt(s*(s-a[i])*(s-b[i])*(s-c[i])) << endl << endl;
        }
        else 
            cout << "NOT TRIANGLE" << endl << endl;

    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main () {
    int n;
    long long factortial =1;
    cin >> n;
    if (n%2==0) {
        for (int i=2; i<=n; i+=2) {
            factorial *= i;
        }
    }
    else  {
        for (int i=1; i<=n;i+=2) {
            factorial *= i;
        }
    }
    cout << (long long)factorial;
    return 0;
}
*/

//
/*CAP SO SINH DOI
#include <iostream>
#include <math.h>
using namespace std;
int songuyento(int x){
    int count=0;
    for (int i=2;i<= sqrt(x);i++) {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main () {
    int n,count=0;
    cin >> n;
    for (int i=3; i<=n;i++) {
        if(songuyento(i) == 1 && songuyento(i+2) == 1 && i < n && i+2 < n){
              cout << i  << ", " << i+2 << endl;
              count++;
        }
    }
    cout << "Tong: " << count <<  " cap so sinh doi < " << n;
    return 0;
}
*/
 //BANG CUU CHUONG 
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    char c;
    int a;
    do {
        cin >> c;
        cout << "MENU" << endl;
        cout << "t) Tao ra bang cuu chuong" << endl << "d) Thoat chuong trinh" <<endl;
        cout << "Moi ban lua chon: " << endl;
        if (c=='d') {
          cout << "Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
          break;  
        }
        else if(c == 't') {
            cin >> a;
            cout << "Moi ban nhap 1 so: " << endl;
            while(a < 1 || a > 9) {
                    if(a>=1 && a<=9) break;
                    cout << "Moi ban nhap 1 so tu 1 den 9: " << endl;
                    cin >> a;
                }
            cout << "BANG CUU CHUONG: " << a << endl;
            for (int i=1; i<=a;i++){
                for(int j=1;j<=10;j++) {
                    cout << setw(3) << i*j ;
                }
                cout << endl;
            }
        }
        else 
            cout << "Lua chon khong hop le" << endl;
    }
    while(1);
    return 0;
}
*/
//Quang
#include <iostream> 
#include <math.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    if  (n == 1)
        cout << "Khong phai so nguyen to";
    else if (n == 2 || n == 3) {
        cout << "La so nguyen to";
    }
    else {
        for (int i = 2; i <= sqrt(n) ; i++) {
            if (n % i != 0) 
                {cout << "La so nguyen to";
                break;}
        }
    }
    return 0;
}

//Man



