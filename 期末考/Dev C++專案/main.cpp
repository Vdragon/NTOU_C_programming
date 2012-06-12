//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：程設期末考非官方參考答案。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(5)20100119
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：23
//最新更新紀錄(Latest Update Log)：。
/*更新紀錄(Change Log)：
1.00(0) 第一題部分
1.00(1) 第二三題
1.00(2) 第五題部分
1.00(3) 全部演示功能完成
1.00(4) 修正第二題顯示偏差
1.00(5) 完成增加部分程式於Visual Studio編譯器之相容性
*///更新紀錄(Change Log)：
/*已知問題(Known Issue)：
->G++無法正常解析某些BIG5字元，需補上額外不符合語法規則之反斜線(Visual Studio編譯器正常)。
->第五題printf ID 使用%09u無法補零。
->Visual Studio 編譯器產生之執行檔無法演示第五題(Malloc()始終回傳NULL)。
	>其實可以，但是PERSONTOTAL無法用大如預設值，原因不明。
	>240萬筆會占用160MB記憶體，預估2400萬筆應為1.6G，但是仍會運行失敗。
*///已知問題(Known Issue)：
//--------------注意事項--------------
/*
１.有BUG先檢查scanf()參數的資料型態是否正確。
２.不同的compiler可能有處理函數、變數之先後差異，請＊不要＊在同一語句(Statement)中同時處理兩者。
３.運行函數要注意是否有return值。
４.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
５.用指標陣列指向字串之方式定義string literal 請用const char * 〔指標名稱〕 = 〔字串〕;
６. * (dereferencing operater) 優先級很低，與其他運算子在同一個語句中需檢查其優先級。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//C Standard General Utilities Library
//版本：1.00(3)
	/*
	for srand()
	for SYSTEM("pause") if working
	*/
	#include <stdlib.h>

//Math function(Unknown)
//版本：1.00(0)
	#include <math.h>

//string.h
//版本：1.00(0)
    #include <string.h>

//Date and time functions Library
//版本：1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0

//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1

//define PERSONTOTAL
	#define PERSONTOTAL 24000000
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//Defined Structure
//for Q5
	struct date
		{
			int year, month, day;
		};
	struct city
		{
			char name[100];
			int population;
			double area;
		};
	struct person
		{
			char ID[15], name[30];
			date birthday;
			city *birthplace, *livingplace;
		};
//for Q6
	struct myData
		{
			char *str, status;
		};

//global variable
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	unsigned short int scanfTriggered = 0;

//function prototype
//function prototype for pauseProgram
	bool pauseProgram(void);
//func.prototype of //string reverse(Vdragon version)函數
	void Vstrrev(char * inputStringPtr);

//function for the test
	void q1main(void);
	void blahblah(int * x, int y, int z);
	void q2main(void);
	void q3main(void);
	unsigned int q3BinaryToInt(char * strInput);
	void q3IntToBinary(char * strBuffer, unsigned int inputNum);
	void q4main(void);
	double q4function(double x, int n);
	bool q5main(void);
	void count_popult(person p[], int pTotal, city c[], int cTotal);
	void q6main(void);
//print title
	void printTitle(void)
		{
			  printf("程式名稱(Program Name)：程設期末考非官方參考答案。\n");
			  printf("程式敘述(Program Description)：\n。\n");
			  printf("程式版本(Program Version)：1.00(5)20100119\n");
			  printf("Ｂｕｉｌｄ　ｂｙ　林博仁＠２０１１\n保留所有權利－Ａｌｌ　Ｒｉｇｈｔｓ　Ｒｅｓｅｒｖｅｄ\n");
			  printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
		}
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(11)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restartProgram:
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
	//print title
		printTitle();
	//第一題
		printf("第一題（２５分）\n－－－－－－－－－－－－－－－－－－－\n");
		q1main();
		printf("－－－－－－－－－－－－－－－－－－－\n");
	//第二題
		printf("第二題（８分）\n－－－－－－－－－－－－－－－－－－－\n");
		q2main();
		printf("－－－－－－－－－－－－－－－－－－－\n");
	//第三題
		printf("第三題（１２分）\n－－－－－－－－－－－－－－－－－－－\n");
		q3main();
		printf("－－－－－－－－－－－－－－－－－－－\n");
	//第四題
		printf("第四題（１０分）\n－－－－－－－－－－－－－－－－－－－\n");
		q4main();
		printf("－－－－－－－－－－－－－－－－－－－\n");
	//第五題
		printf("第五題\n－－－－－－－－－－－－－－－－－－－\n");
		if(!q5main())
			{
					printf("\n您的電腦隨機存取記憶體(RAM)可用空間不足，無法演示第五題\n請減少原始碼中PERSONTOTAL常數之大小\n");
					printf("\n答案請參閱\原始碼\n");
					printf("－－－－－－－－－－－－－－－－－－－\n");
			}
	//第六題
		printf("第六題（１５分）\n－－－－－－－－－－－－－－－－－－－\n");
		q6main();
		//printf("－－－－－－－－－－－－－－－－－－－\n");

	//pauseProgram
		if(pauseProgram())
			{
				goto restartProgram;
			}
	////pauseProgram
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q1main(void)
	{
		//宣告與定義(Declaration & Definition)
		//pre
			int a[3] = {1, 6, 9}, * p1 = a, * p2 = p1 + 1, k = a[0], m = a[1], n = a[2];
		//－－－－－－－－－－－－－－－－－－－－－
		//
			printf("(1) %d\n(2) %d\n(3) %d\n(4) %d\n", *p1, *p2, p2 - a, *p2 - *a);
		//答案：　　　　１　　　６　　　１　　　５
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1; printf("(5) %d %d %d\n", a[0], a[1], a[2]);
		//答案：　　　　　　　　　 １ １ ９
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = (*p1)++; printf("(6) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//答案：　　　　　　　　　 　　２ １ ９ ２ １
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = ++*p1; printf("(7) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//答案：　　　　　　　　　 　２ ２ ９ ２ ２
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *++p1; printf("(8) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//答案：　　　　　　　　　 　１ ６ ９ ６ ６
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1++; printf("(9) %d %d %d %d %d\n", a[0], a[1], a[2], *p1, *p2);
		//答案：　　　　　　　　　 　１ １ ９ １ １
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *(p1 + 1); printf("(10) %d %d %d\n", a[0], a[1], a[2]);
		//答案：　　　　　　　　　 　　　 １ ６ ９
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*p2 = *p1 + 1; printf("(11) %d %d %d\n", a[0], a[1], a[2]);
		//答案：　　　　　　　　　 　　 １ ２ ９
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*(p2 + 1) = *(p1 + 1); printf("(12) %d %d %d\n", a[0], a[1], a[2]);
		//答案：　　　　　　　　　 　　 　　　　１ ６ ６
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			*(p2 - *p1) = 7; printf("(13) %d %d %d\n", a[0], a[1], a[2]);
		//答案：　　　　　　　　　 　　 　７ ６ ９
		//erase
			a[0] = 1; a[1] = 6; a[2] = 9, p1 = a, p2 = p1 + 1;
		//
			k = m * ++n; printf("(14) %d %d %d %d %d %d\n", k, m, n, a[0], a[1], a[2]);
		//答案：　　　　　　　　　 　 60 ６ 10 １ ６ ９
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q2main(void)
	{
		//宣告與定義(Declaration & Definition)
		//
			int x = 4, y = 3;

		//－－－－－－－－－－－－－－－－－－－－－
		//
			for(int i = 1; i <= 3; i++)
				{
					int x = y + i;
					blahblah(&y, x, i);
					printf("(%d) x=%d, y=%d\n", i, x, y);
					//解答： １　　４　　13
					//　　　 ２　　15　　67
					//　　　 ３　　70　 405
				}
		////
			printf("(%d) x=%d, y=%d\n", i, x, y);
			//解答： ４　　４　 405
		/*||=== 期末考, Debug ===|
			\main.cpp||In function 'void q2main()':|
			\main.cpp|184|error: name lookup of 'i' changed for ISO 'for' scoping|
			\main.cpp|184|note: (if you use '-fpermissive' G++ will accept your code)|
			||=== Build finished: 1 errors, 0 warnings ===|
			Compiler命令須設定為：$compiler $options $includes -fpermissive -c $file -o $object才可過
		*/

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void blahblah(int * x, int y, int z)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
		//
			*x = *x * 2 + y + z * *x;

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q3main(void)
	{
		//宣告與定義(Declaration & Definition)
		//Define a char Array for storing converted binary
			char strBuffer[36];//4 * 8bit + 3 spaces + null char.
		//define a char array for storing bitwise x
			char bitwiseX[36] = "00010111 11011101 00011110 00101101";
			char bitwiseY[36] = "11101010 10110000 11011000 10011011";
		//
			unsigned int x = q3BinaryToInt(bitwiseX);
			unsigned int y = q3BinaryToInt(bitwiseY);
			unsigned int z;
																		/*test
																			printf("Debug: x = %u, y = %u\n", x, y);
																		*///
		//－－－－－－－－－－－－－－－－－－－－－
		//(1)
			z = x ^ y;
			q3IntToBinary(strBuffer, z);
			printf("(1) z = (%s)二進位\n", strBuffer);
		//答案：(11111101 01101101 11000110 10110110)二進位
		//(2)
			z = x | y;
			q3IntToBinary(strBuffer, z);
			printf("(2) z = (%s)二進位\n", strBuffer);
		//答案：(11111111 11111101 11011110 10111111)二進位
		//(3)
			z = x & ~y;
			q3IntToBinary(strBuffer, z);
			printf("(3) z = (%s)二進位\n", strBuffer);
		//答案：(00010101 01001101 00000110 00100100)二進位
		//(4)
			z = x >> 2 << 7;
			q3IntToBinary(strBuffer, z);
			printf("(4) z = (%s)二進位\n", strBuffer);
		//答案：(11111011 10100011 11000101 10000000)二進位

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
unsigned int q3BinaryToInt(char * strInput)//36 char array
	{
		//宣告與定義(Declaration & Definition)
		//define a pointer to save what char we are processing
			char * currentPtr = strInput;
		//define a counter to save what bit we are doing
			unsigned short int currentBit;
		//define a unsigned int to store sum
			unsigned int currentSum = 0;
		//－－－－－－－－－－－－－－－－－－－－－
																	/*test
																		printf("Debug: currentSum = %u\n", currentSum);
																	*///test
		//a for loop from 32 bit to 1?
			for(currentBit = 32; currentBit > 0; currentBit--, currentPtr++)
				{
					//if pointer is pointing space then shift right
						if((currentPtr - strInput + 1) % 9 == 0)
							{
								currentPtr++;
							}
					//if bit is 1 then add to sum
						currentSum = currentSum + (*currentPtr == '1'? (unsigned int)pow((double)2, (double)currentBit - 1) : 0 );
																	/*test
																		printf("Debug: currentSum = %u\n", currentSum);
																	*///test
					////if bit is 1 then add to sum
				}

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return currentSum;
	}
//string reverse(Vdragon version)函數
//版本：1.00(0)
/*
returnType functionName(auguments)
*/
void Vstrrev(char * inputStringPtr)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
		//search the ending of string
			//
				unsigned int searchC;
			//searchC will last point at \0
				for(searchC = 0; *(inputStringPtr + searchC) != '\0'; searchC++)
					{

					}
			//let searchC points the last char by null char.
				searchC--;
		//swap chars
			//
				char * swapFront = inputStringPtr;
				char bufferChar;
			//
				for(; swapFront < inputStringPtr + searchC; swapFront++, searchC--)
					{
						//buffer front char
							bufferChar = *swapFront;
						//assign front char with back char
							*swapFront = *(inputStringPtr + searchC);
						//assign back char with buffered char
							*(inputStringPtr + searchC) = bufferChar;
					}
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q3IntToBinary(char * strBuffer, unsigned int inputNum)
	{
		//宣告與定義(Declaration & Definition)
		//
			char* currentPtr = strBuffer;
		//
			unsigned short int currentChar;
		//－－－－－－－－－－－－－－－－－－－－－
		//改寫for迴圈
			for(currentChar = 1; currentChar < 36; currentChar++)
				{
					//if space needed then add space and continue
						if(currentChar % 9 == 0)
							{
								*currentPtr = ' ';
								currentPtr++;
								continue;
							}
					//if number has become zero then put 0 and continue
						if(inputNum == 0)
							{
								*currentPtr = '0';
								currentPtr++;
								continue;
							}
					//2的...
						*currentPtr++ = (inputNum % 2 == 0)? '0' : '1';
						inputNum = inputNum / 2;

				}
		//補null char.
			*currentPtr = '\0';
			//strrev(strBuffer);//strrev()是string.h標頭檔之中的字串型數碼寶貝,絕招是反轉字串
			Vstrrev(strBuffer);
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}

//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q4main(void)
	{
		//宣告與定義(Declaration & Definition)

		//－－－－－－－－－－－－－－－－－－－－－
		//demo
			printf("f(16, 1)=%lf\n", q4function(16, 1));

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}

//其他函數
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
double q4function(double x, int n)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
		//basic step-if n<=0 then func. should return 0
			if(n <= 0)
				{
					return 0;
				}
		//recursive step-if n>0 then func. should return pow(x + func(x, n-1), 0.25)
			return pow(x + q4function(x, n - 1), 0.25);

	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
bool q5main(void)
	{
		//宣告與定義(Declaration & Definition)
		//question
			person * TWperson;
			city TWcity[400];
			int personTotal, cityTotal;

		//－－－－－－－－－－－－－－－－－－－－－
		//程式所利用的假想資料來源
			personTotal = PERSONTOTAL;//台灣約2400萬人
			cityTotal = 24;//台灣總共有24直轄市+縣
			printf("開始呼叫malloc()函數獲取存放戶籍資料之記憶體空間\n");
			printf("PERSONTOTAL預設值24000000　預設值會消耗約1.5ＧＢ之記憶體　目前PERSONTOTAL的值為%d\n", personTotal);
			TWperson = (person * )malloc(personTotal * sizeof(person));
			if(TWperson == NULL)
				{
					free(TWperson);
					return false;
				}
			printf("製造亂數戶籍資料中，請稍候···");
			strcpy(TWcity[0].name, "台北市");			strcpy(TWcity[1].name, "台北縣");
			strcpy(TWcity[2].name, "基隆市");			strcpy(TWcity[3].name, "桃園縣");
			strcpy(TWcity[4].name, "新竹市");			strcpy(TWcity[5].name, "新竹縣");
			strcpy(TWcity[6].name, "苗栗縣");			strcpy(TWcity[7].name, "台中市");
			strcpy(TWcity[8].name, "台中縣");			strcpy(TWcity[9].name, "彰化縣");
			strcpy(TWcity[10].name, "南投縣");			strcpy(TWcity[11].name, "雲林縣");
			strcpy(TWcity[12].name, "嘉義市");			strcpy(TWcity[13].name, "嘉義縣");
			strcpy(TWcity[14].name, "台南市");			strcpy(TWcity[15].name, "台南縣");
			strcpy(TWcity[16].name, "高雄市");			strcpy(TWcity[17].name, "高雄縣");
			strcpy(TWcity[18].name, "屏東縣");			strcpy(TWcity[19].name, "宜蘭縣");
			strcpy(TWcity[20].name, "花蓮縣");			strcpy(TWcity[21].name, "台東縣");
			strcpy(TWcity[22].name, "澎湖縣");			strcpy(TWcity[23].name, "金門縣");
			unsigned short int assignC;
			//random function initialization
			//版本：1.00(2)
				srand((unsigned)time(NULL));
					//now rand() is usable :D
					//rand() range: 0 ~ unsigned int MAX.
			for(assignC = 0; assignC < cityTotal; assignC++)
				{
					TWcity[assignC].population = (unsigned int)(int)rand();
					TWcity[assignC].area = rand() % 100000;
				}
			unsigned int initPDataC;
			const char IDalph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
			const char * twoSurnames[40] = {"軒轅", "歐陽", "司馬", "司徒", "司空", "司寇", "上官", "尉遲", "羊舌", "第五", "梁丘", "鍾離", "東郭", "公孫", "孟孫", "仲孫", "叔孫", "季孫", "長孫", "慕容", "宇文", "閭丘", "諸葛", "東方", "西門", "公羊", "夏侯", "万俟", "百里", "端木", "公冶", "皇甫", "呼延", "浮屠", "令狐", "淳于", "即墨", "單於", "南宮", "毌丘"};
			const char * oneNames[40] = {"轅", "陽", "馬", "徒", "空", "寇", "官", "遲", "舌", "五", "丘", "離", "郭", "孫", "孫", "孫", "孫", "孫", "孫", "容", "文", "丘", "葛", "方", "門", "羊", "侯", "俟", "里", "木", "冶", "甫", "延", "屠", "狐", "于", "墨", "於", "宮", "丘"};
			char nameBuffer[10];//Max. 3 UTF-8 char string
			for(initPDataC = 0; initPDataC < personTotal; initPDataC++)
				{
					{//making ID
						TWperson[initPDataC].ID[0] = IDalph[rand() % 26];
						TWperson[initPDataC].ID[1] = '\0';
						char stringBuffer[10];//9num + null char.
						//sprintf(stringBuffer, "%09u", ((unsigned int)pow(rand(), (SYSTEM == 0)? 4 : 1)) % 1000000000);
						sprintf(stringBuffer, "%09u", (SYSTEM == 0)? ((unsigned int)pow((double)rand(),4)) : rand() % 1000000000);
						strcat(TWperson[initPDataC].ID, stringBuffer);
					}

					{//making name
						nameBuffer[0] = '\0';
						strcat(nameBuffer, twoSurnames[rand() % 40]);
						strcat(nameBuffer, oneNames[rand() % 40]);
						strcpy(TWperson[initPDataC].name, nameBuffer);
					}

					TWperson[initPDataC].birthday.year = 1900 + rand() % 112;//1900~2011
					TWperson[initPDataC].birthday.month = rand() % 12 + 1;//1~12
					TWperson[initPDataC].birthday.day = rand() % 28;//1~28
					TWperson[initPDataC].birthplace = &TWcity[rand() % 24];
					TWperson[initPDataC].livingplace = &TWcity[rand() % 24];
				}
		//new line
			putchar('\n');
		//(1)
			printf("(1)（１０分）\n－－－－－－－－－－－－－－－－－－－\n");
			count_popult(TWperson, personTotal, TWcity, cityTotal);
			printf("\n答案請參閱\原始碼\n");
			printf("－－－－－－－－－－－－－－－－－－－\n");
		//(2)
			printf("(2)（１０分）\n－－－－－－－－－－－－－－－－－－－\n");
			//search the max pop. of all city
				//
				unsigned int maxCurrent = TWcity[0].population;
				{
				//
				unsigned short int searchC;

				//
				for(searchC = 1; searchC < cityTotal; searchC++)
					{
						//if pop greater then current
							if(TWcity[searchC].population > maxCurrent)
								{
									//assign it
										maxCurrent = TWcity[searchC].population;
								}
					}
				}

			//print all pop = current city
				printf("人口最多的縣市為：");
				{
				//
				unsigned short int printC;

				//
				for(printC = 0; printC < cityTotal; printC++)
					{
						//if pop greater then current
							if(TWcity[printC].population == maxCurrent)
								{
									//print it
										printf("%s（%d人）　", TWcity[printC].name, TWcity[printC].population);
								}
					}
				//newline
					putchar('\n');
				}
			//
			printf("\n答案請參閱\原始碼\n");
			printf("－－－－－－－－－－－－－－－－－－－\n");
		//(3)
			printf("(3)（１０分）\n－－－－－－－－－－－－－－－－－－－\n");
			//for loop from first person to last person
				//
				unsigned int searchC;
				unsigned short int searchLimit = 15;
				//
				printf("由於數量太多，僅列出最後%d筆資料中有符合條件者\n", searchLimit);
				//
				for(searchC = 0; searchC < personTotal; searchC++)
					{
						//if year less than 1946
							if(searchC > personTotal - (searchLimit + 1) && TWperson[searchC].birthday.year < 1946)
								{
									printf("%s　%s　現年%hu歲\n", TWperson[searchC].ID, TWperson[searchC].name, 2011 - TWperson[searchC].birthday.year);
								}
					}
			printf("\n答案請參閱\原始碼\n");
			printf("－－－－－－－－－－－－－－－－－－－\n");
		//(4)
			printf("(4)（１０分）\n－－－－－－－－－－－－－－－－－－－\n");
			//output 1
				printf("所有台北市民的出生地：\n");
			//define a unsigned int array to save the count of people
				unsigned int popCount[400] = {0};//陣列大小＊不可以＊用變數cityTotal，只能以題目限定最大值400代替
			//search from first person to last person to find Taipei citizens.
			{
				//
					unsigned int searchC;
				//
					for(searchC = 0; searchC < personTotal; searchC++)
						{
							//if livingPlace is Taipei
								if(TWperson[searchC].livingplace == &TWcity[0])
									{
										//for loop to search born city
											//
											unsigned searchCityC;
											//
											for(searchCityC = 0; searchCityC < cityTotal; searchCityC++)
												{
													//if birthplace same
													if(TWperson[searchC].birthplace == &TWcity[searchCityC])
														{
															//addcount
																popCount[searchCityC]++;
														}
												}

									}
						}
			}
			//output 2
				//for loop for all city
				{
					//
					unsigned int searchC;
					//
					for(searchC = 0; searchC < cityTotal; searchC++)
						{
							printf("%7u人出生於%s\n", popCount[searchC], TWcity[searchC].name);
						}
				}

			printf("\n答案請參閱\原始碼\n");
			printf("－－－－－－－－－－－－－－－－－－－\n");
		//free memory when return
			free(TWperson);
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
			return true;
	}

//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void count_popult(person p[], int pTotal, city c[], int cTotal)
	{
		//宣告與定義(Declaration & Definition)
		//var for //demo output 3
			unsigned int afterSum = 0;
		//－－－－－－－－－－－－－－－－－－－－－
		//demo output 1
			printf("原始人口總數為%d人\n", pTotal);
		//outside for loop for first city to last city
			//
				unsigned short int cityC;
			//
				for(cityC = 0; cityC < cTotal; cityC++)
					{
						//first set population to default
							c[cityC].population = 0;
						//inside for-loop for first person to last person
																									/*test01
																										printf("%d\n", 24000000);
																									*///test01
							//
								unsigned int personC;
							//
								for(personC = 0; personC < pTotal; personC++)
									{
										//if find same city in the profile
											if(!strcmp((p[personC].birthplace)->name, c[cityC].name))
												{
													//add population
														c[cityC].population++;
												}
									}
						//demo output 2
							printf("重新計算過的%s的人口數為%d人\n", c[cityC].name, c[cityC].population);
						//for //demo output 3
							afterSum = afterSum + c[cityC].population;
					}
			//demo output 3
				printf("重新計算過的人口總數（不得與原始人口總數相異）為%d人\n", afterSum);

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}

//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void q6main(void)
	{
		//宣告與定義(Declaration & Definition)
		//definition from question
			char myStr[10] = "abcdefg", *strset[8], *strp = myStr;
			myData myd, *mydp = &myd;
			strset[4] = myd.str = strp;
		//－－－－－－－－－－－－－－－－－－－－－
		//1
			printf("(1)\n");
			printf("目標字串原為：%s\n", myStr);
				strset[4][5] = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//2
			printf("(2)\n");
			printf("目標字串原為：%s\n", myStr);
				*(strset[4] + 5) = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//3
			printf("(3)\n");
			printf("目標字串原為：%s\n", myStr);
				strp[5] = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//4
			printf("(4)\n");
			printf("目標字串原為：%s\n", myStr);
				*(strp + 5) = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//5
			printf("(5)\n");
			printf("目標字串原為：%s\n", myStr);
				myd.str[5] = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//6
			printf("(6)\n");
			printf("目標字串原為：%s\n", myStr);
				*(myd.str + 5) = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//7
			printf("(7)\n");
			printf("目標字串原為：%s\n", myStr);
				mydp->str[5] = 'k';
			printf("目標字串被修改為：%s\n", myStr);
		//reset data
			strcpy(myStr, "abcdefg");
			strp = myStr;
			mydp = &myd;
			strset[4] = myd.str = strp;
			printf("重設所有資料\n");
		//8
			printf("(8)\n");
			printf("目標字串原為：%s\n", myStr);
				*(mydp->str + 5) = 'k';
			printf("目標字串被修改為：%s\n", myStr);

		//
			printf("\n答案請參閱\原始碼\n");
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.10(0)
bool pauseProgram(void)
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
		//prompt A
			printf("顯示運行結果，程式暫停運行\n");
			printf("請問您要重新運行嗎（Ｙ／Ｎ）？");
		//get action
			//先清除input buffer
			//需全域定義short int scanfTriggered = 0;
				/*方法一
					if (scanfTriggered == 1)
						{
							  unsigned short int getAChar;
							  while ((getAChar = getchar()) != EOF && getAChar != '\n');
						}
				*///方法一
				//方法二
					if (scanfTriggered == 1)
						{
							scanf("%*[^\n]");//丟掉所有換行符號以外的字元
							scanf("%*c");//丟掉換行符號
						}
				////方法二
			//get char
				{
					unsigned short int inputChar;
					//make sure input right
						while(!((inputChar = getchar()) == 'y' || inputChar == 'Y' || inputChar == 'n' || inputChar == 'N'));
					if(inputChar == 'y' || inputChar == 'Y')
						{
							//clean moniter
								if(SYSTEM == 0)
									{
										system("cls");
									}
								else
									{
										system("clear");
									}
							return true;
						}

				}
		//return false
			return false;
    }
