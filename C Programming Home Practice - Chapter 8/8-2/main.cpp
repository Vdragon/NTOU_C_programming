//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 8-2�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G16
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
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
	//short int array
		short int reverseRank[20];
	//for-loop for define
		short int counterA;
		short int counterB;
	//�СССССССССССССССССССС�
	//for-loop for define
		for(counterA = 20, counterB = 0; counterB < 20; counterB++, counterA--)
			{
				//define
					reverseRank[counterB] = counterA;
				//print check
					//�ù���X���
					//�����G1.00(9)
					//�\��G�b���ܲŦ�m�B��X�r��
					/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
					printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�z", �y�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z);
					*/
					/*Escape sequence�d�ҡG
					   \n��(new line)����r���A�۷����J�e�Ӣ���������f��
					   \t��(tab)��X�@��[tab]
					   \a��(alarm)�o�X�@�Өt���n��
					   \\��(black slash)��X�@�Ӥϱ׽u (\)
					   \"��(double quote)��X�@��double quote(")
					   */
					/*Format conversion�d�ҡG
					   %�]h�^�]�ϡ^d���]short�^�]�H�ϭӦr����ܪ��^(decimal number)�Q�i����
					   %�]�]�ϡ^.�]�С^�^f���]�p���I�e�Ϧ��Ц줧�^(float number)�B�I��
					   %c��(char)�r��
					   %s��(string)�r��
					*/
					printf("reverseRank[%2hd] = %2hd\n", counterB, counterA);
				//test address --debug
					if(debug == 1)
						 {
							printf("reverseRank[%2hd] = %x\n", counterB, &reverseRank[counterB]);
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
