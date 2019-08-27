#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num,i=0;
int numrand;
int main()
{
	srand(time(NULL));
	numrand = 1 + rand() % 10 ;
	cout << "####Welcome to guessing number game####" << endl ;
	cout << "Secret number has been chosen " << endl ;
	do{
		i++;
		cout << "Guess the number (1 to 10): ";
		cin >> num;
		checkNum();
	} while (num != numrand);
}
int checkNum()
{
	if (num < numrand){
		cout << "The secret number is lower \n";
	}
	if (num > numrand){
		cout << "The secret number is higher \n";
	}
	if (num == numrand){
		cout << "Congratulations!" << endl ;
		cout << "The secret number is " << numrand << endl;
		cout << "You made "<< i <<" guesses" << endl ;
		cout << "Develop by Natanon Nantajittanon No.1 Sec.1" << endl ;
	}
	return(0);
}