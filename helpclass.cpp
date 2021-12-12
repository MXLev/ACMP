#include <iostream>

using namespace std;

class help{
public:
    void help_on(char what);
    void show_menu();
    bool is_valid(char ch);
};

void help::help_on(char what) {
    switch (what) {
        case 1:
            cout << " sentence if \n\n";
            cout << " if (condition) "
                    "{sentence}\n";
            cout << "else "
                    "{sentence}\n";
            break;
        case '2':
            cout << "sentence switch:\n\n";
            cout << "switch expression{\n";
            cout << "case constant:\n";
            cout << "sequence of sentences\n";
            cout << "break;\n";
            cout << "// ... \n";
            cout << "}\n";
            break;
        case '3':
            cout << "cycle for: \n\n";
            cout << "for (initialization; condition; increment){\n";
            cout << "sentence}\n";
            break;
        case '4':
            cout << "cycle while:\n\n";
            cout << "while(condition){"
                    "sentence}\n";
            break;
        case '5':
            cout << "cycle do-while\n\n";
            cout << "do {\n";
            cout << "sentence\n}";
            cout << "while(condition);\n";
            break;
        case '6':
            cout << "sentence break: \n\n";
            cout << "break;\n";
            break;
        case '7':
            cout << "sentence continue:\n\n";
            cout << "continue;\n";
            break;
        case '8':
            cout << "sentence goto:\n\n";
            cout << "goto mark;\n";
            break;
    }
    cout << "\n";
}

void help::show_menu() {
    cout << "help on: \n";
    cout << "1. if \n";
    cout << "2. switch \n";
    cout << "3. for \n";
    cout << "4. while \n";
    cout << "5. do-while\n";
    cout << "6. break\n";
    cout << "7. continue\n";
    cout << "8. goto\n";
    cout << "select one of the items";
    cout << "press 'q' to finish";
    cout << "\n";
}

bool help::is_valid(char ch) {
    if (ch < '1' || ch > '8' && ch != 'q') {
        return false;
    } else {
        return true;
    }
}

int main() {
    char choice;
    help hlpob;
    for (;;) {
        do {
            hlpob.show_menu();
            cin >> choice;
        } while (!hlpob.is_valid((choice)));
        if (choice == 'q')
            break;

        cout << " \n";
        hlpob.help_on(choice);
    }
}