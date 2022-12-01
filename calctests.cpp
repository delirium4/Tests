#include <iostream>
#include <cassert>

using namespace std;

class Calculator
{
public:
    int Add(int a, int b)
    {
        return a + b;
    }
};

class CalculatorTests
{
public:
    void TestAllCases() {
        TestCaseAdd();
        TestCaseMinus();
    }
    void TestCaseAdd()
    {
        Calculator* calc = new Calculator();
        int res;
        res = calc->Add(0, 0);
        assert(0 == res && "0+0 fails");
        res = calc->Add(-1, 1);
        assert(0 == res && "-1+1 fails");
        res = calc->Add(1, -1);
        assert(0 == res && "+1-1 fails");
        res = calc->Add(-1, 555555);
        assert(555554 == res && "555555-1 fails");
    }
    void TestCaseMinus()
    {
        //
    }
};
