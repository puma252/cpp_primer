#include <iostream>
using namespace std;
#define PPE_BUILDER(type, name, permission)\
    permission:\
        type m_##name;\
    public:\
    inline void set_##name(type v) {\
        m_##name = v;\
    }\
    inline type get_##name() {\
        return m_##name;\
    }\

class person
{

    PPE_BUILDER(string, name, protected)
    PPE_BUILDER(string, addr, protected)
    PPE_BUILDER(int, age, protected)
};


int main()
{
    person p;
    p.set_name("zftong");
    p.set_addr("qz");
    p.set_age(29);

    cout<<"name: "<<p.get_name()<<"\naddr: "<<p.get_addr()<<"\nage: "<<p.get_age()<<endl;
    return 0;
}
