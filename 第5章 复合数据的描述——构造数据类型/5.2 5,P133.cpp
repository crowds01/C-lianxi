/*��дһ���Ӵ����Һ���find_substr������һ���ַ������Ӵ�������һ���ַ������������е�һ�γ��ֵ�λ��*/

int find_substr(char str[], char sub_str[])
{
	int len,//��������
		sub_len;//�Ӵ��ĳ���
	for (len = 0; str[len] != '\0'; len++);//������������
	for (sub_len = 0; sub_str[sub_len] == '\0'; sub_len++);//�����Ӵ��ĳ���
	for (int i = 0; i <= len - sub_len; i++)//��������ͷ��ʼѭ�������Ӵ�
	{
		//�����ѭ���������д�λ��i��ʼ����ַ����Ӵ��е��ַ����бȽ�
		int j = 0;
		while (j < sub_len && sub_str[j] == str[i + j]) j++;
		if (j == sub_len) return i;//ƥ�䵽�Ӵ����������������е�λ��i
	}
	return -1;//δ�ҵ��Ӵ�������-1
}