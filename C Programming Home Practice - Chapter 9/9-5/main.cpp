//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
//�̷s��s����(Latest Update Log)�G�C
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
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
	
//C Standard General Utilities Library
//�����G1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
	#include <stdlib.h>

//Date and time functions Library
//�����G1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
	int intArrayMax(int input[]);
//--------------�D�n�{���X(Main Code)--------------
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G�C\n");
          printf("�{���ԭz(Program Description)�G\n�C\n");
          printf("�{������(Program Version)�G1.00(0)\n");
          printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
          printf("�СССССССССССССССССССССССССССССССС�\n");
    }

//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
	/*test01
		int a[10] = {0};
	*///test01
	//counter for //while loop for assign
		unsigned short int assignC;
	//array for testing
		int test[10];
	//counter for //print test array
		unsigned short int printC;
	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
	/*test01
		printf("%d\n", sizeof(a) / 4);
	*///test01
	//assign rand num to test array
		//random function initialization
		//�����G1.00(2)
			srand((unsigned)time(NULL));
				//now rand() is usable :D
				//rand() range: int Min ~ int MAX?
		//while loop for assign
			assignC = 0;
			while(assignC < sizeof(test) / sizeof(test[0])/*size for int unit*/)
				{
					//assign
						test[assignC] = rand() % 20;
					//increment
						assignC++;
				}
		//for loop for print test array
			for(printC = 0; printC < sizeof(test) / sizeof(test[0])/*size for int unit*/; printC++)
				{
					//printf
						printf("@%d", test[printC]);
				}
			//last new line
				printf("\n");
		//print MAX
			printf("Max = %d", intArrayMax(test));
	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]��{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
	}
int intArrayMax(int input[])
	{
		//�ŧi�P�w�q(Declaration & Definition)
		//maxCurrent
			int maxCurrent = input[0];
		//counter for loop
			unsigned short int countA;
		//�СССССССССССССССССССС�
		//read 2~last space
			//for loop from second space to last
				for(countA = 1; countA < 10/*sizeof(input) / sizeof(input[0]*/; countA++)
					{
						//if second space smaller than maxCurr
							if(input[countA] > maxCurrent)
								{
									//then assign it as *new* maxCurr
										maxCurrent = input[countA];
								}
					}
		/*test1
			printf("\nDEBUG = %d\n", sizeof(input) / sizeof(input[0]));
		*///test1
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return maxCurrent;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n�СССССССССССССССССССССССССССССССС�\n");
        /*�}��
            //��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
                printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
                system("pause");
        */
            //��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
                //���M��input buffer
                //�ݥ���w�qshort int scanfTriggered = 0;
                    //��k�@
                    /*�}��
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //��k�G
                    //�}��
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //�}��
                //print message
                    printf("��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
                //get char from keyboard
                    fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
                  //
    }
