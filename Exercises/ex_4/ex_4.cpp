#include <iostream>
#include <string>
using namespace std;
class Product 
{
	private:
		string name = "";
		double price=1.0;
		int score=0; 
	public:
		void read();
		friend void print();
		bool is_better_than(const Product& );
		
};

void Product::read()
{
cout << "Please enter the model name: ";
getline(cin, name);
cout << "Please enter the price: ";
cin >> price;
cout << "Please enter the score: ";
cin >> score;
string remainder; 
getline(cin, remainder);
}

void print(Product pr)
{
	cout << "Model name: " << pr.name << endl;
	cout << "Model score: " << pr.score << endl;
	cout << "Model price: " << pr.price << endl;
}

bool Product::is_better_than(const Product& pr)
{
	bool var= false;
	if ( (this->score/this->price) > (pr.score/pr.price))
	{
		var= true;
	}
	return var;
}
int main()
{
Product best;
bool more = true;
while (more)
{
Product next;
next.read();
if (next.is_better_than(best)) best = next;
cout << "More data? (y/n) ";
string answer;
getline(cin, answer);
if (answer != "y") more = false;
}
cout << "The best value is ";
print(best);
return 0;
}

