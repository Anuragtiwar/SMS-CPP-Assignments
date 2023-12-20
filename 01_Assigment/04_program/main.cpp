// If the marks obtained by a student in 5 different subjects are input through a keyboard. WAP
// to find out the aggregate marks and percentage marks obtained by the student. Assume that
// the maximum marks for each subject is 50.

#include <iostream>
#include <iomanip>
using namespace std;
// array declreation...

int arrSize = 5;
int MaxMarks = 100;
float aggregateMarks(int arr[5]);
float percentageMarks(int arr[5]);

int main()
{
    int marks[5];
    cout << "Enter 5 subject marks:";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> marks[i];
    }

    cout << "Aggregate Marks is:";
    cout << aggregateMarks(marks) / arrSize;
    cout << endl;

    cout << "Precentage Marks is:";
    cout<<fixed << setprecision(2) << percentageMarks(marks) << "%" << endl;

    return 0;
}

float aggregateMarks(int arr[5])
{
    int sum = 0;
    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float percentageMarks(int arr[5])
{
    return (aggregateMarks(arr) / (MaxMarks * arrSize)) * 100;
}