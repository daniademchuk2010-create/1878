#include <iostream>
using namespace std;

class Car
{
private:
	string name;
	string kuzov;
	string dvugun;
	int kolesa;
	int fari;
public:
	Car():name("no name"), kuzov("none"), dvugun("none") ,kolesa(0) ,fari(0){}
	Car(string n ,string k ,string d ,int K ,int f):name("no name"), kuzov("none"), dvugun("none")  ,kolesa(0), fari(0){}

	void Print()const
	{
		cout << "Name :" << name << endl;
		cout << "Kuzov :" << kuzov << endl;
		cout << "Dvugun :" << dvugun << endl;
		cout << "Kolesa :" << kolesa << endl;
		cout << "Fari :" << fari << endl;
	}

};

enum Type { Sedan ,Universal ,Kupe ,Targa ,Liftbek};
class Kuzov
{
	Type type ;
public:
	Kuzov():type(Sedan){}
	Kuzov(Type t) :type(t){}

	void type()const
	{
		cout << "type :" << endl;
		switch (type)
					{
					case Sedan:cout << "Sedan"; break;
					case Universal:cout << "Universal"; break;
					case Kupe:cout << "Kupe"; break;
					case Targa:cout << "Targa"; break;
					case Liftbek:cout << "Liftbek"; break;
					}
					cout << endl;
				}
};

int main()
{
	Kuzov k(Kupe);
	Kuzov k(Liftbek);
	Kuzov k(Universal);
	Kuzov k(Targa);
	Kuzov k(Liftbek);



}
//enum Type { None, Standart, XL, XXL };
//class Cartridge
//{
//	float volume;
//	string color;
//	Type type;
//public:
//	Cartridge() :volume(0), color("no color"), type(None) {}
//	Cartridge(float v, string c, Type t) :volume(v), color(c), type(t) {}
//	void ShowInfo()const
//	{
//		cout << "Volume : " << volume << endl;
//		cout << "Color : " << color << endl;
//		cout << "Type : ";
//		switch (type)
//		{
//		case None:cout << "None"; break;
//		case Standart:cout << "Standart"; break;
//		case XL:cout << "XL"; break;
//		case XXL:cout << "XXL"; break;
//		}
//		cout << endl;
//	}
//};
//
//class Scanner
//{
//	float scanResolution;
//	float height, width;
//public:
//	Scanner() :scanResolution(0), height(0), width(0) {}
//	Scanner(float s, float h, float w) :scanResolution(s), height(h), width(w) {}
//	void ShowInfo()const {
//		cout << "Scan resolution " << scanResolution << endl;
//		cout << "Area scanning" << height << "x" << width << endl;
//	}
//};
//class Printer
//{
//	string model;
//	Cartridge* cartridges;
//	int countCartridges;
//	Scanner scanner;
//	//Aggregation
//	Document* doc;
//public:
//	Printer() :model("none"), cartridges(nullptr), countCartridges(0), doc(nullptr) {}
//	Printer(string m, float s, float h, float w) :model(m), scanner(s, h, w), doc(nullptr)
//	{
//		countCartridges = 4;
//		cartridges = new Cartridge[countCartridges];
//		cartridges[0] = Cartridge(300, "Red", Type::Standart);
//		cartridges[1] = Cartridge(300, "Green", Type::Standart);
//		cartridges[2] = Cartridge(300, "Blue", Type::Standart);
//		cartridges[3] = Cartridge(300, "Black", Type::Standart);
//	}
//	~Printer()
//	{
//		if (cartridges != nullptr)delete[]cartridges;
//	}
//	void Scan()
//	{
//		cout << "Scanning.................." << endl;
//	}
//	void PrintDocument()
//	{
//	   if (doc != nullptr)
//		{
//			cout << "Printing document......." << endl;
//			doc->ShowInfo();
//		}
//	   else
//	   {
//		   cout << "no document" << endl;
//	   }
//	}
//	void PrintSettings()
//	{
//		for (int i = 0; i < countCartridges; i++)
//		{
//			cartridges[i].ShowInfo();
//		}
//		scanner.ShowInfo();
//	}
//	void AddDoc(Document* doc)
//	{
//		this->doc = doc;
//	}
//};
//class Document {
//	string name;
//	string format;
//	int pages;
//public:
//	Document() :name("none"), format("none"), pages(0) {}
//	Document(string n, string f, int p) :name(n), format(f), pages(p) {}
//	void ShowInfo()const
//	{
//		cout << "--------------- Document : " << name << endl;
//		cout << "Format : " << format << endl;
//		cout << "Pages : " << pages << endl;
//	}
//
//};
//int main()
//{
//	Printer printer("Canon LBP2900", 300, 30, 50);
//	printer.PrintDocument();
//	printer.Scan();
//	printer.PrintSettings();
//
//	Document document1("Passport", "A5", 16);
//	Document document2("C++ for begginers", "A4", 1520);
//
//	printer.AddDoc(&document1);
//	printer.PrintDocument();
//
//
//	printer.AddDoc(&document2);
//	printer.PrintDocument();
//
//
//
//}

