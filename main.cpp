#include <iostream>
#include "chalk.h"
using namespace std;

int main()
{
    chalk ch;
    cout << ch.blue().bold("Hazem").get() << endl;
    cout << ch.green().italic("test").get() << endl;
}
