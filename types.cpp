#include <iostream>
using namespace std;

int main(){

    // boolean
    bool boolean = true;
    cout << "The boolean is: " << boolean << endl;


    // integer
    int a = 100;
    int b = 20;
    cout << "The sum of both numbers is: " << a + b << endl;

    // float
    float c = 10.3;
    float d = 19.9;
    cout << "The sum of both numbers is: " << c + d << endl;

    // characters
    char e = 'c';
    char f = 'a';
    char g = 't';
    cout << "the character of g is: " << g << endl;

    // strings
    string sentence = "i love to code";
    cout << "Dan said: " << sentence << endl;

    // operators
    int h = 35;
    int i = 9;
    cout << "the sum is " << h + i << endl;
    cout << "the multiple is " << h * i << endl;
    cout << "h divided by i is " << h/i << "." << endl;
    cout << h%i << " is the remainder" << endl;

    // compound assignment operators
    int j = 35;
    j += 10; // compound addition
    j -= 5; // compound subtraction
    j /= 8; // compound division
    cout << "the final value is " << j << endl;

    // increment / decrement
    int k = 35;
    int l = 10;
    k++; // post increment
    ++k; // pre increment
    --l; // pre decrement
    l--; // post decrement
    cout << "the final value of k is " << k << endl;
    cout << "the final value of l is " << l << endl;

    // input
    int age;
    string name;
    cin >> name; // alows user to input name
    cin >> age; // allows user to input age
    cout << name << " is " << age << " years old" << endl;

    return 0;
}


