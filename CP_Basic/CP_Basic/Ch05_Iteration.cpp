#include "io.h"

void ForFunctionDesc()
{
	// �ݺ��� for : �ݺ� Ƚ���� ���ؼ� �ݺ� ����
	// �ݺ� : iterate, ���� : interger -> for ���� i,j�� ���� ��
	/*
		for(����1; ����2; ����3){}

		����1
		- for ������ ó�� ����� �� ���� �ѹ� ����Ǵ� ����
		- �ݺ� Ƚ���� �����ϴ� ���� ����

		����2
		- �ݺ� ����� �� ���� �񱳽� ����
		- ���Ǻ񱳽��� ������� ���϶� �ݺ� ����

		����3
		- �ڵ���� �ݺ� ����� �� ���� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

		for(int i = 0; i < 10; i+=2){}  // i++ �� ���� ���� ��, 1���� �����ǰ�
		for�����ϸ� [����1] i�� 0���� �ʱ�ȭ, [����2] �񱳽� ����, {}�ڵ�� �����ϰ� ������ [����3]���� �ٽ� ����
	*/
	// ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
	for (int i = 0; i < 10; i++) {
		cout << "Hello" << endl;
	}

	int Total = 0;

	for (int i = 1; i < 10; i++) {  // <- ���� �߿��Ҷ� i<10
		Total += i;
		cout << Total << endl; // <- ����
	}
	cout << Total << endl; // <- �հ�
}

void ForFunctionEx01()
{
	// ������2�� = for ����
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {  // <- �������ٴ� Ƚ�� �߿��� �� <= ���
		Dan2 = 2 * i;
		cout << "2 X " << i << " = ";
		cout << Dan2 << endl;
	}
}

void ForFunctionEx02()
{
	// ��ø for : ��ø �ؾ��ϸ� ������ ��ø �ؾ���
// ������ ��ü : 2���� �ݺ�
	int Dan = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Dan = i * j; // <- �̷� ��ø ���� �߿�
			cout << i << " X " << j << " = ";
			cout << Dan << endl;
		}
		cout << endl;
	}
}

void ForFunctionEx03()
{
	// �������� : �ݺ�Ƚ���� �Է� �ް�, �ݺ� �ɶ����� �� �� A,B�� �Է¹޾� A+B�� ������� ǥ��

	int IterNumber = 0;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		cout << IterA + IterB << endl;
	}
}

void ForFunctionEx04()
{
	// �������� : ���� 25304�� '������'
/*
	����
	1. �� �ݾ� �Է�
	2. ���� ������ �� �Է� -> �ݺ� Ƚ��
	3. �ݺ�����
	3-1. �� ���� ���� ���� �Է�
	3-2. �� ���� ���� �Է�
	3-3. �� ���� ���� ���� * ���ǰ���
	3-4. �� ���� ��ü ������ ��� ���ϱ�
	4. �Է¹��� �� �ݾװ� ��� ��� ���� ��
	5. 4���� ����� true -> yes / false -> no
*/

// 1
	int TotalPrice = 0;
	cout << "Typing Total Price : ";
	//cin >> TotalPrice;

	// 2
	int SortNumber = 0;
	cout << "Typing Sort Number : ";
	//cin >> SortNumber;

	// 3
	int ProductPrice = 0;
	int ProductNumber = 0;
	int ProductTotalPrice = 0;
	int SumTotalPrice = 0; // <- ����

	for (int i = 0; i < SortNumber; i++) { // <- ���ϴ� �ݺ�Ƚ�� �������� i=0, i<ȸ�� �Է�
		// 3-1
		cout << "Typing Product Price : ";
		//cin >> ProductPrice;
		// 3-2
		cout << "Typing Product Number : ";
		//cin >> ProductNumber;
		// 3-3
		ProductTotalPrice = ProductPrice * ProductNumber;
		// 3-4
		SumTotalPrice = SumTotalPrice + ProductTotalPrice;
	}
	// 4, 5
	if (TotalPrice == SumTotalPrice) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}

void WhileFunctionDesc()
{
	/*
	while : ���ǽ��� ���� ��쿡 �ݺ� �����ϴ� ���� <- ���� �ݺ��Ѵ� / ���ѷ����� ������

	while(���Ǻ񱳽�:bool){}

	while(Total >= 200){}
	while(true){}
	while(1){}
*/

	int iter = 0;
	while (iter < 10) {
		cout << "Hello world" << endl;  // <- �Ⱦ��� ���� for�� ����
		iter++;
	}

	do {
		cout << "Hello world" << endl; // <- ó�� �ѹ� ���� �õ��ϰ� ���Ŀ� ���� ��, ���� �Ⱦ�
		iter++;
	} while (iter < 10);

	/*  true ���� ���ö����� ���� �ݺ�

		while (true) {
			�α��� �õ�
			���̵�/��� üũ
			�α��� ����
			+ break; ���� �� ������ ������
			�α��� ����
		}
	*/
}

void WhileFunctionEx01()
{
	// while �� ���� ���� �������� ������ ���� (�Ѿװ� ���ǰ���, �����θ�)
/*
	����
	1. �� �ݾ� �Է�
	2. �ݺ����� (while) : ���Ǻ� (�ѱݾ� != 0)
	2-1. �� ���� ���� ���� �Է�
	2-2. �� ���� ���� �Է�
	2-3. �� ���� ���� ���� * ���ǰ��� = ���Ǵ� �ݾ�
	2-4. �� �ݾ� - ���Ǵ� �ݾ�, 0�� �ɶ�����
	3. �� ������ �� yes ���
*/

	int TotalPrice1 = 0;
	cout << "Please Typing Total Price : ";
	cin >> TotalPrice1;

	int ProductPrice1 = 0;
	int ProductNumber1 = 0;
	int ProductTotalPrice1 = 0;
	bool Zero = true;

	while (TotalPrice1 != 0) { // <- while ������ ���϶� ���ѹݺ��ǹǷ� ������ ���� !=�� �Ἥ �� ������ ������ �ۼ�

		// ���� �ƴҶ� �߰��ڵ�
		if (TotalPrice1 < 0) {
			Zero = false;
			break;
		}

		// �� �ڵ�
		cout << "Please Typing Product Price : ";
		cin >> ProductPrice1;

		cout << "Please Typing Product Number : ";
		cin >> ProductNumber1;

		ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
		TotalPrice1 = TotalPrice1 - ProductTotalPrice1;
	}
	if (Zero == false) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
}