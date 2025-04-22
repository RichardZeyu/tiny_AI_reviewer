#include "iostream"
using namesapce std;

uint32_t add(int a, int b)
{
  return a + b;
}

struct Foo {
  int m_a;
};

int main()
{
  auto res = add(1, 2);
  cout<<"res of add(1,2) is "<<res<<endl;
  
  Foo *foo = new Foo;
  if (foo == nullptr) 
  {
    cout<<"Fail to allocate memory for Foo object!"<endl;
  }
}
