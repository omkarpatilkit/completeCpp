#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    Hero() { cout << "Default constructor" << endl; }
    Hero(int health, char level)
    {
        Hero();
        this->health = health;
        this->level = level;
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    int getHealth() { return this->health; }

    char getLevel() { return this->level; }

    void printObj()
    {
        cout << "Health is " << health << " Level at \'" << level << "\'" << endl;
    }
};

int main()
{
    Hero a;
    a.setHealth(10);
    a.setLevel('a');
    a.printObj();

    Hero b(20, 'b');
    b.printObj();
    return 0;
}
