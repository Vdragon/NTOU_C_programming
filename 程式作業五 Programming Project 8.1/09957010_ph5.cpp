//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：程式作業五 Programming Project 8.1。
//程式敘述(Program Description)：Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated: 。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：14
//最新更新紀錄(Latest Update Log)：build ok(52min)。
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
   int digit_seen[10] = {0};
   int repeat[10] = {0};
   int digit;
   long int n;
   int countA = 0;
   int token = 0;

//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：程式作業五 Programming Project 8.1。\n");
      printf("程式敘述(Program Description)：\nModify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated: 。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

	//prompt
   printf("Enter a number: ");
   scanfTriggered = 1;
   scanf("%ld", &n);

   //think
   while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
				{//repeated
							//test ok
							//printf("Here!\n");
				token = 1;
				repeat[digit] = 1;
				}
      digit_seen[digit] = 1;
      n /= 10;
   }



//output
   if (token == 1)
   {
   	printf("Repeated digit(s):");
		while(countA <  10)
		{
			if(repeat[countA] == 1)
			{
				printf(" %d", countA);

			}
				countA++;
		}

   }
   else
      printf("No repeated digit");



//}













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

