//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：期中考精益求精詳解。
//程式敘述(Program Description)：期中考精益求精詳解（未完）。
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
int mystery(int a, int n)
	{
		while(a >= n)
			{
				int total = 0;
				while(a > 0)
					{
						total = total + a % n;
						a = a / n;
					}
					a = total;
			}
			return a;
	}

//主函數架構
//版本：1.00(5)
//軟體的運行從main函數開始
	int main(void)
	{
      //宣告與定義(Declaration & Definition)
	short int scanfTriggered = 0;
	//1
	short int seatNo, group, ID;
//標題
//版本：1.00(3)
      printf("程式名稱(Program Name)：期中考精益求精詳解。\n");
      printf("程式敘述(Program Description)：\n期中考精益求精詳解（未完）。\n");
      printf("程式版本(Program Version)：1.00(0)\n");
      printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ　ｆｏｒ　ＮＴＯＵＣＳ\n");
      printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");


/*
１.Suppose that the students are grouped in the following way...
	假設學生們被以下列方式分組．．．
	（表格）
	Write C expression to assign the values of "group" and "ID" with the value of "seatNo".
	寫出利用seatNo（座號）之變數值賦與group（組別）跟ID（ＩＤ）兩個變數之值的Ｃ語言表達式。
*/
	printf("１.Suppose that the students are grouped in the following way...\n");
	printf("　 假設學生們被以下列方式分組．．．\n\n");
	printf("　 （表格）\n\n");
	printf("　 Write C expression to assign the values of \"group\" and \"ID\" with the value\n");
	printf("　 of \"seatNo\".\n");
	printf("　 寫出利用seatNo（座號）之變數值賦與group（組別）跟ID（ＩＤ）兩個變數之值的\n");
	printf("　 Ｃ語言表達式。\n");

//answer
printf("\n－－答案－－\n");
printf("\tgroup = (seatNo - 1) ％ 5 + 1;\n");
printf("\tID = (seatNo - 1) / 5 + 1;\n");

//輸出
printf("\n－－輸出－－\n");
	//print seatNo
	printf("seatNo ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	//螢幕輸出函數
	//版本：1.00(8)
	//功能：在提示符位置處輸出字串
	/*用法（全形符號跟其內之內容皆為註解）：
	printf("『螢幕輸出之內容（包括Format conversion格式轉換字元或Escape sequence跳脫序列字元）』", 『格式轉換字元代表之變數名（多個變數則以逗號分開，前後變數分別對應前後不同的格式轉換符）』);
	*/
	/*Format conversion範例：
	   %（N）d→十進位整數
	*/
	printf("%2d ", seatNo);
}
printf("…\n");//new line

	//print group
	printf("group  ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	group = (seatNo - 1/*讓理想的餘數規律向『右』平移製造出來*/) % 5 + 1/*使0~4變成1~5*/;
	printf("%2d ", group);
}
printf("…\n");//new line

	//print ID
	printf("ID     ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	ID = (seatNo - 1/*使5的倍數亦在同一有規律之組內*/) / 5 + 1/*將商從0遞增為1*/;
	printf("%2d ", ID);
}
printf("…\n");//new line

//
printf("\n\n\n");//new line
//

/*
２.Given a piece of a program:
	 這是一個程式中的片段：
	（略）
	What are the "condition"s if we want to print out the following graph?
	欲輸出下列圖形的"condition（條件）"分別為何？
	（略）
*/
	printf("２.Given a piece of a program:\n");
	printf("　 這是一個程式中的片段：\n");
	printf("　 （略）\n");
	printf("　 What are the \"condition\"s if we want to print out the following graph?\n");
	printf("　 欲輸出下列圖形的\"condition（條件）\"分別為何？\n");


	//(1)
	printf("(1)\n");
//輸出
printf("\n－－輸出－－\n");
//def
short int size/*矩陣的邊長*/ = 10,  i, j;
//請從最裡面迴圈的語句(Statement)往外解析
for(i = 0/*從Y座標為0開始*/; i < size/*到Y座標等於size為止*/; i++/*逐漸遞增Y*/)
	{//將提示符移到下一列→視同Y座標
		for(j = 0/*從X座標為0開始*/; j < size/*到X座標等於size為止*/; j++/*逐漸遞增X*/)
			{//在同一列內一一輸出字元→視同X座標
				if(i + j > 4/*condition為符合條件之X, Y座標關係式的話*/)
					 {
						/*就*/printf("＋");
					 }
				else/*不然的話*/
					{
						/*就*/printf("＄");
					}
			}//此列的動作結束
		printf("\n");//此列已輸出完畢換行
	}
//answer
printf("\n－－答案－－\n");
printf("i + j > 4\n");
//newline
printf("\n");


	//(2)
	printf("(2)\n");
//輸出
printf("\n－－輸出－－\n");

//請從最裡面迴圈的語句(Statement)往外解析
for(i = 0/*從Y座標為0開始*/; i < size/*到Y座標等於size為止*/; i++/*逐漸遞增Y*/)
	{//將提示符移到下一列→視同Y座標
		for(j = 0/*從X座標為0開始*/; j < size/*到X座標等於size為止*/; j++/*逐漸遞增X*/)
			{//在同一列內一一輸出字元→視同X座標
				if(j >= i - 1 &&/*AND*/ j <= i + 1/*condition為符合條件之X, Y座標關係式的話*/)
					 {
						/*就*/printf("＋");
					 }
				else/*不然的話*/
					{
						/*就*/printf("＄");
					}
			}//此列的動作結束
		printf("\n");//此列已輸出完畢換行
	}

//answer
printf("\n－－答案－－\n");
printf("j >= i - 1 && j <= i + 1\n");

//newline
printf("\n");

	//(3)
		printf("(3)\n");

//輸出
printf("\n－－輸出－－\n");

//請從最裡面迴圈的語句(Statement)往外解析
for(i = 0/*從Y座標為0開始*/; i < size/*到Y座標等於size為止*/; i++/*逐漸遞增Y*/)
	{//將提示符移到下一列→視同Y座標
		for(j = 0/*從X座標為0開始*/; j < size/*到X座標等於size為止*/; j++/*逐漸遞增X*/)
			{//在同一列內一一輸出字元→視同X座標
				if(j/*Y座標*/ % 4/*以每四個為一組取餘 = 0, 1, 2, 3*/ >= 2)
					 {/*condition為符合條件之X, Y座標關係式的話*/
						/*就*/printf("＋");
					 }
				else/*餘數是0 , 1的話*/
					{
						/*就*/printf("＄");
					}
			}//此列的動作結束
		/*此列已輸出完畢換行*/printf("\n");
	}

//answer
printf("\n－－答案－－\n");
printf("j ％ 4 >= 2\n");

//newline
printf("\n");

/*
３.Rewrite the following codes into simple statements:
　 將下列程式碼改寫成簡潔的語句：
*/
	printf("３.Rewrite the following codes into simple statements:\n");
	printf("　 將下列程式碼改寫成簡潔的語句：\n");
	printf("　 （略）\n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");

//answer
printf("－－答案－－\n");
printf("a[i] = a[i] + (i ％ 3 + 1) * 2;\n");


//newline
printf("\n");

	//(2)
	printf("(2)\n");

//answer
printf("－－答案－－\n");
printf("int b[4] = {1,7,6,4};\n");
printf("a[i] = a[i] + b[i ％ 4];\n");

//newline
printf("\n");

	//(3)
	printf("(3)\n");

//answer
printf("－－答案－－\n");
printf("for(i = 0;  i<21; i++)\n");
printf("　 if(i ％ 7 < 3) printf(\"$\")\n");
printf("　 else printf(\"#\")\n");

//newline
printf("\n");

/*
４.Given a mysterious function:
　 這裡有一個神祕的函數：

　 （略）

　 What is the execution result of the following statement?
　 請問下列語句的執行結果為何？
*/
printf("４.Given a mysterious function:\n");
printf("　 這裡有一個神祕的函數：\n");
printf("\n　 （略）\n\n");
printf("　 What is the execution result of the following statement?\n");
printf("　 請問下列語句的執行結果為何？\n");

//newline
printf("\n");

//輸出
printf("\n－－輸出－－\n");

printf("The mysterious number of %d is %d.", 1987, mystery(1987, 8));

/*
５.Please rewrite the following "for"-loops into "while"-loops.
　 請將下面提供的for迴圈改寫為while迴圈。

　 （略）

*/

printf("５.Please rewrite the following \"for\"-loops into \"while\"-loops\n");
printf("　 請將下面提供的for迴圈改寫為while迴圈。\n");
printf("\n　 （略）\n\n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");
//answer
printf("－－答案－－\n");
printf("//請從最裡面迴圈的語句(Statement)往外解析\n");
printf("int i, j, sum;\n");
printf("/*前提須放在迴圈前面*/\n");
printf("i = 0;/*第二層迴圈的前提*/\n");
printf("while(i < 4)/*第二層迴圈保留原for迴圈的condition*/\n");
printf("	{/*第二層迴圈開始*/\n");
printf("		sum = 0;\n");
printf("		\n");
printf("		j = 0;/*第一層迴圈的前提*/\n");
printf("		while(j < i)/*第一層迴圈保留原for迴圈的condition*/\n");
printf("			{/*第一層迴圈開始*/\n");
printf("				sum = sum + j;\n");
printf("				\n");
printf("				j++;/*第一層迴圈的increment放在迴圈內之最後處*/\n");
printf("			}/*第一層迴圈結束*/\n");
printf("		printf(\"%d, \", sum);\n");
printf("		i++;/*第二層迴圈的increment放在迴圈內之最後處*/\n");
printf("	}/*第二層迴圈結束*/\n");

//newline
printf("\n");

	//(2)
	printf("(2)\n");
//answer
printf("－－答案－－\n");
printf("int i, j;\n");
printf("/*前提須放在迴圈前面*/\n");
printf("i = 0;j = 20;/*for迴圈的前提*/\n");
printf("while(i < j)/*迴圈保留原for迴圈的condition*/\n");
printf("	{/*迴圈開始*/\n");
printf("		printf(\"(%d, %d)-\", i, j);\n");
printf("		\n");
printf("		i += 3; j -= 2;/*原迴圈的increment放在迴圈內之最後處*/\n");
printf("	}/*迴圈結束*/\n");

//newline
printf("\n");

/*
６.What are the results of the programs in Question 5?
　 第五題的輸出結果為何？
*/
printf("６.What are the results of the programs in Question 5?\n");
printf("　 第五題的輸出結果為何？ \n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");

//輸出
printf("\n－－輸出－－\n");
int i2, j2, sum;
for(i2 = 0; i2 < 4; i2++)
	{
		sum = 0;
		for(j2 = 0; j2 < i2; j2++)
			{
				sum = sum + j2;
			}
		printf("%d, ", sum);
	}

//newline
printf("\n\n\n");

	//(2)
	printf("(2)\n");

//輸出
printf("\n－－輸出－－\n");
int i3, j3;
for(i3 = 0, j3 = 20; i3 < j3; i3 += 3, j3 -= 2)
	{
		printf("(%d, %d)-", i3, j3);
	}

//newline
printf("\n\n\n");

/*
７.
(1)What are the results of the programs in Question 5?
　 第五題的輸出結果為何？
*/


//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(15)
	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//先清除imput buffer
         //方法一
         /*
            short int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //方法二
         //需全域定義
         //short int scanfTriggered = 0;

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
