#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	// Using strcmp and strncmp functions
	char str1[20] = "Happy";
	char str2[20];
	
	cout << strlen(str1) << endl;
	
	strcpy(str2, " Day Morning");
	strcat(str1, str2);
	cout << strlen(str1) << endl;
	cout << strcmp(str1, "Happy day Morning") << endl;
	if(!strcmp(str1, "Happy Day Morning")){
		cout << str1;
	}
	return 0;
}
