//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G9-6�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G23
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*��s����(Change Log)�G�C
1.00(0) initial release


*///��s����(Change Log)�G�C
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
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	unsigned short int scanfTriggered = 0;

//function prototype
//function prototype for pauseProgram
	bool pauseProgram();
//function expected
	void indexOfMax(int inputArray[], unsigned int size);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(11)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{restartProgram:
	//�ŧi�P�w�q(Declaration & Definition)
	//int array for testing
		int randArray[100];

	//�СССССССССССССССССССС�
	//random function initialization
	//�����G1.00(2)
		srand((unsigned)time(NULL));
			//now rand() is usable :D
			//rand() range: 0 ~ unsigned int MAX.
	//assign rand number//print value
	{
		//
			unsigned int assranC;
		//
			for(assranC = 0; assranC < 100; assranC++)
				{
					randArray[assranC] = rand() % 20;
					//print value
						printf("%u\t%u\n", assranC, randArray[assranC]);
				}
	}
	////assign rand number//print value
	//callfunc
		indexOfMax(randArray, sizeof(randArray) / sizeof(int));

	//pauseProgram
		if(pauseProgram())
			{
				goto restartProgram;
			}

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
void indexOfMax(int inputArray[], unsigned int size)
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//define maxCurrent
			int maxCurrent = inputArray[0];
		//�СССССССССССССССССССС�
		//for loop to find Max.
		{
			unsigned int findC;
			for(findC = 1; findC < size; findC++)
				{
					if(inputArray[findC] > maxCurrent)
						{
							maxCurrent = inputArray[findC];
						}
				}
		}
		////for loop to find Max.
		//search array again to print out all max
		{
			//
				printf("�]�t�̤j�Ȫ��ڼС]���O�^���G");
			//
				unsigned int searchC;
			//
				for(searchC = 0; searchC < size; searchC++)
					{
						if(inputArray[searchC] == maxCurrent)
							{
								printf("%d\t", searchC);
							}
					}
		}
		////search array again to print out all max
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.10(0)
bool pauseProgram()
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
