#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float waga;
	float wzrost;
	cout << "Podaj swoja wage w kg\n";
	cin >> waga;
	cout << "Podaj swoj wzrost w metrach";
	cin >> wzrost;
	float BMI = waga / (wzrost*wzrost);

	cout << BMI;

	if (BMI < 16) {
		cout << "jestes wyglodzony";
	}
	else if(BMI > 16 && BMI < 17) {
		cout << " jestes wychudzony";
	}
	else if (BMI > 17 && BMI < 18.5) {
		cout << " Masz niedowage";
	}
	else if (BMI > 18.5 && BMI < 25) {
		cout << " Masz prawidlowe BMI";
	}
	else if (BMI > 25 && BMI < 30) {
		cout << " Masz nadwage";
	}
	else if (BMI > 30 && BMI < 35) {
		cout <<  " Masz otylosc I stopnia";
	}
	else if (BMI > 35 && BMI < 40) {
		cout << " Masz otylosc II stopnia";
	}
	else if (BMI > 40) {
		cout << " Masz otylosc I stopnia";
	}
}