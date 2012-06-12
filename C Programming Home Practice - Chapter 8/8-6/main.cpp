//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G8-6�C
//�{���ԭz(Program Description)�GDefine a 100-element integer array score[] and set the values as random numbers in the range of 0 ~ 99.Calculate the statistics of students' scores and graph it with histograms. �C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G23
//�̷s��s����(Latest Update Log)�Gbuild ok!�C
/*��s����(Change Log)�G�C
1.00(0)�@�}�l�M��
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

//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(11)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{restartProgram:
	//�ŧi�P�w�q(Declaration & Definition)
	//define an int array for storing score
		unsigned short int score[100];
	//�СССССССССССССССССССС�
	//init. the data from first person to last person
		//for loop for assigning rand. value
		{
			//counter for looping
				unsigned short int assignC;
															/*test sizeof
																printf("size of score is %d--%d\n", sizeof(score), sizeof(score) / sizeof(short int));
																//result is 200--100
															*///test sizeof
			//assign loop
				for(assignC = 0; assignC < sizeof(score) / sizeof(short int); assignC++)
					{
						//assign from 0 to 100
							score[assignC] = rand() % 101;

					}
																	/*breakpoint
																		printf("\n");
																	*///breakpoint
			////assign loop
		}////for loop for assigning rand. value
	//research the value of the data using switch
		//define an int array for storing stars
			unsigned short int stars[11] = {0};//including 100~100
		//use switch to accumulate stars in loop of all person
		{
			unsigned short int searchC;
			for(searchC = 0; searchC < sizeof(score) / sizeof(short int); searchC++)
				{
					switch(score[searchC] / 10)
						{
							case 10 : stars[10]++ ; break;
							case 9  : stars[9]++ ; break;
							case 8  : stars[8]++ ; break;
							case 7  : stars[7]++ ; break;
							case 6  : stars[6]++ ; break;
							case 5  : stars[5]++ ; break;
							case 4  : stars[4]++ ; break;
							case 3  : stars[3]++ ; break;
							case 2  : stars[2]++ ; break;
							case 1  : stars[1]++ ; break;
							case 0  : stars[0]++ ; break;

						};
				}

		}
		////use switch to accumulate stars in loop of all person
	////research the value of the data using switch
	//output graph
	{
		//print title
			printf("�d��	�H��	�Ϫ�\n");
		//print others using for loops from 0~10
			short int titleC;
			for(titleC = 10; titleC >= 0; titleC--)
				{
					printf("%2d~%2d	%-7d", titleC * 10, titleC * 10 + 9, stars[titleC]);
					//print stars using loops
					{
						unsigned short int starPrintC;
						for(starPrintC = 0; starPrintC < stars[titleC]; starPrintC++)
							{
								if(starPrintC % 5 == 0)
									{
										putchar(' ');
									}
								putchar('*');
							}
					}
					////print stars using loops
					//a new line
						putchar('\n');
				}

		////print others using for loops
	}
	////output graph
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
