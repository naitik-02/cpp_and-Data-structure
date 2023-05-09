#include <iostream>

using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_rollno(int num)
    {
        roll_no = num;
    }
    void print_rollno()
    {
        cout << "your roll no is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(int num1, int num2)
    {
        maths = num1;
        physics = num2;
    }
    void print_marks()
    {
        cout << "your maths score is " << maths << endl;
        cout << "your physics sscore is " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(int num)
    {
        score = num;
    }
    void print_score()
    {
        cout << "your PT score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_rollno();
        print_marks();
        print_score();
        cout << "your total score is " << maths + physics + score << "/300" << endl;
    }
};

int main()
{
    result naitik;
    naitik.set_rollno(33);
    naitik.set_marks(44, 66);
    naitik.set_score(99);
    naitik.display();

    return 0;
}