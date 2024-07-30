#include <iostream>

using namespace std;

int main()
{
	int num = 6;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << i<<" ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 1; i <= num; i++)
	{
		for (int j = num; j >= 1; j--)
		{
			cout << j<<" ";
		}
		cout << endl;
	}


	cout << endl << endl;

	int o = 1;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << o<<" ";
			o++;
		}
		cout << endl;
	}
	cout << endl << endl;


	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << i*j<<" ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << i << " " << j << " ";

		}
		cout << endl;
	}
	cout << endl << endl;


	int tot = num;
	for (int i = 1; i <= num; i++)
	{
		int to = tot;
		for (int j = num; j >= 1; j--)
		{

			cout << to << " ";
			to += num;
		}
		tot--;
		cout << endl;
	}
	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if ((i+j)%2==0)
			{
				cout << 0<<" ";
			}
			else
				cout << 1 << " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int i = 65; i <=64+ num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << (char)i<<" ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout <<"* ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout <<j<< " ";
		}
		cout << endl;
	}
	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j*i << " ";
		}
		cout << endl;
	}
	cout << endl << endl;





	for (int i = 64+num; i >= 65 ; i--)
	{
		for (int j = i; j >= 65; j--)
		{
			cout << (char)j << " ";
		}
		cout << endl;
	}
	cout << endl << endl;





for (int i = 1; i <= num; i++)
{
	for (int j = 1; j <= num; j++)
	{
		if (j >= i)
		{
			cout <<"* ";
		}
		else
			cout << "  ";
	}
	cout << endl;
}
cout << endl << endl;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (j >= i)
			{
				cout << j << " ";
			}
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num-i; j++)
		{
			cout <<" ";
		}
		for (int p = 1; p <= i; p++)
		{
			cout << "*"<<" ";
		}
		cout << endl;
	}

	cout << endl << endl;





	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num - i; j++)
		{
			cout << " ";
		}
		for (int p = 1; p <= i; p++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	cout << endl << endl;



	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <=  i; j++)
		{
			cout << " ";
		}
		for (int p = 1; p <= num-i+1; p++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int p = 1; p <= num - i + 1; p++)
		{
			cout << (char)(num-i+65) << " ";
		}
		cout << endl;
	}

	cout << endl << endl;





	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int p = 1; p <= num - i  + 1; p++)
		{
			cout << "*";
		}
		for (int p = 1; p <= num - i ; p++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl;






	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int p = 1; p <= num - i + 1; p++)
		{
			cout << num-i+1;
		}
		for (int p = 1; p <= num - i; p++)
		{
			cout << num-i+1;
		}
		cout << endl;
	}

	cout << endl << endl;







	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << num-j<<" ";
		}

		cout << endl;
	}
	for (int i = 1; i <= num-1; i++)
	{
		for (int j = 1; j <= num-i; j++)
		{
			cout << num- j << " ";
		}

		cout << endl;
	}

	cout << endl << endl;




	for (int i = 1; i <= num; i++)
	{
		
		for (int j = 1; j <= num-i+1; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= i ; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 2; i <= num; i++)
	{

		for (int j = 1; j <=  i ; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= num-i+1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl << endl;







	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= num - i + 1; j++)
		{
			cout << "  ";
		}
		for (int j = i; j >= 1; j--)
		{
			cout << (char)(65 + num - j) << " ";
		}
		cout << endl;
	}
	for (int i = 2; i <= num; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = num-i+1; j >=  1; j--)
		{
			cout << (char)(65 +num- j) << " ";
		}
		cout << endl;
	}
	cout << endl << endl;







	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << 1 << " ";
		}
		for (int j = num - i; j >= 1; j--)
		{
			cout << 0 << " ";
		}
		cout << endl;
	}
	cout << endl << endl;







	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i == j)
			{
				cout << i<<" ";
			}
			else
			{
				cout << 0<<" ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;






	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j <= num; j++)
		{
			cout << j << " ";
		}
		for (int j =  num; j >= num-i+2; j--)
		{
			cout <<  "* ";
		}
		cout << endl;
	}
	cout << endl << endl;
}

