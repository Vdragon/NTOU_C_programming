//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-10。
//程式敘述(Program Description)：Input two integers a and b. Check if one integer is a multiple of the other integer. Print out the result.。
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
int intA, intB;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
	   //標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 5, if...else and switch statements-10。\n");
printf("程式敘述(Program Description)：\nInput two integers a and b. Check if one integer is a multiple of the other integer. Print out the result.。\n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//input
	printf("請輸入第一個數字 A：");
	scanf("%d", &intA);
		printf("請輸入第一個數字 B：");
	scanf("%d", &intB);

	//think & output
if(intA > intB && intA / intB >=1 && intA % intB == 0)
      {
printf("A 是 B 的倍數。\n");
      }
else if(intA < intB && intB / intA >=1 && intB % intA == 0)
{
printf("B 是 A 的倍數。");
}
else if(intA == intB)
{
   printf("A 是 B 的倍數。\n");
printf("B 是 A 的倍數。");
}
else
      {
printf("沒有人是誰的倍數。");
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
            //int ch;
            //while ((ch = getchar()) != EOF && ch != '\n');
         //方法二
            scanf("%*[^\n]");
            scanf("%*c");
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
