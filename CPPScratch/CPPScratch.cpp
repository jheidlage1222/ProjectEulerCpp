// example about structures
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

struct movies_t {
	string title;
	int year;
} mine, yours;

void printmovie(movies_t movie);
void dosomething();

int main()
{
	vector<int> mahList = {  };
	/*for (auto blah : mahList) 
	{
		cout << blah << "\n";
	}*/
	long sum1 = 0L, sum2 = 0L;
	for (int i = 1; i < 101; i++) 
	{
		sum1 += i * i;
		sum2 += i;
	}
	sum2 = sum2 * sum2;

	cout << "The result is sum: " << sum1 << endl;
	cout << "The result is sum: " << sum2 << endl;
	cout << "The answer is: " << (sum2 - sum1) << endl;
}

void printmovie(movies_t movie)
{
	movie.year = 1989;
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}

void dosomething() 
{
	string mystr;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, mystr);
	stringstream(mystr) >> yours.year;

	cout << "My favorite movie is:\n ";
	printmovie(mine);
	cout << "And yours is:\n ";
	printmovie(yours);
	//return 0;
}