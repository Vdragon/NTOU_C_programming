//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals(3)�C
//�{���ԭz(Program Description)�GPrint ASCII picture�C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G6
//�̷s��s����(Latest Update Log)�Gdebug�C
/*
��L(Other)�G
��.uses printf(), fgetc()
��.������editor��binary��ܪ����G���ۦP�H
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ƶ�(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(1)
	int main(void)
	{
		//�e����X
		//�����G1.00(0)
			printf("�~�СССССССССССССССССССССССССССССССССССТ�\n");
			printf("�x�@�@�@�@. �@�@ .�@�d �� �� �� �H �� �� �� �� �_ �� �� �� �� �� �� �� �� �x\n");
			printf("�x .�@�@�@�@�@. �@�@�� �@ �� �� �� �� �L �� �� �R �B �� �� �i �� �s �� �� �x\n");
			printf("�x�@ .�@�@�@�@�@�@. �@ �H �j �� �d �� �v �� �b �� �� ã �� �O �� �� �X �� �x\n");
			printf("�x�@�@�@���@. �@�@�@�` �� �� �� �w �V �C �A �H �M �� �� �� �� �W �C �� �q �x\n");
			printf("�x�@�@. �@�@�@�@�@�@�S �[ �� �� �� �O �� �C �� �v �H �� �k �~ �c �� �� �Y �x\n");
			printf("�x�@�@�@�@�@�@ .�@�@�C �A �I �� �X �� �� �� �H �A �C �t �h �H �� �C �H �� �x\n");
			printf("Ĭ .�@�@�@. �@�@�@�@         �A �A �� �� ��          �A �A    �A          �x\n");
			printf("���@�@ .�@�@�@�@�@ .�@       .  �@ �H �� �A                               �x\n");
			printf("���СССССССССССССССССССССССССССССССССССТ�\n");
		//�s�y�Ȱ��B��
		//�����G1.00(3)
		printf("�Ы�Enter�~�� ");
			//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
				//system("pause");
			//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
				fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
