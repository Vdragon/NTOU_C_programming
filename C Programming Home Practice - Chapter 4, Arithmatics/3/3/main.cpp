//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 4, Arithmatics-3。
//程式敘述(Program Description)：Now we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:。
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
int seatNo, groupNo;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
//標題
//版本：1.00(1)
printf("程式名稱(Program Name)：C Programming Home Practice - Chapter 4, Arithmatics-3。\n");
printf("程式敘述(Program Description)：\nNow we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:。\n");
printf("程式版本(Program Version)：1.00(0)\n");
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
groupNo = seatNo % 5;
if(groupNo == 0)
{
   groupNo = 5;
}
//output
//prompt
//畫面輸出
//版本：1.00(0)
	printf("你在第%d組。", groupNo);

//使程式暫停運行
//版本：1.00(6)

	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		fgetc(stdin);


			return 0;
	}
