#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    // array
    int numbers[] ={1, 3, 9, 15, 18};
    cout << "1st index 0 has value: " <<numbers[0] << endl;
    cout << "last index 4 has value: " << numbers[4] << endl;

    // changing value inside of an array
    numbers[4] = 31; // value in index 4 changed to 31
    cout << "last index 4 now has value: " << numbers[4] << endl;

    // character arrays
    char words[5] = {'D', 'A', 'N', 'N', 'Y'};
    cout << "index 4 now has value : " << words[4] << endl;

    // adding values inside an array
    int numbersTwo[5] = {1, 18, 25, 31, 36};
    int new_value = numbersTwo[0] + numbersTwo[2];
    cout << "sum of index values is: " << new_value << endl;

    // inputting a sentence
    char about[140];
    cout << "tell me something" << endl;
    cin.getline(about, 140); // get a 140 letters or less sentence
    cout << about << endl;

    // 2d array
    string aboutAgain[5][2] = { // initialize 5 rows, 2 column string array
        {"Age: ", "29"},
        {"Course: ", "COMP2006"},
        {"Hobby: ", "Sports"},
        {"Location: ", "Barrie"},
        {"Loves: ", "Coding"},
    };

    cout << "age is " << aboutAgain[0][1] << endl;
    cout << "he " << aboutAgain[4][0] << aboutAgain[4][1] << endl;

    return 0;
}