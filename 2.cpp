#include <iostream>
using namespace std;

const  int PROVINCE = 3;
const int WEEK = 7;

int main()
{
    int temperature[PROVINCE][WEEK];

    cout << "Enter all temperature for a week of Province A then Province B and then Province C." << endl;

    
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Province" << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "Displaying Values:"<<endl;

   
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "PROVINCE " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}
