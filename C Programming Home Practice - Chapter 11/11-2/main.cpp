//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G11-2�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G18
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    //void swap(double *, double *);
    void swap(long int * ,long int * );
//--------------�D�n�{���X(Main Code)--------------
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G11-2�C\n");
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
        //double num1 = 1, num2 = 100;
        long int num1 = 1, num2 = 100;
	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    //call swap func for testing
        //printf("Before:%lf, %lf\n", num1, num2);
        printf("Before:%ld, %ld\n", num1, num2);
        swap(&num1, &num2);
        //printf("After:%lf, %lf\n", num1, num2);
        printf("After:%ld, %ld\n", num1, num2);
	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]���{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
	}
//swap func.(double�q�Ϊ���)
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void swap(double * a,double * b)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //mem
            double mem;

		//�СССССССССССССССССССС�
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return;
	}
//swap func.(��ƱM�Ϊ���)
//�����G1.00(0)
/*
returnType functionName(auguments)
*/
void swap(long int * a,long int * b)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //mem
            long int mem;

		//�СССССССССССССССССССС�
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return;
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