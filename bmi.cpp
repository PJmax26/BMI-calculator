#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    string command;
    float weight;
    float height;
    float BMI;
    char start_game;

    cout << "Welcome to the BMI calculator program" << endl;
    cout << "C++ Program to calculate the weight of individuals" << endl;

    cout << "Would you like to start the test? (y or n): ";
    cin >> start_game;

    do{
        cout << "Enyter your weight in kilograms: ";
        cin >> weight;

        cout << "Enyter your height in meters: ";
        cin >> height;

        BMI = weight / (height * height);
        cout << "BMI is " << BMI << endl;

        if (BMI < 18.5)
        {
            cout << "Underweight" << endl;
        }
        else if (BMI >= 18.5 && BMI <= 24.9)
        {
            cout << "Normal weight" << endl;
        }
        else if (BMI >= 25.0 && BMI <= 29.9)
        {
            cout << "Overweight" << endl;
        }
        else if (BMI >= 30.0)
        {
            cout << "Obese" << endl;
        }

        cout << "Would you like to take take the test again: (y or n): ";
        cin >> start_game;
    }while (start_game == 'y' || start_game == 'Y');

    return 0;
}