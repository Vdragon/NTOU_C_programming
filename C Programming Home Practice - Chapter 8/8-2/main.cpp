//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 8-2。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：16
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
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(8)
//軟體的運行從main函數開始
	int main(void)
	{
	//宣告與定義(Declaration & Definition)
	//short int array
		short int reverseRank[20];
	//for-loop for define
		short int counterA;
		short int counterB;
	//－－－－－－－－－－－－－－－－－－－－－
	//for-loop for define
		for(counterA = 20, counterB = 0; counterB < 20; counterB++, counterA--)
			{
				//define
					reverseRank[counterB] = counterA;
				//print check
					//螢幕輸出函數
					//版本：1.00(9)
					//功能：在提示符位置處輸出字串
					/*用法（全形符號跟其內之內容皆為註解）：
					printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）』", 『格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』);
					*/
					/*Escape sequence範例：
					   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
					   \t→(tab)輸出一個[tab]
					   \a→(alarm)發出一個系統聲音
					   \\→(black slash)輸出一個反斜線 (\)
					   \"→(double quote)輸出一個double quote(")
					   */
					/*Format conversion範例：
					   %（h）（Ａ）d→（short）（以Ａ個字元表示的）(decimal number)十進位整數
					   %（（Ａ）.（Ｂ））f→（小數點前Ａ位後Ｂ位之）(float number)浮點數
					   %c→(char)字元
					   %s→(string)字串
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
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(24)
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
