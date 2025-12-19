 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: _samuel_reyes_
 * Date: _______12/_18_/_2025__


// <iostream> is a standard library in c++ lenguage that lets us use input/output objects
#include <iostream>
using namespace std;

//its the main entry point of a program in c++ the area where our code will be compiled 
int main() {
    //declaring my variables
    double weight; // we use double or float as the type of variable 
    double height; //when working with decimals.
    double bmi; // in this case i used double because its more precise than float and we take weigth serious  here.

    // we use cout as an output object (asking the user to give us information.)
    cout << "Enter your weight in kg: ";
    // cin would be the input object (it will allow the user to type in information)
    cin >> weight;

    cout << "Enter your height in m(meters): ";
    cin >> height;

    // Calculate BMI (once we retrieve all the information from the user the program will use the inputs and output the result.)
    bmi = weight / (height * height);

    // Display result
    cout << "Your BMI is: " << bmi << endl;

    return 0;

}
