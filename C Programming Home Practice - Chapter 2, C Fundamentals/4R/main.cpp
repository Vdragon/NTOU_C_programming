//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G8
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G
��.using printf(), fgetc()�C
��.Linux��terminal���G�S���ε��e�r��A�ҥH�|�X�{�첾�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;�]��ᤣ�i�[���ѡI�^
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
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
			printf("�@  �@�@                       \n");
			printf("���â��� *.  ..*�@��.*  . +.*  \n");
			printf(" |�� |�� ��. *��   ��  *.  .��.\n");
			printf("����������@ _/|\\_/|\\_  *. +   \n");
			printf("�ááááááԡ� �ԡԡáááá�\n");
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
