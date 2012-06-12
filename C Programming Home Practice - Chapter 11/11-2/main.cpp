//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：11-2。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：18
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    //void swap(double *, double *);
    void swap(long int * ,long int * );
//--------------主要程式碼(Main Code)--------------
//標題輸出函數
//版本：1.00(5)
void printTitle()
    {
          printf("程式名稱(Program Name)：11-2。\n");
          printf("程式敘述(Program Description)：\n。\n");
          printf("程式版本(Program Version)：1.00(0)\n");
          printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
          printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
    }

//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
int main(void)
	{
	//宣告與定義(Declaration & Definition)
        //double num1 = 1, num2 = 100;
        long int num1 = 1, num2 = 100;
	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    //call swap func for testing
        //printf("Before:%lf, %lf\n", num1, num2);
        printf("Before:%ld, %ld\n", num1, num2);
        swap(&num1, &num2);
        //printf("After:%lf, %lf\n", num1, num2);
        printf("After:%ld, %ld\n", num1, num2);
	//pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
	}
//swap func.(double通用版本)
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void swap(double * a,double * b)
	{
		//宣告與定義(Declaration & Definition)
        //mem
            double mem;

		//－－－－－－－－－－－－－－－－－－－－－
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return;
	}
//swap func.(整數專用版本)
//版本：1.00(0)
/*
returnType functionName(auguments)
*/
void swap(long int * a,long int * b)
	{
		//宣告與定義(Declaration & Definition)
        //mem
            long int mem;

		//－－－－－－－－－－－－－－－－－－－－－
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return;
	}


//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
        /*開關
            //方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
                printf("顯示運行結果，程式暫停運行\n");
                system("pause");
        */
            //方法二：運用輸入function（需#include <stdio.h>）
                //先清除input buffer
                //需全域定義short int scanfTriggered = 0;
                    //方法一
                    /*開關
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //方法二
                    //開關
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //開關
                //print message
                    printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
                //get char from keyboard
                    fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
                  //
    }
