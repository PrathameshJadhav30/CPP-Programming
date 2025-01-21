#include <iostream>
using namespace std;

class candidate
{
public:
    int id;
    string name;
};

int main()
{
    candidate s1;
    s1.id = 201;
    s1.name = "AmitabhBachan";
    cout << s1.id << endl;
    cout << s1.name << endl;
return 0;
}