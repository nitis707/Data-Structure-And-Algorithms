#include <iostream>
using namespace std;

int main()
{
    // int -> 4 byte
    int num = 50;
    cout << "Num: " << num << endl;
    cout << "Sizeof INT Num: " << sizeof(num) << endl;

    // character -> 1byte
    char ch = 'k';
    cout << "Character: " << ch << endl;
    cout << "Size of Character ch: " << sizeof(ch) << endl;

    // float -> 4 byte
    float point = 1.69;
    cout << "Point" << point << endl;
    cout << "Size of FLOAT point: " << sizeof(point) << endl;

    // long -> 4 byte
    long number = 23;
    cout << "Number: " << number << endl;
    cout << "Size of LONG Number: " << sizeof(number) << endl;
    return 0;
}