#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int t;
	long int n, k, d1, d2, tmp, left;

	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> k >> d1 >> d2;

		tmp = k - d1 - d1 - d2; //���1< ���2�����2<���3        
		if (tmp >= 0 && tmp % 3 == 0) //���1�ĵ÷��н��Ǵ�ǰ��
		{
			left = (n - k) - (d1 + d2 + d2);
			if (left >= 0 && left % 3 == 0)//ʣ�µĳ��β�С��need�����ҿ��Ծ���3����
			{
				cout << "yes" << endl;
				continue;
			}
		}

		tmp = k - d1 - d1 + d2; //���1< ���2�����2>���3
		if (tmp >= 0 && tmp % 3 == 0)
		{
			left = (n - k) - (d1 + d2);
			if (left >= 0 && left % 3 == 0)
			{
				cout << "yes" << endl;
				continue;
			}
		}

		tmp = k + d1 + d1 + d2;//���1> ���2�����2>���3
		if (tmp >= 0 && tmp % 3 == 0)
		{
			left = (n - k) - (d1 + d1 + d2);
			if (left >= 0 && left % 3 == 0)
			{
				cout << "yes" << endl;
				continue;
			}
		}

		tmp = k + d1 + d1 - d2;//���1>���2�����2<���3
		if (tmp >= 0 && tmp % 3 == 0)
		{
			if (d1 >= d2)
			{
				left = (n - k) - (d1 + d1 - d2);
			}
			else
			{
				left = (n - k) - (d2 + d2 - d1);
			}
			if (left >= 0 && left % 3 == 0)
			{
				cout << "yes" << endl;
				continue;
			}
		}

		cout << "no" << endl;
	}

	return 0;
}