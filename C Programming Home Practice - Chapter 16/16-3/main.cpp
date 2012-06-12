//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：21
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』。
２.記得Return 0;。
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
６.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
７.不明原因：需int main(){}才能用偵錯工具。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;

//function prototype
//function prototype for//使程式暫停運行
	void pauseProgram();

//structure
    struct lightHouseData
        {
            char LHName[31];//Ten Chinese Charactor(Max in UTF-8)
            unsigned short int FoundYear;
            double towerHeight;
            double lightHeight;
            double lightLength;
            char position[76];//25 Chinese Charactors
            char form[31];//Ten Chinese Charactor
        };
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(10)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{
	//宣告與定義(Declaration & Definition)
        lightHouseData lightHouse[10] = {{"富貴角燈塔", 1896, 14.3, 31.4, 26.8, "北縣石門鄉富貴岬角", "鋼筋混凝土"}, {"基隆燈塔", 1899, 11, 40.2, 16, "基隆港口", "磚砌圓塔"} , {"基隆嶼燈塔", 1980, 12.3, 189.3, 12, "基隆外海基隆嶼山頂", "鋼筋混凝土"}, {"綠島燈塔", 1939, 33.3, 48.2, 25.7, "台東縣綠島鄉西北", "鋼筋混凝土"}, {"東引島燈塔", 1902, 14.2, 97.8, 11.3, "馬祖東引島", "磚砌圓塔"}, {"白沙岬燈塔", 1898, 27.7, 36.6, 25.7, "桃園縣白沙岬", "磚砌圓塔"}, {"鵝鑾鼻燈塔", 1881, 24.4, 56.4, 27.2, "屏東縣恆春鵝鑾鼻岬角", "鑄鐵圓塔"}};
    //counter for     //output for loop
        unsigned int outputC;

	//－－－－－－－－－－－－－－－－－－－－－
    //output for loop
        for(outputC = 0; lightHouse[outputC].LHName[0] != '\0'; outputC++)
            {
                printf("%s\t""西元%d\t""%.1lf""M\t""%.1lf""M\t""%.1lf""M\t""%s\t%s""\n", lightHouse[outputC].LHName, lightHouse[outputC].FoundYear, lightHouse[outputC].towerHeight, lightHouse[outputC].lightHeight, lightHouse[outputC].lightLength, lightHouse[outputC].position, lightHouse[outputC].form);
            }


    //pause
        pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}

//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
        /*開關
            //方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
                printf("顯示運行結果，程式暫停運行\n");
                system("pause");
        */
            //方法二：運用輸入function（需#include <stdio.h>）
                //先清除input buffer
                //需全域定義short int scanfTriggered = 0;
                    //方法一
                    /*開關
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //方法二
                    //開關
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //開關
                //print message
                    printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
                //get char from keyboard
                    fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
                  //
    }

