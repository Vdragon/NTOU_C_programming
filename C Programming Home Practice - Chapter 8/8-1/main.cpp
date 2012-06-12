//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 8-1�C
//�{���ԭz(Program Description)�GDefine a 100-element integer array myArray[]. Set the values of all the elements to be 1.�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G15
//�̷s��s����(Latest Update Log)�G�C
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
//debug
	#define debug 0
//--------------���ҳ]�w(Enviroment Settings)--------------
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
	//define
		short int myArray[100];
	//debug define
		short int counterDebug;
	//assign 1 to all array
		short int counterA;
	//�СССССССССССССССССССС�
	//���D
	//�����G1.00(4)
      printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 8-1�C\n");
      printf("�{���ԭz(Program Description)�G\nDefine a 100-element integer array myArray[]. Set the values of all the elements to be 1.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");
	//�СССССССССССССССССССС�
	//assign 1 to all array
		for(counterA = 0 ; counterA < 100 ; counterA++)
			{
				//assign
					myArray[counterA] = 1;
			}
	//debug
		if(debug == 1)
			{
				for(counterDebug = 0; counterDebug < 100 ; counterDebug++)
					{
						printf("myArray[%hd] = %hd\n", counterDebug, myArray[counterDebug]);
					}
			}

	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}

//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(23)
void pauseProgram()
{
	//make a line
     printf("\n�СССССССССССССССССССССССССССССССС�\n");
	/*enable by changing both to //
		//��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
			printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
			system("pause");
	*/
		//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
			//���M��input buffer
			//�ݥ���w�qshort int scanfTriggered = 0;
			    //��k�@
			    /*enable by changing both to //
					if (scanfTriggered == 1)
					    {
							  short int ch;
							  while ((ch = getchar()) != EOF && ch != '\n');
						}
				*/
				//��k�G
				//enable by changing both to //
					if (scanfTriggered == 1)
						{
							  scanf("%*[^\n]");
							  scanf("%*c");
						}
				//
			//enable by changing both to //
			//print message
				printf("��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
			//get char from keyboard
				fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
			//
}
