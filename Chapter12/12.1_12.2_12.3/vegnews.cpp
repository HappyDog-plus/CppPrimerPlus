#include <iostream>
using std::cout;
#include  "stringbad.h"

void callme1(StringBad &); 
void callme2(StringBad);
// BUG: pass value to function, after that function terminate, the object release the same storage address of str.
// BUG: assign existing object to a new object will automatically call copy constructor.
int main()
{
    using std::endl;
    {
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach leaves bowl for dollars");
        cout << "headline1" << headline1 << endl;
        cout << "headline2" << headline2 << endl;
        cout << "sports" << sports << endl;
        callme1(headline1);
        cout << "headline1" << headline1 << endl;
        callme2(headline2);
        cout << "headline2" << headline2 << endl;
        cout << endl;
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
    }
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "string passed by referrence: \n";
    cout << "\"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
    cout << "string passed by value: \n";
    cout << "\"" << sb << "\"\n";
}