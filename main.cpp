#include <iostream>

int Sum(int x, int y)
{
	return x + y;

	// �̸� : Sum
	// Ÿ�� : int (int, int)
}

int main()
{
	int x{ 1 }, y{ 2 };

	std::cout << &x << ", " << &y << std::endl;
	std::cout << &Sum << ", " << &main << std::endl;
	// �Լ� ������
	// �Լ��� �ּҰ� �����Ƿ�, �翬�� ������ �����ϴ�



	// Sum�� ����Ű�� �����ʹ�?

	int *pFunc(int x, int y);
	// int (*pFunc)(int x,  int y);��  �����̴�.
	// �̷��� �����, pFunc = &Sum;�̴�.
	// �迭�� �������� ��Ģ�� ���
	
	// int* pFunc(int x,  int y); �� ���� ����ٸ�,
	// ��ȯ���� ����Ű�� �����Ͱ� �Ǿ������.
	// ��ȯŸ�� int�� *�� �پ��� �����̴�.
	
	
}