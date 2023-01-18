#include <iostream>
using namespace std;

class ArrayPalindromeChecker {
private:
    int arr[6];
    int counter;

public:
    ArrayPalindromeChecker() {
        counter = 0;
    }
    
    void getNum(int n) {
        if(counter >= 6) {
            return;
        } else {
            arr[counter] = n;
            counter++;
        }
    }

    bool isPalindrome() {
        int left = 0;
        int right = counter - 1;
        while (right > left) {
            if (arr[right] != arr[left]) {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};

int main() {
    ArrayPalindromeChecker checker;
    int n, opt = 1;
    while (opt != 0) {
        cout << "Press 1 to enter Numbers\nPress 2 to check Palindrome\nPlease Enter Your Choice:: ";
        cin >> opt;
        
        switch(opt) {
            case 1:
                cout << "\tPlease Enter Your Number\n\n";
                for(int i =0; i < 6; i++) {
                    cout << "Enter Number: ";
                    cin >> n;
                    checker.getNum(n);
                }
                break;
                
            case 2:
                cout << "\tIs Palindrome \n\n";
                if (checker.isPalindrome()) {
                    cout << "The array is a palindrome\n\n" << endl;
                } else {
                    cout << "The array is not a palindrome\n\n" << endl;
                }
                break;
        }
    }
    return 0;
}

