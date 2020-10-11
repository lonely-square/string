// String.h
#ifndef MY_STRING_H
#define MY_STRING_H
#include <iostream>
using namespace std;

class String
{
public:
	String(const char *s="");						// ���캯��
	String(const String &Str, int pos, int n);
	String(const char *s, int n);
	String(int n, char c);
	String(const String &Str);						// �������캯��
	String & operator=(const String &Str);			// ����Ϊ��Ա����
	virtual ~String();								// �����������麯����
	String & insert(int p0, const char *s);			// �� s ��ָ����ַ��������ڱ���λ�� p0 ֮ǰ
	String substr(int pos, int n) const;			// ȡ�Ӵ���ȡ����λ�� pos ��ʼ�� n ���ַ��������¶���
	int find(const String &Str) const;				// ���Ҳ����� Str �ڱ����е�һ�γ��ֵ�λ��
	int length () const;							// ���ش��ĳ��ȣ��ַ�������
	const char * c_str();							// ת��Ϊ C-�ַ���
	void swap(String &Str);							// �������� Str ����
	char & operator[](int index);					// �����ţ��±꣩����������÷��ؿ�����ֵ����ֵ
	friend String operator+(const String &str1, const String &Str2); // ��Ԫ�������ַ���ƴ��
	String & operator+=(const String &Str);			// �ַ���ƴ�Ӽ���ֵ
	// ���ع�ϵ����
	friend bool operator==(const String &Str1, const String &Str2);
	friend bool operator!=(const String &Str1, const String &Str2);
	friend bool operator> (const String &Str1, const String &Str2);
	friend bool operator>=(const String &Str1, const String &Str2);
	friend bool operator< (const String &Str1, const String &Str2);
	friend bool operator<=(const String &Str1, const String &Str2);
    // ���� I/O �������
	friend ostream & operator<<(ostream &out, const String &Str);
	friend istream & operator>>(istream &in, String &Str);
    // ���ӵĳ�Ա����
	friend istream & getline(istream &in, String &Str, int num, char delim='\n');
	String & trim();								// ɾ���ַ���ǰ��Ŀհף��ո��Ʊ��ַ�

private:
	char *str;
};

#endif
