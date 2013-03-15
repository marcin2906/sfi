#include <iostream>

int main(int argc, char** argv)
{
for(int i=1; i<=100; i++)
{

if(i%3==0)
  std::cout<<"fizz";
else std::cout<<"\n"<<i<<"\n";

if(i%5==0)
  std::cout<<"buzz";

else
std::cout<<"\n"<<i<<"\n";


}

return 0;
}
