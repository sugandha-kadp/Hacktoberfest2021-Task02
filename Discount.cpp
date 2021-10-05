#include <bits/stdc++.h>
using namespace std;

int main()
{

 float pay,discount;

 cout << "Enter Payment amount : ";
 cin >> pay;

    if (pay > 10000)
    {
      discount=pay*25/100;
    }

    else if (pay > 5000)
    {
      discount=pay*15/100;
    }

    else if (pay > 3000)
    {
      discount=pay*10/100;
    }

    else
    discount= 0;

 cout << "Discount  is -> " << pay << endl;

}
