#include <iostream>

using std::cin;
using std::cout;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        char* x = ['a', 'b', 'c'];
    }
    cout<<"Hi, please enter two numbers: ";
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    cout << "I find it interesting that you have " << n1 << " eyeballs and " << n2 << " fingernails in your sock drawer.\n";
    return 0;
}
