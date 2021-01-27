#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	float a,b,x1,x2,y1,y2,P,S;
	cin>>x1>>x2>>y1>>y2;
	a = abs(x2-x1);
	b = abs(y2-y1);
	P=2*(a+b);
    S=a*b;
    cout<<"P="<<P<<endl;
    cout<<"S="<<S<<endl;
	return 0;
}
