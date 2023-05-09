#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        rating = r;
        title = s;
    }
   virtual void display() {}
};

class CWHvideo : public CWH
{
protected:
    int videolength;

public:
    CWHvideo(string s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "this video rating is " << rating << " out of 5 " << endl;
        cout << "this video length is " << videolength << endl;
    }
};

class CWHwords : public CWH
{
    int words;

public:
    CWHwords(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is the amazing text tutorial with title " << title << endl;
        cout << "ratings of this text tutorial is " << rating << "out of 5 " << endl;
        cout << "the total no of words in this text is " << words << endl;
    }
};
int main()
{
    string title;
    float rating;
    int words, videolength;
    // code for harry video ;

    title = "hero is zero ";
    rating = 3;
    videolength = 66;
    CWHvideo djvideo(title, rating, videolength);

    //  for code with harry text ;

    title = "fuck u bitch ";
    rating = 2;
    words = 555;
    CWHwords djwords(title, rating, words);

    CWH *puts[2];

    puts[0] = &djvideo;
    puts[1] = &djwords;

    puts[0]->display();
    puts[1]->display();

    return 0;
}