// following program prompt user by letter and print their corresponding telephone number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char letter;
	int counter;
	counter=0;
	cout<<"Enter letters to get their corresponding telephone digits ";
	while(counter<7)
	{
		letter=cin.get();//we have to input spaces also so we use cin.get()
		if  (letter>='A'&& letter<='z')
		{
		
			counter++;
			
			switch(letter){
				case'A':
				case'a':
				case'B':
				case'b':
				case'C':
				case'c':
					cout<<"1";//same cout for all above cases
					break;
				case'D':
				case'd':
				case'E':
				case'e':
				case'F':
				case'f':
					cout<<"2";
					break;
				case'G':
				case'g':
				case'H':
				case'h':
				case'I':
				case'i':
					cout<<"3";
					break;
				case'J':
				case'j':
				case'K':
				case'k':
				case'L':
				case'l':
					cout<<"4";
					break;
				case'M':
				case'm':
				case'N':
				case'n':
				case'O':
				case'o':
					cout<<"5";
					break;
				case'P':
				case'p':
				case'Q':
				case'q':
				case'R':
				case'r':
					cout<<"6";
					break;
				case'S':
				case's':
				case'T':
				case't':
				case'U':
				case'u':
					cout<<"7";
					break;
				case'W':
				case'w':
				case'X':
				case'x':
					cout<<"8";
					break;
				case'Y':
				case'y':
				case'Z':
				case'z':
					cout<<"9";
					break;}
			if(counter==3)
				cout<<"-";//print hyphen when counter is 3					
		}	
	}
}
