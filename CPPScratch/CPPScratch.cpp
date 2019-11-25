// example about structures
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <cmath>

using namespace std;

struct movies_t {
	string title;
	int year;
} mine, yours;

void printmovie(movies_t movie);
void dosomething();
void pythagoreantrip();
void summationofprimes();
bool isprime(long number);
long nthprime(long n);

int main()
{
	long begin = clock();
	long target = 10001L;
	//summationofprimes();
	cout << "####" << target << "th PRIME IS: " << nthprime(target);
	/*cout << isprime(2) << endl;
	cout << isprime(3) << endl;
	cout << isprime(13) << endl;
	cout << isprime(6) << endl;*/

	long end = clock();
	double elapsed_secs = (double(end - begin) / CLOCKS_PER_SEC);
	//printf("####Completion Time: %d \n", elapsed_secs);
	cout << "###Elapsed Time: " << elapsed_secs << endl;

	return 0;
	vector<long> mahList = { 0, 1, 2, 3, 4, 5 };
	for (auto blah : mahList) 
	{
		cout << isprime(blah)  << "\n";
	}
	/*long sum1 = 0L, sum2 = 0L;
	for (int i = 1; i < 101; i++) 
	{
		sum1 += i * i;
		sum2 += i;
	}
	sum2 = sum2 * sum2;

	cout << "The result is sum: " << sum1 << endl;
	cout << "The result is sum: " << sum2 << endl;
	cout << "The answer is: " << (sum2 - sum1) << endl;*/
}
void pythagoreantrip() {

	for (int i = 0; i < 1000; i++)
	{
		for (int j = i + 1; j < 1000; j++)
		{
			for (int k = j + 1; k < 1000; k++)
			{
				
				if ((i + j + k) == 1000) {
					//.cout << "The Answer is: " << 
						cout << "###SUM: " << i << " " << j << " " << k << endl;
						//if (floor(pow(i, 2) + pow(j, 2)) == floor(pow(k, 2))) {
						if ((pow(i, 2) + pow(j, 2)) == pow(k, 2)) {
							cout << "#########ANSWER: " << i << " " << j << " " << k << endl;
							cout << (i * j * k) << endl;
							return;
						}
				}
			}

		}

	}
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
void summationofprimes() 
{
	long target = 2000000L;
	long long sum = 2L;
	for (long i = 3; i < target; i++)
	{
		if (isprime(i) == true) {
			cout << "Prime: " << i << "  Sum: " << sum << endl;
			sum += i;
		}
		
	}
	cout << "####FINAL SUM: " << sum;

}

long nthprime(long n)
{
	long primeCount = 0;
	long maxPrime = 0;
	for (long i = 1; primeCount <= n; i++) {
		if (isprime(i)) {
			cout << "Prime #: " << primeCount << endl;
			primeCount++;
			maxPrime = i;
		}
	}
	return maxPrime;

}

bool isprime(long num) {
	bool flag = true;
	long tgt = num / 2L + 1;
	if (num <= 3) {
		return true;
	}
	for (long i = 2; i < tgt; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}