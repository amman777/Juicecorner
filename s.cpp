
#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3;
    int r;
    cout << "Enter the marks of subject 1 ";
    cin >> s1;
    cout << "Enter the marks of subject 2 ";
    cin >> s2;
    cout << "Enter the marks of subject 3 ";
    cin >> s3;
    r = (s1 + s2 + s3) / 3;
    cout << "Your total percentageis" << r << endl;
    if (s1 > 40)
    {
        if (s2 > 40)
        {
            if (s3 > 40)
            {
                if (r > 80)
                {
                    cout << "Grade A" << endl;
                }
                else
                {
                    if (r > 60)
                    {
                        cout << "Grade B" << endl;
                    }
                    else
                    {
                        cout << "Grade C" << endl;
                    }
                }
            }
            else
            {
                cout << "Your are Fail" << endl;
            }
        }
        else
        {
            cout << "Your are Fail" << endl;
        }
    }
    else
    {
        cout << "Your are Fail" << endl;
    }

    return 0;
}