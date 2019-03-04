#include<iostream>
using namespace std;

int main()
{
	cout << "輸入一個正整數吧\n";
	int n; //使用者輸入的數字
	while (cin >> n)
	{
		if (n <= 1) //若輸入的數字非正整數
		{
			cout << "要輸入「正」整數喔\n"; //要求重新輸入
			continue;
		}
		else //若為正整數
			break; //則繼續執行
	}
	do //執行演算法
	{
		if (n % 2 == 1 && n != 1) //判斷是否為奇數
			n = 3 * n + 1;
		else if (n % 2 == 0) //判斷是否為偶數
			n = n / 2;
		cout << n << endl; //依序輸出結果
	} while (n != 1); //直到等於1

	system("pause");
	return 0;
}