//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 2, C Fundamentals-7。
//程式敘述(Program Description)：(Following the previous problem) Suppose that a boy has to offer $1,200 and a girl has to offer $1,000 as the class fund, what is the total amount of the class fund?。
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

//C Standard General Utilities Library
//版本：1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/

//--------------宣告與定義(Declaration & Definition)--------------
int numMale, numFemale;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
//title
//螢幕輸出
//版本：1.00(2)
printf("C Programming Home Practice - Chapter 2, C Fundamentals-7\n");
printf("(Following the previous problem) Suppose that a boy has to offer $1,200 and a girl has to offer $1,000 as the class fund, \nwhat is the total amount of the class fund?\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//ask
//螢幕輸出
//版本：1.00(2)
printf("請輸入男生人數：");
//assign
scanf("%d", &numMale);

//螢幕輸出
//版本：1.00(2)
printf("請輸入女生人數：");
//assign
scanf("%d", &numFemale);

//print ANS
//螢幕輸出
//版本：1.00(2)
printf("班費總共%d元。。", numMale * 1200 + numFemale * 1000);


//使程式暫停運行
//版本：1.00(5)

	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（為什麼這個突然無效了冏）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！

			return 0;
	}
