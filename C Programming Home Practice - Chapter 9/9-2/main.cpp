//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G9-2�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G17
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
    void printSymbol(char, int);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
//partial code is given by the question
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
    //partial code is given by the question
        printSymbol('$', 13);//print out 13 $'s
        printSymbol('@', 20);//print out 20 @'s
        printSymbol('&', 7);//print out 7 &'s

	//pause
		pauseProgram();
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
void printSymbol(char symbol, int times)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //counter for//for-loop running times
            int counterA;
		//�СССССССССССССССССССС�
        //for-loop running times
            for(counterA = 1; counterA <=times; counterA++)
                {
                    printf("%c", symbol);
                }
        //new line
            printf("\n");
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(25)
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
