#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
  string str;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> str;
      if (str.length () > 10)
      {
    	  cout << str.front () << str.length () - 2 << str.back ();
    	  cout << "\n";
      }
      else
	  {
    	  cout << str;
    	  cout << "\n";
	  }
    }
  return 0;
}
