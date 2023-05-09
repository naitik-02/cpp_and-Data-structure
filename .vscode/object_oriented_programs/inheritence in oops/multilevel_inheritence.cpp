#include <iostream>
using namespace std;

class students
{
protected:
    int roll_no;

public:
    void set_rollno(int);
    void get_rollno();
};

void students ::set_rollno(int r)
{
    roll_no = r;
}
void students ::get_rollno()
{
    cout << "the roll no is " << roll_no << endl;
}

class exam : public students
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int, int);
    void get_marks();
};

void exam ::set_marks(int i, int j)
{
    maths = i;
    physics = j;
}

void exam ::get_marks()
{
    cout << "the marks in maths is " << maths << endl;
    cout << "the marks in physics is " << physics << endl;
}

class result : public exam
{
    int percentage;

public:
    void display_result()
    {
        get_rollno();
        get_marks();
        cout << "your result is " << ((maths + physics) / 2) << "%" << endl;
    }
};
int main()
{
    result harry;
    harry.set_rollno(3);
    harry.set_marks(54, 66);
    harry.display_result();

    return 0;
}