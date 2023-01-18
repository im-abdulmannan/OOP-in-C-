#include <iostream>
using namespace std;

// Class Decleration
class EN {
	private:
    	int Arr[50];
    	int counter;

	public:
    	EN() {
        	counter = 0;
    	}


	// Interchange Method
    int  Interchange( int num1, int num2 ) {
        int num3 = 0;
        if( num1 >= num2 ) {
            num3 = num1;
            num1 = num2;
            num2 = num3;
    
            altEvenNumber( num1, num2 );
        }
    }

	// Positive
	int Positive( int num1, int num2 ) {
    	if( ( num1 < 0 ) && ( num2 < 0 ) ) {
        	num1 = -num1;
        	num2 = -num2;

        	altEvenNumber(num1, num2);
   		}
 	}

	// Condition Check
	bool conditionCheck( int num1, int num2 ){
    	cout << "\nCondition Check" << endl;
    	if( num1 >= num2 ) {
        	char choice;
        	cout << "Dou You Want To Change ?";   
	        cin>>choice;
    	    Interchange(num1, num2);    
    	}
    	else if ( num1 < 0 || num2 < 0 ){
        	char choice;
        	cout << "Dou You Want To Change ?";   
 	    	cin>>choice;
        	Positive( num1, num2 );
	    }
    	else if ( ( ( num2 - num1 ) / 4 ) < 25 ) {
        	return false;
    	}
    	else {
        	return true;
    	}
	}

	// Alternative Even Numbers	
	int altEvenNumber( int num1, int num2 ) {
    	cout << "\nAlternate Even Numbers" << endl;
    	if ( num1 % 2 == 0 ) {
        	for ( int i = num1; i <= num2;  i = i + 4 ) {
            	Arr[counter] = i;
            	counter++;
        	}
    	}
    	else {
        	num1 = num1 + 1;
        	for ( int i = num1; i <= num2;  i = i + 4 ) {
            	Arr[counter] = i;
            	counter++;
        	}
    	}
	}


	// View Numbers
	void viewNumbers(){
        for ( int i = 0; i < counter; i++ ) {
            cout << Arr[i] << ", ";
        }
	}

};

//Main Function

int main() {
        EN Alt;

        int num1 = 0, num2 = 0, opt = 1;
        while ( opt != 0 ) {
            cout << "Press 1 To Get Two Numbers. " << endl;
            cout << "Press 2 To View Numbers. " << endl;
            cout << "Press 0 To EXIT. " << endl;
            cout << "Enter Your Choice Here: " << endl;
            cin >> opt;

        	switch ( opt ) {
            	case 1:
                	cout << "\nEnter 1st Number: ";
                	cin >> num1;
                	cout << "Enter 2nd Number: ";
                	cin >> num2;
                	cout << endl;
                	Alt.conditionCheck( num1, num2 );
                	cout << endl;
                	Alt.altEvenNumber( num1, num2 );
                	break;

            	case 2:
                	cout << "\nView Numbers: ";
                	Alt.viewNumbers();
                	cout << endl;
                	break;
            	}
        	}
        	
    return 0;
    
}
