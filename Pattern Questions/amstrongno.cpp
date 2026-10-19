#include <iostream>
using namespace std;
    void check_ams_no(int n)
    {
        int number = n;
        int ams_no=0;
        while (number != 0)
        {
            int temp = number % 10;
            ams_no = ams_no + (temp * temp * temp);
            number = number / 10;
        }

        if (n == ams_no)
        {
            cout << "The entered number is an amstrong number" << endl;
        }

        else
        {
            cout << "The entered number is not an amstrong number" << endl;
        }
    }


int main()
{
    check_ams_no(153);
    return 0;
}