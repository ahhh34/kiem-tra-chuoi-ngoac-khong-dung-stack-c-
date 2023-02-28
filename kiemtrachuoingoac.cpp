#include <iostream>


using namespace std;



int main()
{
	string st = "{[{{[({[]})]}}]}";
	int len = st.size();
	char ch1[100];
	int k = 1;
	
	
	for (int i = 0; i < len; i++) {
		
		if (st[i] == '(' || st[i] == '{' || st[i] == '[') {
			ch1[k] = st[i];
			k++;
		}
		else {
			
			if (st[i] == ')' && ch1[k - 1] == '(') {
				k -= 1;
			}
			else if (st[i] == '}' && ch1[k - 1] == '{') {
				k -= 1;
			}
			else if (st[i] == ']' && ch1[k - 1] == '[') {
				k -= 1;
			}
			
			else break;
			


		}
	}

	if (k == 1) cout << "chuoi ngoac dung"; // return true
	else cout << "chuoi ngoac sai"; // return false

}