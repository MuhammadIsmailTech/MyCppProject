#include <iostream>
using namespace std;

class Father
{
public:
    int money = 1000;

protected:
    int gold = 50;

private:
    int secret = 999;
};

class Son : public Father
{
public:
    void show()
    {
        cout << "Money: " << money << endl;
        cout << "Gold: " << gold << endl;

        // cout << secret; // ERROR
    }
};

int main()
{
    Son s;

    cout << s.money << endl;

    s.show();

    return 0;
}