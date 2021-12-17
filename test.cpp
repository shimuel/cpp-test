#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& xyz : msg)
    {
        //cout << "Enoch !";
        cout << xyz << " ";
    }
    cout << endl;
}


///build (compile) -> ctrl + shift+ b
///run -> from the terminal type "./test "
///comments ctrl + k + c
///uncomment ctrl + k + u
