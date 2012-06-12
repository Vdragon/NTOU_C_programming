//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 9-1�C
//�{���ԭz(Program Description)�GWrite a function CtoF() to convert Celsius to Fahrenheit.\nThe only parameter of this function is the degree on\nthe Celsius scale.\nIt returns the corresponding degree on the Fahrenheit scale.\nThe formula to convert from Celsius to Fahrenheit is F = (9 / 5) C + 32.\nBoth the parameter and the return value are floating point numbers.\nTest your function with degrees from -40 to 120. �C
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
	//define CtoF()
		double CtoF(float celScale);
		float celScale;
	//�СССССССССССССССССССС�
	//���D
	//�����G1.00(4)
      printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 8-1�C\n");
      printf("�{���ԭz(Program Description)�G\nWrite a function CtoF() to convert Celsius to Fahrenheit.\nThe only parameter of this function is the degree on\nthe Celsius scale.\nIt returns the corresponding degree on the Fahrenheit scale.\nThe formula to convert from Celsius to Fahrenheit is F = (9 / 5) C + 32.\nBoth the parameter and the return value are floating point numbers.\nTest your function with degrees from -40 to 120. �C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");
	//�СССССССССССССССССССС�
	//print title
		printf("C\tF\n");
	//for-loop init -40 last 120
		for(celScale = -40 ; celScale <= 120 ; celScale++)
			{
				//print cel & far value
					printf("%hd\t%.6lf\n", (short int)celScale, CtoF(celScale));
			}
	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}

//CtoF Func.
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
double CtoF(float celScale)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�




		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return 9.0 / 5 * celScale + 32;
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
