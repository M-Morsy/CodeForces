#include <iostream>

using namespace std;
// Problem A
int main()
{
    string x_str, h_str, m_str;
    string temp;
    getline (cin, x_str) ;
    getline(cin, temp);

    m_str = temp.substr(0, temp.find(" "));
    h_str = temp.substr (temp.find(" ") +1, temp.length() - 1);
//    cout << x << endl;
//    cout << m << endl;
//    cout << h << endl ;
    int x = stoi (x_str);
    int h = stoi (h_str);
    int m = stoi (m_str);
    int number =0;
//    cout << (x_str) ;
//    cout << to_string(x) +"lol" ;
    if (m_str[0] == '7' || m_str [1] == '7' || h_str [0] == '7' || h_str [1] == '7')
    {
        number = 0 ;
    }
    else
    {
        for (int i =0 ; i < 12 ; i++)
        {
            int counter = 0;
            for (int j = 0 ; j < 60 ; j++)
            {
                if (m_str[0] == '7' || m_str [1] == '7' || h_str [0] == '7' || h_str [1] == '7'){number = counter2 * x ;}
                int counter2 = 0;
                m -= x ;
                m_str = to_string (m);
                if ( m > 0)
                {
                    if (m_str[0] == '7' || m_str [1] == '7'){return number = counter2 * x ;}
                    counter2 ++ ;
                }
                else if (m <0)
                {
                    h -= 1 ;
                    m = 60 - m ;
                    if (m_str[0] == '7' || m_str [1] == '7' || h_str [0] == '7' || h_str [1] == '7'){number = counter2 * x ;}
                }
           }
           counter ++ ;
           if (h < 0) { h = 12 - counter;}

        }
    }


    cout << number << endl;
    return 0;
}
