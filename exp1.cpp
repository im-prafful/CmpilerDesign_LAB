#include <bits/stdc++.h>
using namespace std;

string arr[] = {"void", "using", "namespace", "int", "include", "iostream", "std",
                "main", "cin", "cout", "return", "float", "double", "string"};

bool isKeyword(string a)
{
    for (int i = 0; i < 14; i++)
    {
        if (arr[i] == a)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    fstream file;
    string s, filename;

    filename = "";

    file.open(filename.c_str());

    while (file >> s)
    {
        if (s == "+" || s == "-" || s == "" || s == "/" || s == "^" || s == "&&" || s == "||" || s == "=" || s == "==" || s == "&" || s == "|" || s == "%" || s == "++" || s == "--" || s == "+=" || s == "-=" || s == "/=" || s == "=" || s == "%=")
        {
            cout << s << " is an operator\n";
            s = "";
        }
        else if (isKeyword(s))
        {
            cout << s << " is a keyword\n";
            s = "";
        }
        else if (s == "(" || s == "{" || s == "[" || s == ")" || s == "}" || s == "]" || s == "<" || s == ">" || s == "()" || s == ";" || s == "<<" || s == ">>" || s == "," || s == "#")
        {
            cout << s << " is a symbol\n";
            s = "";
        }
        else if (s == "\n" || s == " " || s == "")
        {
            s = "";
        }
        else if (isdigit(s[0]))
        {
            int x = 0;
            if (!isdigit(s[x++]))
            {
                cout << s << " is an digit\n";
                continue;
            }
        }
        else
        {
            cout << s << " is an identifier\n";
            s = "";
        }
    }
    return 0;
}