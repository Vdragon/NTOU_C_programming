//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G16-1�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z�C
��.�O�oReturn 0;�C
��.��BUG���ˬdscanf�C
��.compiler�i�঳�B�z��ơB�ܼƤ�����A���n�P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
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
//structure defined
    struct fishdata/*datatype*/
                {
                    char chnName[20];//a string
                    char engName[25];//a string including more than one word
                    char sciName[25];//a string including more than one word
                    double avgLength;//not a integer
                    double avgWeight;//not a integer
                    char environment;//character; 's' for ���� seawater and 'f' for �H�� freshwater
                };
//--------------�D�n�{���X(Main Code)--------------
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G�C\n");
          printf("�{���ԭz(Program Description)�G\n�C\n");
          printf("�{������(Program Version)�G1.00(0)\n");
          printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
          printf("�СССССССССССССССССССССССССССССССС�\n");
    }

//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
    //array for setting structed data
        fishdata database[5];
	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    //input
    {
        //counter for//for loop 5 times
            unsigned short int counter5;
        //for loop 5 times to input
        for(counter5 = 0; counter5 < 5; counter5++)
            {
                //
                    printf("�п�J ����W�G");
                    scanf("%s%*c", &database[counter5].chnName);
                //
                    printf("�п�J �^��W�G");
                    scanf("%s%*c", &database[counter5].engName);
                //
                    printf("�п�J �ǦW�G");
                    scanf("%s%*c", &database[counter5].sciName);
                //
                    printf("�п�J ���������G");
                    scanf("%lf%*c", &database[counter5].avgLength);
                //
                    printf("�п�J �����魫�G");
                    scanf("%lf%*c", &database[counter5].avgWeight);
                //
                    printf("�п�J �i������('s' for ���� seawater and 'f' for �H�� freshwater)�G");
                    scanf("%c%*c", &database[counter5].environment);
            }
    }
    //output
    {
        //counter for//for loop to output
            unsigned short int outputC;

        //for loop to output
            for(outputC = 0; outputC < 5; outputC++)
                {
                    printf("%s�O�@��%s���A�^��s %s�A�ǦW�O %s�A�����i���� %l.1f �������A%l.1f ���J���C\n", database[outputC].chnName, database[outputC].environment =='s'?"����":"�H��", database[outputC].engName, database[outputC].sciName, database[outputC].avgLength, database[outputC].avgWeight);
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
//�����G1.00(27)
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
