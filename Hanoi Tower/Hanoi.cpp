//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
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
//global variable for print message 1 move by 1 move+counter
	long long int counterHanoi = 0;
//function prototype
	void pauseProgram();
	void Hanoi(short int n, char start, char goal, char other);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
	//call Hanoi()
		Hanoi(29, 'A', 'C', 'B');
	//print result
		printf("�B�槹���A�`�@���F%lld�B", counterHanoi);
	//pause
		//pauseProgram();
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
//Hanoi Func.
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void Hanoi(short int n, char start, char goal, char other)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
		//if Hanoi function has run to 1 plates
		if(n == 1)
			{
				//counter++
					counterHanoi++;
				//print message 1 move by 1 move+counter
					//printf("��%lld�B�G�N�@�W�h��L�q%c�W����%c�W\n", counterHanoi, start, goal);
			}
		//else continue calling 'new' Hanoi func.
		else
			{
				//think
				//assume upper plates has moved to 'other' using the 'made' Hanoi()
					Hanoi(n - 1, start, other, goal);
				//made the lowest plate move to 'goal'
					Hanoi(1, start, goal, other);
				//made the upper plates at 'other' move to 'goal'
					Hanoi(n - 1, other, goal, start);
			}

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
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

