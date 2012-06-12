//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-8。
//程式敘述(Program Description)：Input an integer n. Check if it is a 5-digit even number (such as 12348, 96732, etc.) or 0. 。
//程式版本(Program Version)：1.00(0)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
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

//--------------宣告與定義(Declaration & Definition)--------------
int num;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
	   //標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-8。\n");
printf("程式敘述(Program Description)：\nInput an integer n. Check if it is a 5-digit even number (such as 12348, 96732, etc.) or 0. 。\n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("程式修訂號(Program Revision Number)：\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//input
	printf("請輸入一個數字：");
	scanf("%d", &num);

//think&output
   if((num  <=10000 || num >99999 || num% 2 == 1) && num != 0)
   {
      	printf("非也，這不是零或五位數的偶數的情形。 \n");
   }
   else
   {
	printf("沒錯，這是零或五位數的偶數的情形。 \n");
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
