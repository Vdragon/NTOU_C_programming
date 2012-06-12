//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 8-1。
//程式敘述(Program Description)：Define a 100-element integer array myArray[]. Set the values of all the elements to be 1.。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：15
//最新更新紀錄(Latest Update Log)：。
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
//debug
	#define debug 0
//--------------環境設定(Enviroment Settings)--------------
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
	//define
		short int myArray[100];
	//debug define
		short int counterDebug;
	//assign 1 to all array
		short int counterA;
	//－－－－－－－－－－－－－－－－－－－－－
	//標題
	//版本：1.00(4)
      printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 8-1。\n");
      printf("程式敘述(Program Description)：\nDefine a 100-element integer array myArray[]. Set the values of all the elements to be 1.。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
	//－－－－－－－－－－－－－－－－－－－－－
	//assign 1 to all array
		for(counterA = 0 ; counterA < 100 ; counterA++)
			{
				//assign
					myArray[counterA] = 1;
			}
	//debug
		if(debug == 1)
			{
				for(counterDebug = 0; counterDebug < 100 ; counterDebug++)
					{
						printf("myArray[%hd] = %hd\n", counterDebug, myArray[counterDebug]);
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
//版本：1.00(23)
void pauseProgram()
{
	//make a line
     printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
	/*enable by changing both to //
		//方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
			printf("顯示運行結果，程式暫停運行\n");
			system("pause");
	*/
		//方法二：運用輸入function（需#include <stdio.h>）
			//先清除input buffer
			//需全域定義short int scanfTriggered = 0;
			    //方法一
			    /*enable by changing both to //
					if (scanfTriggered == 1)
					    {
							  short int ch;
							  while ((ch = getchar()) != EOF && ch != '\n');
						}
				*/
				//方法二
				//enable by changing both to //
					if (scanfTriggered == 1)
						{
							  scanf("%*[^\n]");
							  scanf("%*c");
						}
				//
			//enable by changing both to //
			//print message
				printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
			//get char from keyboard
				fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
			//
}
