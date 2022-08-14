#include "source.h"

using namespace std;

class Calc {
    public:
        
        static int add(long double x, long double y) {
            cout << "\n\x1b[34;1mThe result of " << x << " + " << y << " = " << "\x1b[32m" << x + y << "\x1b[0m\n";

            return 0;
        }
  
        static int sub(long double x, long double y) {
            cout << "\n\x1b[34;1mThe result of " << x << " - " << y << " = " << "\x1b[32m" << x - y << "\x1b[0m\n";

            return 0;
        }
   
        static int multiply(long double x, long double y) {
            cout << "\n\x1b[34;1mThe result of " << x << " * " << y << " = " << "\x1b[32m" << x * y << "\x1b[0m\n";

            return 0;
        }
    
        static int divide(long double x, long double y) {
            cout << "\n\x1b[34;1mThe result of " << x << " / " << y << " = " << "\x1b[32m" << x / y << "\x1b[0m\n";

            return 0;
        }
    
        static int mod(long double x, long double y) {
            
            cout << "\n\x1b[34;1mThe result of " << x << "\x1b[32;1m MOD \x1b[0m\x1b[34m" << y << " = " << "\x1b[32m" << x - (x / y) * y << "\x1b[0m\n";

            return 0;
        }
 
        static int percent(long double x, long double y) {
            cout << "\n\x1b[34;1mThe result of " << x << " % " << y << " = " << "\x1b[32m" << x * y / 100 << "\x1b[0m\n";

            return 0;
        }

        static int power(long double x, long double y) {
            long double r = 1;

            while (y != 0) {
                r *= x;
                --y;
            }

            cout << "\n\x1b[34;1mThe result of " << x << " ^ " << y << " = " << "\x1b[32m" << r << "\x1b[0m\n";

            return 0;
        }

        static int rt(long double x, long double y) {
            // Help required to localize the process without using pow
            cout << "\n\x1b[34;1mThe result of "<< y << "\x1b[32;1m SQRT \x1b[0m\x1b[34m" << x << " = " << "\x1b[32m" << pow(x,1.0/y) << "\x1b[0m\n";

            return 0;
        }
    
        static void help() {
            cout << "\x1b[31;1mAddition: + : For adding two values. \n";
            cout << "\x1b[32;1mSubtraction: - : For subtracting two values. \n";
            cout << "\x1b[33;1mMultiplication: * : For multiplying two values. \n";
            cout << "\x1b[34;1mDivision: / : For dividing two values. \n";
            cout << "\x1b[35;1mModulus: m : For finding the Remainder/Modulus of a value. \n";
            cout << "\x1b[36;1mPercentage: % : For finding percentage of a value.\n";
            cout << "\x1b[37;1mPower: ^ : For finding the Exponent of values.\n";
            cout << "\x1b[31mRoot: s  : For finding root of a value.\n";
            cout << "\x1b[32;1mHelp: h : Shows this page.\n";
        }

    
        static int ask() {
            cout << "\x1b[36mDo you want to continue ([Y]es/[N]o) ?: \n";
            string choice;
            cout << "\x1b[32;1m> \x1b[0m";
            cin >> choice;
            int c = (int)choice.length();
            for (int i = 0; i < c; i++) {
                choice[i] = tolower(choice[i]);
            }

            if (choice == "yes" || choice == "ye" || choice == "y") {
                process();
                ask();
            }
            else if (choice == "no" || choice == "n") {
                cout << "\x1b[31;1mExiting....\n\x1b[0m"; 
            }
            else {
                cout << "\n\x1b[31;1mERROR.... Unable to Calculate. Please check your entered input and try again.\x1b[0m\n";
                ask();
            }
            return 0;
        }

        static int process() {
            double x, y;
            string c;
            cout << "\x1b[35;1mEnter first value: \x1b[0m\n";
            cout << "\x1b[32;1m> \x1b[0m";
            cin >> x;
            
            if (cin.fail()) {
                cout << "\n\x1b[31;1mERROR.... Unable to Determine. Please check your entered input and try again.\x1b[0m\n";
                exit(-1);
            }

            cout << "\n";
            cout << "\n\x1b[31;1mEnter your operator as follows: ";
            cout << "\n\x1b[32;1mAddition: +";
            cout << "\n\x1b[33;1mSubtraction: -";
            cout << "\n\x1b[34;1mMultiplication: *";
            cout << "\n\x1b[35;1mDivision: / ";
            cout << "\n\x1b[36;1mModulus: m";
            cout << "\n\x1b[31;1mPower: ^";
            cout << "\n\x1b[37;1mRoot: s";
            cout << "\n\x1b[33;1mHelp: h\x1b[0m\n";
            cout << "\x1b[32;1m> \x1b[0m";
            cin >> c;

            if (cin.fail()) {
                cout << "\n\x1b[31;1mERROR.... Unable to Determine. Please check your entered input and try again.\x1b[0m\n";
                exit(-1);
            }

            cout << "\n";
            cout << "\n\x1b[34;1mEnter second value:  \x1b[0m\n";
            cout << "\x1b[32;1m> \x1b[0m";
            cin >> y;

            if (cin.fail()) {
                cout << "\n\u001b[31;1mERROR.... Unable to Determine. Please check your entered input and try again.\u001b[0m\n";
                exit(-1);
                
            }

            if (c == "+") {
                add(x, y);
            }
            else if (c == "-") {
                sub(x, y);
            }
            else if (c == "*") {
                multiply(x, y);
            }
            else if (c == "/") {
                divide(x, y);
            }
            else if (c == "^") {
                power(x, y);
            }
            else if (c == "%") {
                percent(x, y);
            }
            else if (c == "m") {
                mod(x, y);
            }
            else if (c == "s") {
                rt(x, y);
            }
            else if (c == "h") {
                help();
            }
            else {
                cout << "\n\x1b[31;1mERROR.... Unable to Determine. Please check your entered input and try again.\x1b[0m\n";
                exit(-1);
            }

            

            return 0;

        }
};

int main() {
    try {
        
        Calc run;
        run.process();
        run.ask();
    }
    catch(exception e) {
        cout << "";
        exit(0);
    }
    
    return 0;
}
