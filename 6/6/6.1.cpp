//overturn char
void reverse_string(char *str)
{
	char*last_char;
	//��last_char����Ϊָ���ַ��������һ���ַ�
	for (last_char = str; *last_char != '\0'; last_char++)
		;
	last_char--;
	//����str��last_charָ����ַ���Ȼ��strǰ��һ����last_char����һ������ָ�������֮ǰ�ظ���һ����
	while (str < last_char) {
		char temp;
		temp = *str;
		*str++ = *last_char;
		*last_char-- = temp;
	}
}