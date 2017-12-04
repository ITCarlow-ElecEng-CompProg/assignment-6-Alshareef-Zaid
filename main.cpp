
/**
Zaid H Alshareef
C00210415
25/09/2017
6. Decimal / Binary Numbering Systems Conversion
*/
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>
#include <iomanip>

using namespace std;

/**Sub Functions*/
void bin_2_dec(void);
void dec_2_bin(void);
char displaymenu(void);


/**< main function */
int main(void)
{
      cout << "Decimal / Binary Numbering Systems Conversion\n" << endl;


	/**< variable declarations */
	char choice;

	void bin_2_dec(void);
    void dec_2_bin(void);
    char displaymenu(void);



        do
	 {
        choice = displaymenu();


		/**< switch case statement to implement user's decision */
		switch (choice)
		{
			case 'b':
                        bin_2_dec();
						fflush(stdin);
						getchar();
						break;
			case 'd':
                        dec_2_bin();
						fflush(stdin);
						getchar();
						break;
			case 'q':   cout << "\nGoodbye...\n" << endl;
						break;
			default:	cout << "\nInvalid input, try again...\n" << endl;
						/**< wait for key to be pressed */
						cout << "Press any key to continue..." << endl;
						fflush(stdin);
						getchar();
						break;
		}
	}
	while (choice != 'q');

	return 0;
}


/** function header */
char displaymenu(void)
{
    /** declaring variable type char */
    char choice;
    /** turns previous screen off */
    system("cls");
    /** user enters which command they want to use */
     cout << "Decimal / Binary Numbering Systems Conversion\n" << endl;
    cout << "Press b for bin-dec conversion \n";
    cout << "Press d for dec-bin conversion \n";
    cout << "Press q to quit \n\n";

    choice = getchar();
    return choice;
}
void bin_2_dec()
{
    /** declaring int and long int variables */
    long int bin, dec = 0, remainder;
    int i = 0;

    /** turns previous screen off */
    system("cls");

    /** display headin on console and read in value */
    cout << "Enter Binary number to be converted : \t" ;
    cin >> bin;
    /** while bin is greater than 0 */
    while (bin != 0)
    {
        /** remainder = binary number / 10 */
        remainder = bin % 10;
        /** binary = binary / 10 */
        bin /= 10;
        /** decimal = remainder * 2^i (i = 0 on first loop, 1 on second etc */
        dec = dec + remainder  * pow(2,i);
        i++;
    }
    /** Display binary = decimal value */
    cout << "\n\t\t    Decimal value :   " << dec ;

    cout << "\n\nPress any key to return to the main menu...";

    fflush(stdin);
    getchar();


    /** return to main function */
    return ;
}

/** decimal to binary sub-function */
void dec_2_bin()
{
    /** declaring int and long int variables */
    long int decimal, rem, arrayval[8]={0};
    int i = 0;

    /** turns previous screen off */
    system("cls");

    /** display headin on console and read in value */
    cout << "Enter Decimal number to be converted : \t" ;
    cin >> decimal;
    /** while decimal is greater than 0 */
    while (decimal != 0)
    {
        /** rem = the remainder of decimal after its been divided by 2 */
        rem = decimal % 2;
        /** decimal = decimal /2 */
        decimal /= 2;
        /** binary = binary + rem */
        //binary += rem;
        /** increment i each loop */
        arrayval[i]=rem;
        i++;
    }

    /** condition for for loop to display bin num backwards */
    for(i=7; i>=0; i--)
    {
        cout << arrayval[i];
    }

    cout << "\n\nPress any key to return to the main menu...";

    fflush(stdin);
    getchar();

    /** Return to main function */
    return ;
}
