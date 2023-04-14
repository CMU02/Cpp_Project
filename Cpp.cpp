#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
  int Result = num1 + num2;
  return Result;
}
void Question(void)
{
  cout<<"You Choice is Two number : "<<endl;
}

int main()
{
  int num1, num2 = 0;
  int result = 0;

  Question();
  cin>>num1>>num2;

  result = Add(num1, num2);

  cout<<result<<endl;
  
  return 0;
}