#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string a;
	string b;
	cout << "Input text: ";
	cin >> a;
	string c = func1(a);
    cout << "Reversed text: "<< c << "\n";
	if(func2(a)==func2(c)){
		b ="Yes";
	}else{
		b = "No";
	}
    cout << "Palindrome: "<<b;
    return 0;
}
