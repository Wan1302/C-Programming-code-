#include <iostream>
#include <vector>
#include<math.h>

using namespace std;


int main () {
    string fileName;
    getline(cin,fileName);
    long long a = 0;
    long long tong = 0;
    for (int i = 0; i < fileName.size(); i++) {
        if ((fileName[i] >= '0')&&(fileName[i] <= '9')) 
            a = a*10 + ((long long)fileName[i] - 48);
        if ((fileName[i] == ' ')|| i == (fileName.size()-1)) {
            tong = tong + a;
            a = 0;
        }
    }
    cout << tong;
    return 0;
}