#include<iostream>
using namespace std;

int main()
{
	cout << "��J�@�ӥ���Ƨa\n";
	int n; //�ϥΪ̿�J���Ʀr
	while (cin >> n)
	{
		if (n <= 1) //�Y��J���Ʀr�D�����
		{
			cout << "�n��J�u���v��Ƴ�\n"; //�n�D���s��J
			continue;
		}
		else //�Y�������
			break; //�h�~�����
	}
	do //����t��k
	{
		if (n % 2 == 1 && n != 1) //�P�_�O�_���_��
			n = 3 * n + 1;
		else if (n % 2 == 0) //�P�_�O�_������
			n = n / 2;
		cout << n << endl; //�̧ǿ�X���G
	} while (n != 1); //���쵥��1

	system("pause");
	return 0;
}