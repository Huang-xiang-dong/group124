#include"sm4.h"
using namespace std;
int main()
{
	//���鳤��128bit����Կ����128bit
	BaseType str="0123456789ABCDEF8976543210ABCFDE";
	cout << "����:" << str.substr(0, 8)<<" "<< str.substr(8, 8)<<" " << str.substr(16, 8)<< " " << str.substr(24, 8) << endl;
	BaseType key = "0987654321ABCDEFFEDCBA9876543210";
	cout << "��Կ:" << key.substr(0, 8) << " " << key.substr(8, 8) << " " << key.substr(16, 8) << " " << key.substr(24, 8) << endl;
	BaseType cipher = SM4EnCry(str, key);
	cout << "����:" << cipher.substr(0, 8) << " " << cipher.substr(8, 8) << " " << cipher.substr(16, 8) << " " << cipher.substr(24, 8) << endl;
	cout << "������Կ:" << key.substr(0, 8) << " " << key.substr(8, 8) << " " << key.substr(16, 8) << " " << key.substr(24, 8) << endl;
	BaseType plain = SM4DeCry(cipher, key);
	cout << "��������:" << plain.substr(0, 8) << " " << plain.substr(8, 8) << " " << plain.substr(16, 8) << " " << plain.substr(24, 8) << endl;
	return 0;
}