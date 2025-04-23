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
  
  // Make sure you have added:
  // #include <memory>

  auto foo = std::make_unique<Foo>();
  if (!foo) 
  {
    cout<<"Fail to allocate memory for Foo object!"<<endl;
  }
  // No need for delete – memory is freed automatically
}
