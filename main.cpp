#include "polinom.h"

int main()
{
	try {

		Polinom A, B, sum, dif, mul;
		double c;
		int k;
		cout << endl << "Polinom A:  ";
		A.SetPolinom();
		cout << endl << "A: " << A << endl << endl;
		cout << endl << "Polinom B: ";
		B.SetPolinom();
		cout << endl << "B: " << B << endl << endl;
		cout << "Const:";
		cin >> c;
		cout << endl;
		cout << "Choose the actions to perform " << endl;
		cout << "1) A + B" << endl;
		cout << "2) A - B" << endl;
		cout << "3)  A * const" << endl;
		cout << "4)  B * const" << endl;
		cout << "5)  A * B" << endl;
		cin >> k;
		switch (k)
		{
		case 1:
		{sum = A + B;
		cout << " A + B: " << sum << endl << endl;

		break;
		}
		case 2:
		{dif = A - B;
		cout << " A - B: " << dif << endl << endl;

		break;
		}
		case 3:
		{mul = A * c;
		cout << " A * const: " << mul << endl << endl;

		break;
		}

		case 4:
		{mul = B * c;
		cout << " B * const: " << mul << endl << endl;
		break;
		}

		case 5:
		{mul = A * B;

		cout << "A * B: " << mul << endl;


		break;
		}

		default:
		{
			cout << "Wrong choice";
			cout << "1) A + B" << endl;
			cout << "2) A - B" << endl;
			cout << "3)  A * const" << endl;
			cout << "4)  B * const" << endl;
			cout << "5)  A * B" << endl;
			cin >> k;
		}




		}
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
	cout << endl;
	return 0;

}