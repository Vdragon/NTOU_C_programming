//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G7-5�C
//�{���ԭz(Program Description)�GDefine a single-precision floating point variable numf.Ask the user to key in a real number, multiple it with 3, and then print the value out in brackets. �C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G23
//�̷s��s����(Latest Update Log)�G�C
/*��s����(Change Log)�Gbuild ok�C
1.00(0)�@�}�l��@
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
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G7-5�C\n");
          printf("�{���ԭz(Program Description)�G\nDefine a single-precision floating point variable numf.Ask the user to key in a real number, multiple it with 3, and then print the value out in brackets. �C\n");
          printf("�{������(Program Version)�G1.00(0)\n");
          printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
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
	//define input
		float numf;
	//�СССССССССССССССССССС�
	//call print title function
		printTitle();
	//���ܿ�J
	//�����G1.00(1)
		printf("�п�J�@�ӹ�ơG");
		scanfTriggered = 1;
		scanf("%f", &numf);
	//output
		printf("�����T���O %.3f�C ", numf * 3);
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
