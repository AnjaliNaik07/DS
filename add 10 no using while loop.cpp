#include <iostream>
using namespace std;
int main()
{
    int howmany;
    int i=0;
    cout <<"How many integers you want to add,just enter the number.\n";
    cin >> howmany;

    while (i < howmany)
    {
          int sum = 0;
          sum = sum +i;
          i++;

          cout << sum << endl;
          }
        system ("pause");  
return 0;

}
