//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�{���@�~�� [099570xx_ph6.cpp]�C
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
//Math function(Unknown)
//�����G1.00(0)
	#include <math.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 1;//���ܰ��D�ءA�j��N���@
//function prototype
	void pauseProgram();
    double vector_length(double a[], int n);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)
    //code from the problem
        const int dimension = 10;
        double v[dimension];
        int i;
	//�СССССССССССССССССССС�
    //code from the problem
        printf("�п�J�@�Ӻ��׬� %d ���V�q (Please input a %d-dimension vector):\n", dimension, dimension);
        for(i = 0; i < dimension; i++)
            {
                printf("�� %d ����: (Dimension %d)", i+1, i+1);
                scanf("%lf", &v[i]);
            }
        printf("�o�ӦV�q�����׬�:%f\n", vector_length(v, dimension));
	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
double vector_length(double a[], int n)
    {
		//�ŧi�P�w�q(Declaration & Definition)
		//counter for for-loop
            short int counterA;
            double lengthSquare = 0;
		//�СССССССССССССССССССС�
        //for-loop for read array
            for(counterA = 0; counterA < n; counterA++)
                {
                    lengthSquare = lengthSquare + pow(a[counterA], 2);
                }
        //return value
            return sqrt(lengthSquare);
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
