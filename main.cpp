#include "grule-tutorial.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "C++ says: calling GRuleTutorial" << endl;
    std::string str = GRuleTutorial();
    cout << "GRuleTutorial returned: " + str << endl;
    return 0;
}

