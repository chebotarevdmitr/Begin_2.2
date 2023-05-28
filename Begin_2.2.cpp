#include <iostream>
using namespace std;

int main() {
//переменные типы данных
// int - целочисленный тип      4 байта    ,year_of_birth - год рождения	
   int year_of_birth = 1978;	
//  char - символьный тип ,     1 байт     gender - пол 
	char gender = 'f';
// bool - лгический тип ,       4 байта   is_older_than_18 -старше 18 , true - правда ,folse - ложь	
	bool is_older_than_18 = true ;
// float - десятичный тип (с плавающей точкой )  4 байта    ,average_grad - средняя оценка	
    float average_grad = 4.5; 
// double - двойной десятичный тип  8 байт     balance -баланс
   double balance =292929292877;
   
   cout<< "Size of int is  "<<sizeof(int)<<"bytes \n";
   // -1,-2,-3,....,-2147483648
   cout<<"Int min value is  "<< INT_MIN << endl;
   // 0,1,2,3,.....,2147483647
   cout<<"Int max value is   "<< INT_MAX << endl; 	
   
   cout<<"Size of unsigned int is  "<< sizeof(unsigned int)<<"bytes\n";
   cout<<"UInt value is  "<< UINT_MAX <<endl;
   cout<<"Size of unsigned bool is  "<< sizeof (bool)<<"bytes\n";
   cout<<"Size of unsigned char is  "<< sizeof (char)<<"bytes\n";
   cout<<"Size of unsigned float is  "<< sizeof (float)<<"bytes\n";
   cout<<"Size of unsigned double is  "<< sizeof (double)<<"bytes\n\n\n\n";
   
   cout <<"perepolnenie tipov dannyh "<<endl ;
   int int_max = INT_MAX;
   cout << int_max << endl;
   cout << int_max +1;
   	
	system("pause>0");
}
	
