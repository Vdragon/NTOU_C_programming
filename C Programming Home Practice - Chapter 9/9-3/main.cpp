//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G9-3�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
//�̷s��s����(Latest Update Log)�Gunknown�C
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
    int rand10(void);

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
    //for loop * 20
        short int counterI;
	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    //test
        //for loop * 20
            for(counterI = 0; counterI < 20; counterI++)
                {
                    printf("%d, ", rand10());
                }
    //pause
		pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]���{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
int rand10(void)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //random function initialization
        //�����G1.00(2)
            srand((unsigned)time(NULL));
                //now rand() is usable :D
                //rand() range: 0 ~ unsigned int MAX.

        //�СССССССССССССССССССС�




		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return rand() % 19 - 9;
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