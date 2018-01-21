#include <iostream>

#include <sstream>



using namespace std;



int main()

{

    string str;

    double a, b;

    char op;

    getline(cin, str);

    istringstream stream(str);

    stream >> a;

    while (stream >> op)

    {switch(op) {

            case '+':

                stream >> b;

                a = a+ b;

                break;

            case '-':

                stream >> b;

                a = a- b;

                break;

            case '*':

                stream >> b;

                a = a * b;

                break;

            case '/':

                stream >> b;

                a = a / b;

                break;

            }

        }



    cout << a;

    return 0;



}
