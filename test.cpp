#include<iostream>

using namespace std;
using std::endl;

int main() {
    cout << "Hello World" << endl;
    int myWorld = 1;
    char cValue1 = 77;
    char cValue2 = 97;
    short sValue = 500;
    int iValue = 12345;
    float fValue = 0.8 + 9.1;
    -- iValue;
    int x = fValue;
    int average = (myWorld + iValue + x) / 3;
    float fAverage = average;
    cout << myWorld << cValue1 << cValue2 << " Short value: " << sValue << " And my integer is: " << iValue << endl;
    cout << fValue << endl;
    cout << iValue << endl;
    cout << x << endl;
    cout << fAverage << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    float fPI = 3.14;
    size_t floatSizeInBytes = sizeof(fPI);
    cout << floatSizeInBytes << endl;
    int i = 1;
    
   
   return 0;

}