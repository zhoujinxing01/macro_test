#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

//把#右边的参数字符串化，其实就是为其加上了""
#define _STR(x) 			#x   //为x加上""
#define STR(x) 				_STR(x)	//中间宏

//##是把参数x和##的左边部分连接起来
#define WSTR_1(x)  		Hello ## x
#define WSTR_2(a,b)  	a ## b

#define CONS(a,b) int(a##e##b)

#define _FILE  "C:\\test"


using namespace std;

int main(int argc, char *argv[])
{
		cout << endl;
		
		cout << ">>01>> " << _STR(abc) << endl;
		cout << ">>02>> " << _STR("abc") << endl;
		cout << ">>03>> " << _STR(_FILE) << endl;
		cout << ">>04>> " << STR(_FILE) << endl;
		
		cout << endl;
		
		cout << ">>05>> " << _STR(WSTR_1(_jinxing)) << endl;
		cout << ">>06>> " << STR(WSTR_1(_jinxing)) << endl;
		cout << ">>07>> " << _STR(WSTR_2(zhou,_jinxing)) << endl;
		cout << ">>08>> " << STR(WSTR_2(zhou,_jinxing)) << endl;
		
		cout << endl;
		
		cout << ">>09>> " << CONS(2,2) << endl;
		
		cout << endl;
		
    return 0;
}
