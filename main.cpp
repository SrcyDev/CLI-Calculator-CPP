#include <iostream>
#include <cmath>

using namespace std;

void print(string s){
    cout << s;
}
int display(){
    cout <<  "\u001b[33m░█████╗░██╗░░░░░██╗  ░█████╗░░█████╗░██╗░░░░░░█████╗░██╗░░░██╗██╗░░░░░░█████╗░████████╗░█████╗░██████╗░\n";
    cout <<  "██╔══██╗██║░░░░░██║  ██╔══██╗██╔══██╗██║░░░░░██╔══██╗██║░░░██║██║░░░░░██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗\n";
    cout <<  "██║░░╚═╝██║░░░░░██║  ██║░░╚═╝███████║██║░░░░░██║░░╚═╝██║░░░██║██║░░░░░███████║░░░██║░░░██║░░██║██████╔╝\n";
    cout <<  "██║░░██╗██║░░░░░██║  ██║░░██╗██╔══██║██║░░░░░██║░░██╗██║░░░██║██║░░░░░██╔══██║░░░██║░░░██║░░██║██╔══██╗\n";
    cout <<  "╚█████╔╝███████╗██║  ╚█████╔╝██║░░██║███████╗╚█████╔╝╚██████╔╝███████╗██║░░██║░░░██║░░░╚█████╔╝██║░░██║\n";
    cout <<  "░╚════╝░╚══════╝╚═╝  ░╚════╝░╚═╝░░╚═╝╚══════╝░╚════╝░░╚═════╝░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░░╚════╝░╚═╝░░╚═╝\u001b[0m\n";
    cout <<  "# Made by \u001b[37;1mSrcyDev\u001b[0m (https://github.com/SrcyDev/)\n";
	cout <<  "# Project: \u001b[37;1mCLI Calculator C++ \u001b[0m (https://github.com/SrcyDev/CLI-Calculator-CPP/)\n";
    
    return 0;
}

int add(long double x,long double y){
    cout << "\n\u001b[34;1mThe result of " << x << " + " << y << " = " << "\u001b[32m" << x + y << "\u001b[0m\n";
    
    return 0;
}

int sub(long double x,long double y){
    cout << "\n\u001b[34;1mThe result of " << x << " - " << y << " = " << "\u001b[32m" << x - y << "\u001b[0m\n";
    
    return 0;
}

int mul(long double x,long double y){
    cout << "\n\u001b[34;1mThe result of " << x << " * " << y << " = " << "\u001b[32m" << x * y << "\u001b[0m\n";
    
    return 0;
}

int divide(long double x,long double y){
    cout << "\n\u001b[34;1mThe result of " << x << " / " << y << " = " << "\u001b[32m" << x / y << "\u001b[0m\n";
    
    return 0;
}

int mod(long double x,long double y){
    cout << "\n\u001b[34;1mThe result of " << x << "\u001b[32;1m MOD \u001b[0m\u001b[34m" << y << " = " << "\u001b[32m" <<  fmod(x ,y) << "\u001b[0m\n";
    return 0;
}

int percent(double x, double y){
    cout << "\n\u001b[34;1mThe result of " << x << " % " << y << " = " << "\u001b[32m" << x * y/100 << "\u001b[0m\n";

    return 0;
}

int sqroot(double x){
    cout << "\n\u001b[34;1mThe result of " << "\u221A" << x << " = " << "\u001b[32m" << sqrt(x) << "\u001b[0m\n";

    return 0;
}

int power(long double x,long double y){
    float r = 1;

    while (y != 0) {
        r *= x;
        --y;
    }
    
    cout << "\n\u001b[34;1mThe result of " << x << " ^ " << y << " = " << "\u001b[32m" << r << "\u001b[0m\n";

    return 0;
}

void help(){
    print("\u001b[31;1mAddition: + : For adding two values. \n");
    print("\u001b[32;1mSubtraction: - : For subtracting two values. \n");
    print("\u001b[33;1mMultiplication: * : For multiplying two values. \n");
    print("\u001b[34;1mDivision: / : For dividing two values. \n");
    print("\u001b[35;1mModulus: _ : For finding the Remainder/Modulus of a value. \n");
    print("\u001b[36;1mPercentage: % : For finding percentage of a value.\n");
    print("\u001b[37;1mPower: ^ : For finding the Exponent of values.\n");
    print("\u001b[31mSquare Root: !  : For finding square root of a single value.\n");
    print("\u001b[32;1mHelp: h : Shows this page.\n");
}

int process(){
    double x,y;
    string c;
    cout << "\n\u001b[31;1mEnter your operator as follows: ";
    cout << "\n\u001b[32;1mAddition: +";
    cout << "\n\u001b[33;1mSubtraction: -";
    cout << "\n\u001b[34;1mMultiplication: *";
    cout << "\n\u001b[35;1mDivision: / ";
    cout << "\n\u001b[36;1mModulus: m";
    cout << "\n\u001b[37;1mSquare Root: s";
    cout << "\n\u001b[31;1mPower: ^";
    cout << "\n\u001b[33;1mHelp: h\u001b[0m\n";
    cout << "\u001b[32;1m> \u001b[0m";
    cin >> c;
    cout << "\n";
    if (c == "s"){
        cout << "\n\u001b[35;1mEnter first number: \u001b[0m\n";
        cout << "\u001b[32;1m> \u001b[0m";
        cin >> x;
        sqroot(x);
    }else if(c == "h"){
        help();
    }else{
        cout << "\n\u001b[35;1mEnter first number: \u001b[0m\n";
        cout << "\u001b[32;1m> \u001b[0m";
        cin >> x;
        cout << "\n";
        cout << "\n\u001b[34;1mEnter second number:  \u001b[0m\n";
        cout << "\u001b[32;1m> \u001b[0m"; 
        cin >> y;
        cout << "\n";
        if (c == "+"){
            add(x,y);
        }else if(c == "-"){
            sub(x,y);
        }else if(c == "*"){
            mul(x,y);
        }else if (c == "/"){
            divide(x,y);
        }else if (c == "^"){
            power(x,y);
        }else if (c == "%"){
            percent(x,y);
        }else if (c == "m"){
            mod(x,y);
        }else if (c == "h"){
            help();
        }
    }
    return 0;
}

string ask(){
    cout << "\u001b[36mDo you want to continue ([Y]es/[N]o) ?: \n";
    string choice;
    cout << "\u001b[32;1m> \u001b[0m";
    cin  >> choice;
    int c = choice.length(); 
    for (int i = 0; i < c; i++)
  	{
  		choice[i] = tolower(choice[i]);
  	}

    if (choice == "yes" || choice == "ye" || choice == "y"){
        process();
        ask();
    }else if(choice == "no" || choice == "n") {
        cout << "\u001b[31;1mExiting....\n\u001b[0m";
    }else{
        cout << "\n\u001b[31;1mERROR.... Unable to Calculate. Please check your entered input and try again.\u001b[0m\n";
        exit(5);
    }
    return 0;
}

int main(){
    // To avoid dump error message
    try{
        display();
        process();
        ask();
    }catch(...){
        cout << "";
    }
    return 0;
}
