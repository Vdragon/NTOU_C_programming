//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G13-5�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(1)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G21
//�̷s��s����(Latest Update Log)�Gfix bug ok ++ �C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z�C
��.�O�oReturn 0;�C
��.��BUG���ˬdscanf�C
��.compiler�i�঳�B�z��ơB�ܼƤ�����A���n�P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
��.�bcondition statement ���n�ϥΦh��AND�BOR�V�X���P�_�y�ɩy�NAND���j���UOR�y�άA���A�_�ӡC
��.������]�G��int main(){}�~��ΰ����u��C
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//�����G1.00(0)
    #include <string.h>
//C Standard General Utilities Library
//�����G1.00(2)
	#include <stdlib.h>
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
//function prototype for//�ϵ{���Ȱ��B��
	bool pauseProgram();
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
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
	//determine the BIG5 length of the inputString
		howManyWords = strlen(inputString) / 2;
	//char array for name and surname
		char surName[5];//two Big5 char.&& null char.
		char name[7];//max three Big5 char.
	//save surname
		strncpy(surName, inputString, howManyWords == 4/*�p�G�W�r��4�Ӧr���ܴN��ܦ��Ʃm*/ ? 4 : 2);
		//remember to append a null char.!
			surName[howManyWords == 4/*�p�G�W�r��4�Ӧr���ܴN��ܦ��Ʃm*/ ? 4 : 2] = '\0';
	//save name
		strncpy(name, inputString + (howManyWords == 4/*�p�G�W�r��4�Ӧr���ܴN��ܦ��Ʃm*/ ? 4 : 2), (howManyWords == 2/*�p�G�W�r�u��2�Ӧr���ܴN��ܳ�W*/ ? 2 : 4));
		//remember to append a null char.!
			name[howManyWords == 2 ? 2 : 4] = '\0';
	//output
		printf("%s�б�%s�դh", surName, name);
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


