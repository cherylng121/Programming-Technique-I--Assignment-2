//NG JIN EN A23CS0146
//MANISHA A/P KUMAREVELAN A23CS0108

#include<iostream>
#include<iomanip>
using namespace std; 

void calInstallment(double price, double downPay, double insRate, int period)
{
	double loanAmount = price - downPay;
	int totMonth = period * 12;
	double totIns = (insRate / 100) * loanAmount * period;
	double monthInstallment = (loanAmount + totIns) / totMonth;
	cout << fixed << setprecision(2) << "MONTHLY INSTALLMENT (MYR): " << monthInstallment << endl;
}

int main() 
{
	int car_mod, car_var, reg, downPay, period;
	double price, insRate, monthRate, monthInstallment; 
	string carName, carVar, region;
	char choice;

	cout << "Proton Car Loan Calculator" << endl << endl;

	do
	{
		do
		{
			cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
			cin >> car_mod;
		} while (car_mod != 1 && car_mod != 2 && car_mod != 3);

		do
		{
			cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
			cin >> car_var;
		} while (car_var !=1 && car_var != 2);

		do
		{
			cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
			cin >> reg;
		} while (reg != 1 && reg != 2);
		
		cout << endl;

		if (car_mod == 1)
		{
			carName = "X50";
		}
		else if (car_mod == 2)
		{
			carName = "Exora";
		}
		else
			carName = "Persona";

		if (car_var == 1)
		{
			carVar = "1.6L Standard CVT";
		}
		else
			carVar = "1.6L Premium CVT";

		if (reg == 1)
		{
			region = "Peninsular Malaysia";
		}
		else
			region = "East Malaysia";


		if ((car_mod == 1) && (car_var == 1) && (reg == 1))
		{
			price = 86300.00;
		}
		else if ((car_mod == 1) && (car_var == 1) && (reg == 2))
		{
			price = 88300.00;
		}
		else if ((car_mod == 1) && (car_var == 2) && (reg == 1))
		{
			price = 101800.00;
		}
		else if ((car_mod == 1) && (car_var == 2) && (reg == 2))
		{
			price = 103800.00;
		}
		else if ((car_mod == 2) && (car_var == 1) && (reg == 1))
		{
			price = 62800.00;
		}
		else if ((car_mod == 2) && (car_var == 1) && (reg == 2))
		{
			price = 65300.00;
		}
		else if ((car_mod == 2) && (car_var == 2) && (reg == 1))
		{
			price = 69800.00;
		}
		else if ((car_mod == 2) && (car_var == 2) && (reg == 2))
		{
			price = 72300.00;
		}
		else if ((car_mod == 3) && (car_var == 1) && (reg == 1))
		{
			price = 47800.00;
		}
		else if ((car_mod == 3) && (car_var == 1) && (reg == 2))
		{
			price = 49800.00;
		}
		else if ((car_mod == 3) && (car_var == 2) && (reg == 1))
		{
			price = 58300.00;
		}
		else if ((car_mod == 3) && (car_var == 2) && (reg == 2))
		{
			price = 60300.00;
		}


		cout << "Car Info\n";
		cout << "Model: " << carName << endl;
		cout << "Variant: " << carVar << endl;
		cout << "Region: " << region << endl;
		cout << "Paint Type: Metallic\n";
		cout << "Price (MYR): " << fixed << setprecision(2) << price << endl << endl;

		do
		{
		cout << "Down Payment (MYR): ";
		cin >> downPay;
		} while (downPay < price*0.1);

		do
		{
		cout << "Interest Rate (%): ";
		cin >> insRate;
		} while (insRate <= 0);

		do
		{
		cout << "Repayment Period (in years): ";
		cin >> period;
		} while (period <= 0);

		cout << endl;

		calInstallment(price, downPay, insRate, period);

		cout << endl;

		cout << "Do you want to enter other data? [Y @ N]: ";
		cin >> choice;

		cout << endl;

	} while (choice=='Y'||choice=='y');
	
	cout << "Thank you :) " << endl;
	
	return 0;

}