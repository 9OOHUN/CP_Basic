#include "io.h"
#include "DefineFunction.h"

int main()
{
	// �Լ� ȣ��
	DefineFunction();
	CppBasic();
	

	// ��2023. 11. 21. ��� ����

	int Condition1 = 100;

	/*
		if�� �����ϴ� ���ǽ��� ����
		: ������� bool ������
		���ǽ��� ����
		- �񱳿����
		- bool ������
		- ��� �����
	*/

	if (Condition1 >= 50) {
		// ���϶� ���౸��, ���ǽ� �ܿ� �ٸ� �����͵� ���� �� ����
		cout << Condition1 << endl;
	}

	if (true) {} //:������ ����
	if (false) {}
	if (1) {} //:true�� �ν���
	if (0) {}
	if (20) {} // 0 : false , �̿��� ������ ��� : true / ������
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}

	/*
		if(���ǽ�1){
			// ���ǽ�1�� ���� �� ���� ����
		}

		if(���ǽ�2){
			// ������2�� ���� �� ���� ����
		} else {
			// ���ǽ�2�� ������ �� ���� ����
		}

		if(���ǽ�3){
			// ���ǽ�3�� ���� �� ���� ����
		} else if(���ǽ�4){
			// ���ǽ�4�� ���� �� ���� ����
		} else if(���ǽ�5){
			// ���ǽ�5�� ���� �� ���� ����
		} else {
			// ���ǽ��� ��� ������ �� ���� ����
		}
	*/

	// ��������1 : A,B �� ���� �Է� �޾� ���ؼ� ��� ���
	// ��� : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;

	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

	/* ��������2 :
	   �������� 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F
	*/
	int NumTest = 0;
	//cin >> NumTest;

	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	/* ��������3 :
	   �������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	   �λ����� : Ű�� 180 �̻�, ���� �������̾��ٰ� ���ߴ�.
	   ������ ã�� ���ǹ��� �ۼ��Ͻÿ�
	   �ʻ� �Է°� : Black = B, White = W, Red = R ...
	*/

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : ���ڰ��� �������� �ʴ� ����

	//cin >> TallNumber;
	//cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == B

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "������" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}

	/*
		if�� ��ø�ؼ� ����ϴ� ��� (��ø���)

		if(���ǽ�1){
			// ���϶� ����
			if(���ǽ�2){
			}
		}
	*/

	// �� ������������ �� �� �ϳ� ���Ǹ� �ش�ɶ� ��ø����

	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "������" << endl;
		}
		else {
			cout << "�ù�" << endl;
		}
	}
	// switch ~ case
	/*
	*  switch�� �����ϴ� ������ �����
	* : ����, ����

	   switch(����){
		   case �����1 :
				���౸��
		   case �����2
				���౸��2
		   ...
	   }
	*
	*/

	// ���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸��� ���
	// 0:�Ͽ��� ~ 6:�����
	int DayNum = 0;
	cout << "���Ϲ�ȣ�� �Է����ּ��� [0~6] : ";
	//cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "�Ͽ���" << endl;
		break;
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "ȭ����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�ݿ���" << endl;
		break;
	case 6:
		cout << "�����" << endl;
	}

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

	// ������2�� = for ����
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {  // <- �������ٴ� Ƚ�� �߿��� �� <= ���
		Dan2 = 2 * i;
		cout << "2 X " << i << " = ";
		cout << Dan2 << endl;
	}

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

// �Լ� ����
void DefineFunction()
{
	cout << "Hello Fuction" << endl;
}

	// ��Ʈ�� ����Ʈ�� ���� ����
	/*
		bit : ��ǻ�� ������ ������ �ּҴ���
		byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
		1byte = 8bit

		2���� ���� ������ : 0,1
		���� ��� �⺻������ �����ϸ� ����
		1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
		2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ������ ����ϸ� ����, 256(2^8) ���̾� = 8bit(1byte)
		�����ڵ� UTF-8 : õ�ڹ����� ��� Ŀ�� ���� 2byte(16bit) = 2^16���� ������ ���� ǥ���
		Ʈ���÷� : 2^24(24bit) RGB ����ȥ��(������ �����), ������ ����ȥ��(������ ��ο���)
		- R 8bit, G 8bit, B 8bit = 24bit
		��ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte(8bit) �������� Ȯ��

		= : ���ʿ� ����, �����ʿ� �����Ͱ����� [����, �Ҵ�(assign)]�̶�� ������ ���(����ó�� �����ϴ� �ƴ�)
		% : ����������
	*/