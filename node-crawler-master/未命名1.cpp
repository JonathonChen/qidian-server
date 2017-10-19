// 程序功能是统计输入的序列串中的最大值、最小值和序列串的平均值

#define LOCAL
#include <stdio.h>
#include <stdlib.h>
#include<string>
#include <iostream>
#define INF 1000000000
 using namespace std;

int main (void) {
#ifdef LOCAL 
	freopen ("data.sql", "w", stdout);
	#endif
	string sql = "`id` int(11) NOT NULL,\n`err` int(11) NOT NULL,\n`bookName` varchar(100) NOT NULL,\n`title` varchar(100) NOT NULL,\n`content` text character set utf8 NOT NULL\n) ENGINE=InnoDB DEFAULT CHARSET=gbk;\n";
	for(int i = 1;i <= 40;i++){
		string tmp = "";
		tmp += "CREATE TABLE book";
		char str[10];
		itoa(i, str, 10);
		tmp += str;
		
		tmp += " (\n";
		tmp +=  sql;
		cout<<tmp<<endl;
	} 



	return 0;
}
