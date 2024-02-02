#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend
{
private:
    T item;
public:
    ManyFriend(const T & i) : item(i) {}
    template <typename C, typename D> friend void show2(C &, D &);
};

template<typename C, typename D> void show2(C & c, D & d)
{
    cout << c.item << ", " << d.item << endl;
}

int main()
{
    ManyFriend<int> mfi1(10);
    ManyFriend<int> mfi2(20);
    ManyFriend<double> mfdb(10.5);

    cout << "mfi1, mfi2: ";
    show2(mfi1, mfi2);
    cout << "mfdb, mfi2: ";
    show2(mfi2, mfdb);
    return 0;
}