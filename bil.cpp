#include<iostream>
#include<cmath>
using namespace std;

float zl, gr, amount, price;

int main()
{
	cin >> zl >> gr;
	amount = zl + gr / 100;
	cin >> zl >> gr;
	price = zl + gr / 100;
	
	cout << floor(amount / price);
	
	return 0;
}
