//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：程式作業三 Programming Project 2.7。
//程式敘述(Program Description)：Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
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

//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
      int scanfTriggered = 0;
      int input, num20, num10, num5, num1;
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：程式作業三 Programming Project 2.7。\n");
      printf("程式敘述(Program Description)：\nWrite a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
//debug loop
//while(1)
//{
		//prompt
			printf("Enter a dollar amount:");
			scanfTriggered = 1;
			scanf("%d", &input);
			//test
			//printf("%d", input);
		
		//think
			//20
			num20 = input / 20;
			input = input - num20 * 20;
				//test
				//printf("%d\n", num20);
				//printf("%d\n", input);
			//10
			num10 = input / 10;
			input = input - num10 * 10;
			//5
			num5 = input / 5;
			input = input - num5 * 5;
			//1
			num1 = input;

		//output
			printf("$20 bills: %d\n", num20);
			printf("$10 bills: %d\n", num10);
			printf(" $5 bills: %d\n", num5);
			//last concluded new line
			printf(" $1 bills: %d", num1);

//printf("\n");}


















//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(14)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
         /*
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //方法二
         //需全域定義int scanfTriggered = 0;
         if (scanfTriggered ==1)
         {
			scanf("%*[^\n]");
            scanf("%*c");
		 }
		
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}

