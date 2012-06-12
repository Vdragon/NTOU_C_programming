//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�{�]�����ҫD�x��Ѧҵ��סC
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(5)20100119
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G23
//�̷s��s����(Latest Update Log)�G�C
/*��s����(Change Log)�G
1.00(0) �Ĥ@�D����
1.00(1) �ĤG�T�D
1.00(2) �Ĥ��D����
1.00(3) �����t�ܥ\�৹��
1.00(4) �ץ��ĤG�D��ܰ��t
1.00(5) �����W�[�����{����Visual Studio�sĶ�����ۮe��
*///��s����(Change Log)�G
/*�w�����D(Known Issue)�G
->G++�L�k���`�ѪR�Y��BIG5�r���A�ݸɤW�B�~���ŦX�y�k�W�h���ϱ׽u(Visual Studio�sĶ�����`)�C
->�Ĥ��Dprintf ID �ϥ�%09u�L�k�ɹs�C
->Visual Studio �sĶ�����ͤ������ɵL�k�t�ܲĤ��D(Malloc()�l�צ^��NULL)�C
	>���i�H�A���OPERSONTOTAL�L�k�Τj�p�w�]�ȡA��]�����C
	>240�U���|�e��160MB�O����A�w��2400�U������1.6G�A���O���|�B�楢�ѡC
*///�w�����D(Known Issue)�G
//--------------�`�N�ƶ�--------------
/*
��.��BUG���ˬdscanf()�Ѽƪ���ƫ��A�O�_���T�C
��.���P��compiler�i�঳�B�z��ơB�ܼƤ�����t���A�С����n���b�P�@�y�y(Statement)���P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
��.�bcondition statement ���n�ϥΦh��AND�BOR�V�X���P�_�y�ɩy�NAND���j���UOR�y�άA���A�_�ӡC
��.�Ϋ��а}�C���V�r�ꤧ�覡�w�qstring literal �Х�const char * �e���ЦW�١f = �e�r��f;
��. * (dereferencing operater) �u���ūܧC�A�P��L�B��l�b�P�@�ӻy�y�����ˬd���u���šC
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//C Standard General Utilities Library
//�����G1.00(3)
	/*
	for srand()
	for SYSTEM("pause") if working
	*/
	#include <stdlib.h>

//Math function(Unknown)
//�����G1.00(0)
	#include <math.h>

//string.h
//�����G1.00(0)
    #include <string.h>

//Date and time functions Library
//�����G1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug functionality
	#define debug 0

//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1

//define PERSONTOTAL
	#define PERSONTOTAL 24000000
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//Defined Structure
//for Q5
	struct date
		{
			int year, month, day;
		};
	struct city
		{
			char name[100];
			int population;
			double area;
		};
	struct person
		{
			char ID[15], name[30];
			date birthday;
			city *birthplace, *livingplace;
		};
//for Q6
	struct myData
		{
			char *str, status;
		};

//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	unsigned short int scanfTriggered = 0;

//function prototype
//function prototype for pauseProgram
	bool pauseProgram(void);
//func.prototype of //string reverse(Vdragon version)���
	void Vstrrev(char * inputStringPtr);

//function for the test
	void q1main(void);
	void blahblah(int * x, int y, int z);
	void q2main(void);
	void q3main(void);
	unsigned int q3BinaryToInt(char * strInput);
	void q3IntToBinary(char * strBuffer, unsigned int inputNum);
	void q4main(void);
	double q4function(double x, int n);
	bool q5main(void);
	void count_popult(person p[], int pTotal, city c[], int cTotal);
	void q6main(void);
//print title
	void printTitle(void)
		{
			  printf("�{���W��(Program Name)�G�{�]�����ҫD�x��Ѧҵ��סC\n");
			  printf("�{���ԭz(Program Description)�G\n�C\n");
			  printf("�{������(Program Version)�G1.00(5)20100119\n");
			  printf("�Т������@��B�@�L�դ��I��������\n�O�d�Ҧ��v�Q�ТϢ����@���������@������������\n");
			  printf("�СССССССССССССССССССССССССССССССС�\n");
		}
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(11)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{restartProgram:
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
	//print title
		printTitle();
	//�Ĥ@�D
		printf("�Ĥ@�D�]�������^\n�СССССССССССССССССС�\n");
		q1main();
		printf("�СССССССССССССССССС�\n");
	//�ĤG�D
		printf("�ĤG�D�]�����^\n�СССССССССССССССССС�\n");
		q2main();
		printf("�СССССССССССССССССС�\n");
	//�ĤT�D
		printf("�ĤT�D�]�������^\n�СССССССССССССССССС�\n");
		q3main();
		printf("�СССССССССССССССССС�\n");
	//�ĥ|�D
		printf("�ĥ|�D�]�������^\n�СССССССССССССССССС�\n");
		q4main();
		printf("�СССССССССССССССССС�\n");
	//�Ĥ��D
		printf("�Ĥ��D\n�СССССССССССССССССС�\n");
		if(!q5main())
			{
					printf("\n�z���q���H���s���O����(RAM)�i�ΪŶ������A�L�k�t�ܲĤ��D\n�д�֭�l�X��PERSONTOTAL�`�Ƥ��j�p\n");
					printf("\n���׽аѾ\\��l�X\n");
					printf("�СССССССССССССССССС�\n");
			}
	//�Ĥ��D
		printf("�Ĥ��D�]�������^\n�СССССССССССССССССС�\n");
		q6main();
		//printf("�СССССССССССССССССС�\n");

	//pauseProgram
		if(pauseProgram())
			{
				goto restartProgram;
			}
	////pauseProgram
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q1main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//pre
			int a[3] = {1, 6, 9}, * p1 = a, * p2 = p1 + 1, k = a[0], m = a[1], n = a[2];
		//�СССССССССССССССССССС�
		//
			printf("(1) %d\n(2) %d\n(3) %d\n(4) %d\n", *p1, *p2, p2 - a, *p2 - *a);
		//���סG�@�@�@�@���@�@�@���@�@�@���@�@�@��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1; printf("(5) %d %d %d\n", a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = (*p1)++; printf("(6) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//���סG�@�@�@�@�@�@�@�@�@ �@�@�� �� �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = ++*p1; printf("(7) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//���סG�@�@�@�@�@�@�@�@�@ �@�� �� �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *++p1; printf("(8) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//���סG�@�@�@�@�@�@�@�@�@ �@�� �� �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1++; printf("(9) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//���סG�@�@�@�@�@�@�@�@�@ �@�� �� �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *(p1 + 1); printf("(10) %d %d %d\n", a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �@�@�@ �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1 + 1; printf("(11) %d %d %d\n", a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �@�@ �� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*(p2 + 1) = *(p1 + 1); printf("(12) %d %d %d\n", a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �@�@ �@�@�@�@�� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*(p2 - *p1) = 7; printf("(13) %d %d %d\n", a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �@�@ �@�� �� ��
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			k = m * ++n; printf("(14) %d %d %d %d %d %d\n", k, m, n, a[0], a[1], a[2]);
		//���סG�@�@�@�@�@�@�@�@�@ �@ 60 �� 10 �� �� ��
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q2main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//
			int x = 4, y = 3;

		//�СССССССССССССССССССС�
		//
			for(int i = 1; i <= 3; i++)
				{
					int x = y + i;
					blahblah(&y, x, i);
					printf("(%d) x=%d, y=%d\n", i, x, y);
					//�ѵ��G ���@�@���@�@13
					//�@�@�@ ���@�@15�@�@67
					//�@�@�@ ���@�@70�@ 405
				}
		////
			printf("(%d) x=%d, y=%d\n", i, x, y);
			//�ѵ��G ���@�@���@ 405
		/*||=== ������, Debug ===|
			\main.cpp||In function 'void q2main()':|
			\main.cpp|184|error: name lookup of 'i' changed for ISO 'for' scoping|
			\main.cpp|184|note: (if you use '-fpermissive' G++ will accept your code)|
			||=== Build finished: 1 errors, 0 warnings ===|
			Compiler�R�O���]�w���G$compiler $options $includes -fpermissive -c $file -o $object�~�i�L
		*/

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void blahblah(int * x, int y, int z)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
		//
			*x = *x * 2 + y + z * *x;

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q3main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//Define a char Array for storing converted binary
			char strBuffer[36];//4 * 8bit + 3 spaces + null char.
		//define a char array for storing bitwise x
			char bitwiseX[36] = "00010111 11011101 00011110 00101101";
			char bitwiseY[36] = "11101010 10110000 11011000 10011011";
		//
			unsigned int x = q3BinaryToInt(bitwiseX);
			unsigned int y = q3BinaryToInt(bitwiseY);
			unsigned int z;
																		/*test
																			printf("Debug: x = %u, y = %u\n", x, y);
																		*///
		//�СССССССССССССССССССС�
		//(1)
			z = x ^ y;
			q3IntToBinary(strBuffer, z);
			printf("(1) z = (%s)�G�i��\n", strBuffer);
		//���סG(11111101 01101101 11000110 10110110)�G�i��
		//(2)
			z = x | y;
			q3IntToBinary(strBuffer, z);
			printf("(2) z = (%s)�G�i��\n", strBuffer);
		//���סG(11111111 11111101 11011110 10111111)�G�i��
		//(3)
			z = x & ~y;
			q3IntToBinary(strBuffer, z);
			printf("(3) z = (%s)�G�i��\n", strBuffer);
		//���סG(00010101 01001101 00000110 00100100)�G�i��
		//(4)
			z = x >> 2 << 7;
			q3IntToBinary(strBuffer, z);
			printf("(4) z = (%s)�G�i��\n", strBuffer);
		//���סG(11111011 10100011 11000101 10000000)�G�i��

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
unsigned int q3BinaryToInt(char * strInput)//36 char array
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//define a pointer to save what char we are processing
			char * currentPtr = strInput;
		//define a counter to save what bit we are doing
			unsigned short int currentBit;
		//define a unsigned int to store sum
			unsigned int currentSum = 0;
		//�СССССССССССССССССССС�
																	/*test
																		printf("Debug: currentSum = %u\n", currentSum);
																	*///test
		//a for loop from 32 bit to 1?
			for(currentBit = 32; currentBit > 0; currentBit--, currentPtr++)
				{
					//if pointer is pointing space then shift right
						if((currentPtr - strInput + 1) % 9 == 0)
							{
								currentPtr++;
							}
					//if bit is 1 then add to sum
						currentSum = currentSum + (*currentPtr == '1'? (unsigned int)pow((double)2, (double)currentBit - 1) : 0 );
																	/*test
																		printf("Debug: currentSum = %u\n", currentSum);
																	*///test
					////if bit is 1 then add to sum
				}

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return currentSum;
	}
//string reverse(Vdragon version)���
//�����G1.00(0)
/*
returnType functionName(auguments)
*/
void Vstrrev(char * inputStringPtr)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
		//search the ending of string
			//
				unsigned int searchC;
			//searchC will last point at \0
				for(searchC = 0; *(inputStringPtr + searchC) != '\0'; searchC++)
					{

					}
			//let searchC points the last char by null char.
				searchC--;
		//swap chars
			//
				char * swapFront = inputStringPtr;
				char bufferChar;
			//
				for(; swapFront < inputStringPtr + searchC; swapFront++, searchC--)
					{
						//buffer front char
							bufferChar = *swapFront;
						//assign front char with back char
							*swapFront = *(inputStringPtr + searchC);
						//assign back char with buffered char
							*(inputStringPtr + searchC) = bufferChar;
					}
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q3IntToBinary(char * strBuffer, unsigned int inputNum)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//
			char* currentPtr = strBuffer;
		//
			unsigned short int currentChar;
		//�СССССССССССССССССССС�
		//��gfor�j��
			for(currentChar = 1; currentChar < 36; currentChar++)
				{
					//if space needed then add space and continue
						if(currentChar % 9 == 0)
							{
								*currentPtr = ' ';
								currentPtr++;
								continue;
							}
					//if number has become zero then put 0 and continue
						if(inputNum == 0)
							{
								*currentPtr = '0';
								currentPtr++;
								continue;
							}
					//2��...
						*currentPtr++ = (inputNum % 2 == 0)? '0' : '1';
						inputNum = inputNum / 2;

				}
		//��null char.
			*currentPtr = '\0';
			//strrev(strBuffer);//strrev()�Ostring.h���Y�ɤ������r�ꫬ�ƽX�_��,���۬O����r��
			Vstrrev(strBuffer);
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}

//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q4main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)

		//�СССССССССССССССССССС�
		//demo
			printf("f(16, 1)=%lf\n", q4function(16, 1));

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}

//��L���
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
double q4function(double x, int n)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
		//basic step-if n<=0 then func. should return 0
			if(n <= 0)
				{
					return 0;
				}
		//recursive step-if n>0 then func. should return pow(x + func(x, n-1), 0.25)
			return pow(x + q4function(x, n - 1), 0.25);

	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
bool q5main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//question
			person * TWperson;
			city TWcity[400];
			int personTotal, cityTotal;

		//�СССССССССССССССССССС�
		//�{���ҧQ�Ϊ����Q��ƨӷ�
			personTotal = PERSONTOTAL;//�x�W��2400�U�H
			cityTotal = 24;//�x�W�`�@��24���ҥ�+��
			printf("�}�l�I�smalloc()�������s����y��Ƥ��O����Ŷ�\n");
			printf("PERSONTOTAL�w�]��24000000�@�w�]�ȷ|���Ӭ�1.5�բФ��O����@�ثePERSONTOTAL���Ȭ�%d\n", personTotal);
			TWperson = (person * )malloc(personTotal * sizeof(person));
			if(TWperson == NULL)
				{
					free(TWperson);
					return false;
				}
			printf("�s�y�üƤ��y��Ƥ��A�еy�ԡP�P�P");
			strcpy(TWcity[0].name, "�x�_��");			strcpy(TWcity[1].name, "�x�_��");
			strcpy(TWcity[2].name, "�򶩥�");			strcpy(TWcity[3].name, "��鿤");
			strcpy(TWcity[4].name, "�s�˥�");			strcpy(TWcity[5].name, "�s�˿�");
			strcpy(TWcity[6].name, "�]�߿�");			strcpy(TWcity[7].name, "�x����");
			strcpy(TWcity[8].name, "�x����");			strcpy(TWcity[9].name, "���ƿ�");
			strcpy(TWcity[10].name, "�n�뿤");			strcpy(TWcity[11].name, "���L��");
			strcpy(TWcity[12].name, "�Ÿq��");			strcpy(TWcity[13].name, "�Ÿq��");
			strcpy(TWcity[14].name, "�x�n��");			strcpy(TWcity[15].name, "�x�n��");
			strcpy(TWcity[16].name, "������");			strcpy(TWcity[17].name, "������");
			strcpy(TWcity[18].name, "�̪F��");			strcpy(TWcity[19].name, "�y����");
			strcpy(TWcity[20].name, "�Ὤ��");			strcpy(TWcity[21].name, "�x�F��");
			strcpy(TWcity[22].name, "���");			strcpy(TWcity[23].name, "������");
			unsigned short int assignC;
			//random function initialization
			//�����G1.00(2)
				srand((unsigned)time(NULL));
					//now rand() is usable :D
					//rand() range: 0 ~ unsigned int MAX.
			for(assignC = 0; assignC < cityTotal; assignC++)
				{
					TWcity[assignC].population = (unsigned int)(int)rand();
					TWcity[assignC].area = rand() % 100000;
				}
			unsigned int initPDataC;
			const char IDalph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
			const char * twoSurnames[40] = {"�a��", "�ڶ�", "�q��", "�q�{", "�q��", "�q�F", "�W�x", "�L��", "�Ϧ�", "�Ĥ�", "��C", "����", "�F��", "���]", "�s�]", "��]", "���]", "�u�]", "���]", "�}�e", "�t��", "�[�C", "�Ѹ�", "�F��", "���", "����", "�L�J", "�E�S", "�ʨ�", "�ݤ�", "���M", "�Өj", "�I��", "�B�O", "�O��", "�E�_", "�Y��", "���", "�n�c", "�`�C"};
			const char * oneNames[40] = {"��", "��", "��", "�{", "��", "�F", "�x", "��", "��", "��", "�C", "��", "��", "�]", "�]", "�]", "�]", "�]", "�]", "�e", "��", "�C", "��", "��", "��", "��", "�J", "�S", "��", "��", "�M", "�j", "��", "�O", "��", "�_", "��", "��", "�c", "�C"};
			char nameBuffer[10];//Max. 3 UTF-8 char string
			for(initPDataC = 0; initPDataC < personTotal; initPDataC++)
				{
					{//making ID
						TWperson[initPDataC].ID[0] = IDalph[rand() % 26];
						TWperson[initPDataC].ID[1] = '\0';
						char stringBuffer[10];//9num + null char.
						//sprintf(stringBuffer, "%09u", ((unsigned int)pow(rand(), (SYSTEM == 0)? 4 : 1)) % 1000000000);
						sprintf(stringBuffer, "%09u", (SYSTEM == 0)? ((unsigned int)pow((double)rand(),4)) : rand() % 1000000000);
						strcat(TWperson[initPDataC].ID, stringBuffer);
					}

					{//making name
						nameBuffer[0] = '\0';
						strcat(nameBuffer, twoSurnames[rand() % 40]);
						strcat(nameBuffer, oneNames[rand() % 40]);
						strcpy(TWperson[initPDataC].name, nameBuffer);
					}

					TWperson[initPDataC].birthday.year = 1900 + rand() % 112;//1900~2011
					TWperson[initPDataC].birthday.month = rand() % 12 + 1;//1~12
					TWperson[initPDataC].birthday.day = rand() % 28;//1~28
					TWperson[initPDataC].birthplace = &TWcity[rand() % 24];
					TWperson[initPDataC].livingplace = &TWcity[rand() % 24];
				}
		//new line
			putchar('\n');
		//(1)
			printf("(1)�]�������^\n�СССССССССССССССССС�\n");
			count_popult(TWperson, personTotal, TWcity, cityTotal);
			printf("\n���׽аѾ\\��l�X\n");
			printf("�СССССССССССССССССС�\n");
		//(2)
			printf("(2)�]�������^\n�СССССССССССССССССС�\n");
			//search the max pop. of all city
				//
				unsigned int maxCurrent = TWcity[0].population;
				{
				//
				unsigned short int searchC;

				//
				for(searchC = 1; searchC < cityTotal; searchC++)
					{
						//if pop greater then current
							if(TWcity[searchC].population > maxCurrent)
								{
									//assign it
										maxCurrent = TWcity[searchC].population;
								}
					}
				}

			//print all pop = current city
				printf("�H�f�̦h���������G");
				{
				//
				unsigned short int printC;

				//
				for(printC = 0; printC < cityTotal; printC++)
					{
						//if pop greater then current
							if(TWcity[printC].population == maxCurrent)
								{
									//print it
										printf("%s�]%d�H�^�@", TWcity[printC].name, TWcity[printC].population);
								}
					}
				//newline
					putchar('\n');
				}
			//
			printf("\n���׽аѾ\\��l�X\n");
			printf("�СССССССССССССССССС�\n");
		//(3)
			printf("(3)�]�������^\n�СССССССССССССССССС�\n");
			//for loop from first person to last person
				//
				unsigned int searchC;
				unsigned short int searchLimit = 15;
				//
				printf("�ѩ�ƶq�Ӧh�A�ȦC�X�̫�%d����Ƥ����ŦX�����\n", searchLimit);
				//
				for(searchC = 0; searchC < personTotal; searchC++)
					{
						//if year less than 1946
							if(searchC > personTotal - (searchLimit + 1) && TWperson[searchC].birthday.year < 1946)
								{
									printf("%s�@%s�@�{�~%hu��\n", TWperson[searchC].ID, TWperson[searchC].name, 2011 - TWperson[searchC].birthday.year);
								}
					}
			printf("\n���׽аѾ\\��l�X\n");
			printf("�СССССССССССССССССС�\n");
		//(4)
			printf("(4)�]�������^\n�СССССССССССССССССС�\n");
			//output 1
				printf("�Ҧ��x�_�������X�ͦa�G\n");
			//define a unsigned int array to save the count of people
				unsigned int popCount[400] = {0};//�}�C�j�p�����i�H�����ܼ�cityTotal�A�u��H�D�ح��w�̤j��400�N��
			//search from first person to last person to find Taipei citizens.
			{
				//
					unsigned int searchC;
				//
					for(searchC = 0; searchC < personTotal; searchC++)
						{
							//if livingPlace is Taipei
								if(TWperson[searchC].livingplace == &TWcity[0])
									{
										//for loop to search born city
											//
											unsigned searchCityC;
											//
											for(searchCityC = 0; searchCityC < cityTotal; searchCityC++)
												{
													//if birthplace same
													if(TWperson[searchC].birthplace == &TWcity[searchCityC])
														{
															//addcount
																popCount[searchCityC]++;
														}
												}

									}
						}
			}
			//output 2
				//for loop for all city
				{
					//
					unsigned int searchC;
					//
					for(searchC = 0; searchC < cityTotal; searchC++)
						{
							printf("%7u�H�X�ͩ�%s\n", popCount[searchC], TWcity[searchC].name);
						}
				}

			printf("\n���׽аѾ\\��l�X\n");
			printf("�СССССССССССССССССС�\n");
		//free memory when return
			free(TWperson);
		//�СССССССССССССССССССС�
		//�Ǧ^���e
			return true;
	}

//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void count_popult(person p[], int pTotal, city c[], int cTotal)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//var for //demo output 3
			unsigned int afterSum = 0;
		//�СССССССССССССССССССС�
		//demo output 1
			printf("��l�H�f�`�Ƭ�%d�H\n", pTotal);
		//outside for loop for first city to last city
			//
				unsigned short int cityC;
			//
				for(cityC = 0; cityC < cTotal; cityC++)
					{
						//first set population to default
							c[cityC].population = 0;
						//inside for-loop for first person to last person
																									/*test01
																										printf("%d\n", 24000000);
																									*///test01
							//
								unsigned int personC;
							//
								for(personC = 0; personC < pTotal; personC++)
									{
										//if find same city in the profile
											if(!strcmp((p[personC].birthplace)->name, c[cityC].name))
												{
													//add population
														c[cityC].population++;
												}
									}
						//demo output 2
							printf("���s�p��L��%s���H�f�Ƭ�%d�H\n", c[cityC].name, c[cityC].population);
						//for //demo output 3
							afterSum = afterSum + c[cityC].population;
					}
			//demo output 3
				printf("���s�p��L���H�f�`�ơ]���o�P��l�H�f�`�Ƭ۲��^��%d�H\n", afterSum);

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}

//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void q6main(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//definition from question
			char myStr[10] = "abcdefg", *strset[8], *strp = myStr;
			myData myd, *mydp = &myd;
			strset[4] = myd.str = strp;
		//�СССССССССССССССССССС�
		//1
			printf("(1)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				strset[4][5] = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//2
			printf("(2)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				*(strset[4] + 5) = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//3
			printf("(3)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				strp[5] = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//4
			printf("(4)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				*(strp + 5) = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//5
			printf("(5)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				myd.str[5] = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//6
			printf("(6)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				*(myd.str + 5) = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//7
			printf("(7)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				mydp->str[5] = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("���]�Ҧ����\n");
		//8
			printf("(8)\n");
			printf("�ؼЦr��쬰�G%s\n", myStr);
				*(mydp->str + 5) = 'k';
			printf("�ؼЦr��Q�קאּ�G%s\n", myStr);

		//
			printf("\n���׽аѾ\\��l�X\n");
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.10(0)
bool pauseProgram(void)
    {
        //make a line
            printf("\n�СССССССССССССССССССССССССССССССС�\n");
		//prompt A
			printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
			printf("�аݱz�n���s�B��ܡ]����ܡ^�H");
		//get action
			//���M��input buffer
			//�ݥ���w�qshort int scanfTriggered = 0;
				/*��k�@
					if (scanfTriggered == 1)
						{
							  unsigned short int getAChar;
							  while ((getAChar = getchar()) != EOF && getAChar != '\n');
						}
				*///��k�@
				//��k�G
					if (scanfTriggered == 1)
						{
							scanf("%*[^\n]");//�ᱼ�Ҧ�����Ÿ��H�~���r��
							scanf("%*c");//�ᱼ����Ÿ�
						}
				////��k�G
			//get char
				{
					unsigned short int inputChar;
					//make sure input right
						while(!((inputChar = getchar()) == 'y' || inputChar == 'Y' || inputChar == 'n' || inputChar == 'N'));
					if(inputChar == 'y' || inputChar == 'Y')
						{
							//clean moniter
								if(SYSTEM == 0)
									{
										system("cls");
									}
								else
									{
										system("clear");
									}
							return true;
						}

				}
		//return false
			return false;
    }
