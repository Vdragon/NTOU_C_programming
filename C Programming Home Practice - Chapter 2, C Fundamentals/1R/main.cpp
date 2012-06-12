//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-3�C
//�{���ԭz(Program Description)�GNow we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:�C
//�{������(Program Version)�G1.00(2)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
/*��s����(Change Log)�G
1.00(2)
	1.�ץ�pause
	2.�ץ�main()


*/
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

//C Standard General Utilities Library
//�����G1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
//--------------�ŧi�P�w�q(Declaration & Definition)--------------
int seatNo, groupNo;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-3�C\n");
printf("�{���ԭz(Program Description)�G\nNow we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//prompt
//�e����X
//�����G1.00(0)
	printf("�п�J�y���G");
//�q��L��J
//�����G1.00(1)
scanf("%d", &seatNo);

//think
/*
1	2	3	4	5	6
1	2	3	4	0	1

*/
	groupNo = (seatNo - 1) % 5 + 1;

//output
//prompt
//�e����X
//�����G1.00(0)
	printf("�A�b��%d�աC", groupNo);

//pause
	pauseProgram();
//return 0
	return 0;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(22)
void pauseProgram()
{
	//make a line
     printf("\n�СССССССССССССССССССССССССССССССС�\n");
	/*enable by changing both to //
		//��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
			printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
			system("pause");
	*/
	//enable by changing both to //
		//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
			//���M��input buffer
			//�ݥ���w�qshort int scanfTriggered = 0;
			    //��k�@
					if (scanfTriggered == 1)
					    {
							  short int ch;
							  while ((ch = getchar()) != EOF && ch != '\n');
						}
				//��k�G
					if (scanfTriggered == 1)
						{
							  scanf("%*[^\n]");
							  scanf("%*c");
						}
			//print message
				printf("��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
			//get char from keyboard
				fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
	//
}
