#ifndef HUGE
#define HUGE
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class HugeInt{
	friend ostream&operator<<(ostream&,const HugeInt&);
	friend istream&operator>>(istream&,HugeInt&);
public:
	HugeInt();
	HugeInt(string);
	HugeInt(int);
	vector<int> operator+(const HugeInt&);
	vector<int> operator-(const HugeInt&);
	void operator=(const vector<int> );
private:
	vector<int> num;
	string input;
	int digit(int);
};
#endif
