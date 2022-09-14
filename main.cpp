#include <iostream>

int Sum(int x, int y)
{
	return x + y;

	// 이름 : Sum
	// 타입 : int (int, int)
}

int main()
{
	int x{ 1 }, y{ 2 };

	std::cout << &x << ", " << &y << std::endl;
	std::cout << &Sum << ", " << &main << std::endl;
	// 함수 포인터
	// 함수도 주소가 있으므로, 당연히 참조가 가능하다



	// Sum을 가리키는 포인터는?

	int *pFunc(int x, int y);
	// int (*pFunc)(int x,  int y);의  느낌이다.
	// 이렇게 만들면, pFunc = &Sum;이다.
	// 배열의 포인터의 규칙과 비슷
	
	// int* pFunc(int x,  int y); 와 같이 만든다면,
	// 반환값을 가리키는 포인터가 되어버린다.
	// 반환타입 int에 *이 붙었기 때문이다.
	
	
}