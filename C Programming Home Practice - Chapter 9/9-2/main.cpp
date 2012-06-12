//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：9-2。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：17
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
    void printSymbol(char, int);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
//partial code is given by the question
int main()
	{
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
    //partial code is given by the question
        printSymbol('$', 13);//print out 13 $'s
        printSymbol('@', 20);//print out 20 @'s
        printSymbol('&', 7);//print out 7 &'s

	//pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void printSymbol(char symbol, int times)
	{
		//宣告與定義(Declaration & Definition)
        //counter for//for-loop running times
            int counterA;
		//－－－－－－－－－－－－－－－－－－－－－
        //for-loop running times
            for(counterA = 1; counterA <=times; counterA++)
                {
                    printf("%c", symbol);
                }
        //new line
            printf("\n");
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return;
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(25)
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
