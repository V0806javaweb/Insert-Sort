#include <iostream>

using namespace std;

void insertionS(int sorce[], int len);

int main()
{
	int arr[7] = { 3,1,0,55,55,777,1 };
	for (int t : arr)
		cout << t << " ";
	
	cout << endl;
	insertionS(arr, 7);
	for (int t : arr)
		cout << t << " ";
}

void insertionS(int sorce[], int len)
{
	if (len < 2)
		return;

	int buf,pin;
	for (int i = 1; i < len; i++)
	{
		buf = sorce[i];
		//buf替換陣列 sorce[1~i-1] 之中比buf大的
		pin = i - 1;
		while (pin >= 0 && sorce[pin] > buf)
		{
			sorce[pin + 1] = sorce[pin];
			pin--;
		}
		sorce[pin + 1] = buf;
	}
}