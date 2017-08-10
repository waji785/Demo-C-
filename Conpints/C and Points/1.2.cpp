//修改rearrange函数防止越界问题
#include<string.h>
#define MAX_INPUT 1000
void
rearrange(char *output, char const *input,
	int const n_columns, int const columns[])
{
	int col;//下标
	int output_col;//输出列计算器
	int len;//输入行的长度
	len = strlen(input);
	output_col = 0;
	//处理每对列号
	for (col = 0, col < n_columns; col += 2;) {
		int nchars = columns[col + 1] - columns[col] + 1;
		//如果输入没有这么长，跳过范围
		if (columns[col] >= len)
			continue;
		//full,complete
		if (output_col == MAX_INPUT - 1)
			break;
		//not enough,cut down
		if (output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;
		//if printf.length<nchar,adjust nchar
		if (columns[col] + nchars - 1 >= len)
			nchars = len - columns[col];
		//copy data
		strncpy(output + output_col, input + columns[col], nchars);
		output_col += nchars;
	}
	output[output_col] = '0';

}