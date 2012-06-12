//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-3。
//程式敘述(Program Description)：Input an integer n. If it is a multiple of 5 or 7, print out the message "五或七的倍數！我的幸運數字！(Its a multiple of 5 or 7, my lucky number!)" 。
//程式版本(Program Version)：1.00(0)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
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

//--------------宣告與定義(Declaration & Definition)--------------
int inputNum;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{

//標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-3。\n");
printf("程式敘述(Program Description)：\nInput an integer n. If it is a multiple of 5 or 7, print out the message \"五或七的倍數！我的幸運數字！(Its a multiple of 5 or 7, my lucky number!)\" \n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("程式修訂號(Program Revision Number)：\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");

//input
//螢幕輸出
//版本：1.00(3)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）」, 「格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』");
*/
/*Escape sequence範例：
   \n→(new line)換行字元，相當於鍵入〔Ｅｎｔｅｒ／〕鍵
   \t→(tab)輸出一個[tab]
   \a→(alarm)發出一個系統聲音
   \\→((black slash)輸出一個反斜線 (\)
   \"→((double quote)輸出一個double quote(")
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
printf("請輸入一個數字：");
//從鍵盤輸入
//版本：1.00(2)
//功能：在游標位置處輸出字串
/*用法（全形符號跟其內之內容皆為註解）：
scanf("『鍵盤輸入的內容（包括Format conversion格式轉換字元）」,  &「格式轉換字元代表之變數名』");
*/
/*Format conversion範例：
   %d→(decimal number)十進位整數
   %f→(float number)浮點數
   %lf
   %.2f
*/
scanf("%d", &inputNum);

//think+output
if(inputNum % 7 == 0 || inputNum % 5 == 0)
      {
         printf("五或七的倍數！我的幸運數字！ ");
      }


//使程式暫停運行
//版本：1.00(7)

	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         //方法二
            //scanf("%*[^\n]");
            //scanf("%*c");
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
