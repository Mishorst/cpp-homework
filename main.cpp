#include <iostream>

using namespace std;

int main()
{
    char symbol = 'T';
    cout << symbol << endl;
    
    int number = 100;
    cout << number << endl;
    
    float numberTwo = 10.10;
    cout << numberTwo << endl;
    
    double numberThree = 50.23;
    cout << numberThree << endl;
    
    int numbers[5] = {5, 10, 15, 20, 30};
    
    int sum = numbers[0] + numbers[1] +numbers[2] +numbers[3] +numbers[4];
    int average = sum /5;
    
    cout << "ჯამი ტოლია: " <<  sum << endl;
    cout << "საშუალო არითმეტიკული ტოლია: " << average << endl;
}