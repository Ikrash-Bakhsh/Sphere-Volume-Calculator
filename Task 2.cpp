#include<iostream>
using namespace std;
#define PI 3.141
int main()

{
	int r;
	float v;
	cout<<"Enter the radius of sphere to calculate voulumn = ";
	cin>>r;
	v=4.0/3*PI*r*r*r;
	cout<<"Volumn of sphere is = "<<v;
	return 0;
}
