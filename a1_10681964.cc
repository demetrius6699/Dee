#include <iostream>
using namespace std;

int main() 
{
  int n, i;
  bool Prime = true;
  
  cout<< "Please enter a positive number: ";
  cin  >> n;
  
  for(i = 2; i<= n / 2; ++i)
  {
  	if(n % i == 0)
  	{
  		Prime = false;
  		break;
  	}
  }	
  if (Prime)
  	cout<< "It is a prime number";
  else
  	cout<< "It is not a prime number";
	return 0;
}
