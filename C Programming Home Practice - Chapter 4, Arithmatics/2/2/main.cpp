//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 4, Arithmatics。
//程式敘述(Program Description)：Now we are dividing students into groups, 5 students in each group. I.e. students whose seat numbers are No. 1 to No. 5 are in Group 1. students whose seat numbers are No. 6 to No. 10 are in Group 2. And so on. Declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.。
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

//C Standard General Utilities Library
//版本：1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
//--------------宣告與定義(Declaration & Definition)--------------
int groupNo, seatNo;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{

//標題
printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 4, Arithmatics。\n");
printf("程式敘述(Program Description)：\nNow we are dividing students into groups, 5 students in each group. I.e. students whose seat numbers are No. 1 to No. 5 are in Group 1. students whose seat numbers are No. 6 to No. 10 are in Group 2. And so on. Declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.。\n");
printf("程式版本(Program Version)：1.00(0)\n");
printf("程式修訂號(Program Revision Number)：\n");
printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");

//prompt
//畫面輸出
//版本：1.00(0)
	printf("請輸入座號：");
//從鍵盤輸入
//版本：1.00(1)
scanf("%d", &seatNo);

//think
groupNo = (seatNo - 1) / 5 + 1;

//output
//prompt
//畫面輸出
//版本：1.00(0)
	printf("你在第%d組。\n", groupNo);

//使程式暫停運行
//版本：1.00(6)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（為什麼這個突然無效了冏）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
