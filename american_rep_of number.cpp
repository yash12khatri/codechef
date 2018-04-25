#include <iostream>
using namespace std;


string one[] = { "", "one ", "two ", "three ", "four ",
				"five ", "six ", "seven ", "eight ",
				"nine ", "ten ", "eleven ", "twelve ",
				"thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ",
				"nineteen "
			};



string ten[] = { "", "", "twenty ", "thirty ", "forty ",
				"fifty ", "sixty ", "seventy ", "eighty ",
				"ninety "
		};
		

string num_word(long long int n, string s)
{
    string str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
 
    // if n is non-zero
    if (n)
        str += s;
 
    return str;
}


string convert(long long n){
	
	string s;
	
	s += num_word((n/1000000000000),"trillion ");
	
	s += num_word(((n/100000000000) % 10), "hundred ");
	
	s += num_word(((n/1000000000) %100), "billion ");
	
	s += num_word(((n/100000000) % 10), "hundred ");
	
	s += num_word(((n/1000000) % 100), "million ");
	
	s += num_word(((n/100000) % 10), "hundred ");
	
	s += num_word(((n / 1000) % 100), "thousand ");
	
	s += num_word(((n/100) % 10), "hundred ");
	
	s += num_word((n % 100), "");
	
	
	return s;

}


int main(){
	int t;
	cin>>t;
		long long int n;
	while(t--){
	
		cin>>n;
		cout<< convert(n) <<"\b"<<endl;
		
	}
	return 0;
}
