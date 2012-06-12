//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G13-6�C
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
//string.h
//�����G1.00(0)
    #include <string.h>
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
//func. for checking 2 word surname
	bool check2surN(char inputName[]);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(11)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{restartProgram:
	//�ŧi�P�w�q(Declaration & Definition)
	//char. array for saving input string
		char inputString[13];//four UTF-8 characters MAX., include \0

	//�СССССССССССССССССССС�
	//prompt
	//�����G1.00(0)
		printf("�п�J�m�W�G");
		scanfTriggered = 1;
		scanf("%s", inputString);
	{
	//declare
		unsigned short int howManyWords;
		char * namePosition;
	//determine the BIG5 length of the inputString
		howManyWords = strlen(inputString) / 2;
	//char array for name and surname
		char surName[5];//two Big5 char.&& null char.
	//save surname
		//if �ڶ� is full name
			if(howManyWords == 2)
				{
					//surname should always be one word
						strncpy(surName, inputString, 2);
					//end this string with null char.
						surName[2] = '\0';
					//let namePosition be next word
						namePosition = inputString + 2;
				}
			else if(check2surN(inputString))
				{
					//copy to array
						strncpy(surName, inputString, 4);
					//end this string with null char.
						surName[4] = '\0';
					//let namePosition be next word
						namePosition = inputString + 4;
				}
			else
				{
					//copy surname
						strncpy(surName, inputString, 2);
					//end this string with null char.
						surName[2] = '\0';
					//let namePosition be next word
						namePosition = inputString + 2;
				}


	//output
		printf("%s�б�%s�դh", surName, namePosition);
	}
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
bool check2surN(char inputName[])
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//define two-char. surnames
			const char * twoSurnames[40] = {"�a��", "�ڶ�", "�q��", "�q�{", "�q��", "�q�F", "�W�x", "�L��", "�Ϧ�", "�Ĥ�", "��C", "����", "�F��", "���]", "�s�]", "��]", "���]", "�u�]", "���]", "�}�e", "�t��", "�[�C", "�Ѹ�", "�F��", "���", "����", "�L�J", "�E�S", "�ʨ�", "�ݤ�", "���M", "�Өj", "�I��", "�B�O", "�O��", "�E�_", "�Y��", "���", "�n�c", "�`�C"};
		//define a check space
			//char checkString[5];//2 BIG5 string
		//�СССССССССССССССССССС�
		//find 2char surname serially from first to last
			//first copy first two words from input
				//strncpy(checkString, inputName, 4);
				//close string
					//checkString[5] = '\0';
			//loop check
				//
					unsigned short int checkC;
				//
					for(checkC = 0; checkC < sizeof(twoSurnames) / sizeof(char * ); checkC++)
						{
							if(!strncmp(twoSurnames[checkC], inputName, 4))
								{
									return true;
								}
						}


		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return false;
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
