//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 11-1�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G16
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

//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
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
		int y, z;
		int * myPtr1, * myPtr2;


	//�СССССССССССССССССССС�
	//predict 1:12,7,12,7
	//predict 2:13,13,13,13
	//predict 3:14,6,14,14
	//make Pointers point y, z
		myPtr1 = &y;
		myPtr2 = &z;
	//first
		y = 12;z = 7;
		printf("First: %d, %d, %d, %d\n", y, z, *myPtr1, *myPtr2);

	//second
		y = 13;z = 6;
		*myPtr2 = *myPtr1;
		printf("First: %d, %d, %d, %d\n", y, z, *myPtr1, *myPtr2);
	//third
		y = 14;z = 6;
		myPtr2 = myPtr1;
		printf("First: %d, %d, %d, %d\n", y, z, *myPtr1, *myPtr2);
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
//�����G1.00(24)
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
