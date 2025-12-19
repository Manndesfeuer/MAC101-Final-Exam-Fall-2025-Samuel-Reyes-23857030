
 //* CS101 Final Exam - File 1: sort_array.cpp
 // The Logic Test: Sorting an Array
//
// Student Name: __Samuel Reyes_____
// * Date: _12 18 2025

#include <iostream>
using namespace std;

int main()
{
    //array provided by prof.clearly unordered as expected ;]
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // we are displaying to show that the array is unorganized
    
    cout << "Array before sorting:" << endl;
    //using a for loop we initialize a var "i" equal to cero because the array's start at 0 
    //than we will state the condition which is for i less than 20;
    // increase (i++) 1 by 1 untill i greater  than 20 but not equal to 20
    for (int i = 0; i < 20; i++)
    {
        //the loop will be printed untill i reaches 20 units of the array
        // it will print the numbers shown in the unorganized array, the first 20 spaces of it
        cout << numbers[i] << " ";
    }

    // Bubble Sort
    //external loop, this declares the amount of time that the loop will be sorted 
    for (int i = 0; i < 100; i++)
    {
        //internal loop it compares pairs "j & j+1"
        //limited to 99 because the array starts at index 0 so its always 100-1
        for (int j = 0; j < 99; j++)
        {
            //if is the condition saying if no. j are bigger than no. j+1 
            //they are in the wrong order
            if (numbers[j] > numbers[j + 1])
            {
                //than we declare a new temporary var "temp" which will equal numbers[j] if they 
                //meet the condition j > j+1 and save that value temporary
                int temp = numbers[j];
                //than the new numbers[j] will equal numbers[j+1]
                numbers[j] = numbers[j + 1];
                //and j+1 will be the new "temp" this will be repeated 100 times by the external loop
                //and internally organize from 0 to 99
                numbers[j + 1] = temp;
            }
        }
    }

    // Display AFTER sorting
    cout << "\n\nArray after sorting:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}