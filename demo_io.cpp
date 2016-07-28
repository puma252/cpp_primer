#include <stdio.h>
#include <iostream>
using namespace std;

void get_param(const string name, string &value)
{

    cout<<name << ":"<<endl;
    getline(cin, value);
}

//getline() not ignore the first \n like cin
void test()
{
    string id, name, addr;
    cout<<"id:"<<endl;
    cin>>id;
    cout<<"name"<<endl;
    cin>>name;
    getchar();
    cout<<"addr";
    getline(cin, addr);
}

int main()
{

    string id, name, addr;

    get_param("id", id);
    get_param("name", name);
    get_param("addr", addr);



    cout <<"\nid " << id << " name "<<name<<" addr " << addr<<endl;
    return 0;
}
