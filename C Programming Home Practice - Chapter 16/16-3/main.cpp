//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G21
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
��.�bcondition statement ���n�ϥΦh��AND�BOR�V�X���P�_�y�ɩy�NAND���j���UOR�y�άA���A�_�ӡC
��.������]�G��int main(){}�~��ΰ����u��C
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;

//function prototype
//function prototype for//�ϵ{���Ȱ��B��
	void pauseProgram();

//structure
    struct lightHouseData
        {
            char LHName[31];//Ten Chinese Charactor(Max in UTF-8)
            unsigned short int FoundYear;
            double towerHeight;
            double lightHeight;
            double lightLength;
            char position[76];//25 Chinese Charactors
            char form[31];//Ten Chinese Charactor
        };
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
        lightHouseData lightHouse[10] = {{"�I�Q���O��", 1896, 14.3, 31.4, 26.8, "�_���۪��m�I�Q�a��", "�����V���g"}, {"�򶩿O��", 1899, 11, 40.2, 16, "�򶩴�f", "�j����"} , {"�����O��", 1980, 12.3, 189.3, 12, "�򶩥~�������s��", "�����V���g"}, {"��q�O��", 1939, 33.3, 48.2, 25.7, "�x�F����q�m��_", "�����V���g"}, {"�F�ޮq�O��", 1902, 14.2, 97.8, 11.3, "�����F�ޮq", "�j����"}, {"�ըF�a�O��", 1898, 27.7, 36.6, 25.7, "��鿤�ըF�a", "�j����"}, {"�Z�q��O��", 1881, 24.4, 56.4, 27.2, "�̪F����K�Z�q���a��", "ű�K���"}};
    //counter for     //output for loop
        unsigned int outputC;

	//�СССССССССССССССССССС�
    //output for loop
        for(outputC = 0; lightHouse[outputC].LHName[0] != '\0'; outputC++)
            {
                printf("%s\t""�褸%d\t""%.1lf""M\t""%.1lf""M\t""%.1lf""M\t""%s\t%s""\n", lightHouse[outputC].LHName, lightHouse[outputC].FoundYear, lightHouse[outputC].towerHeight, lightHouse[outputC].lightHeight, lightHouse[outputC].lightLength, lightHouse[outputC].position, lightHouse[outputC].form);
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

