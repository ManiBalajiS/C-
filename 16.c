#include <iostream>
#include <cstring>
using namespace std;
class S {
public:
    char* str;
    S() {
       str = NULL;
    }
    S(const char* s) {
        str = new char[strlen(s) + 1];
         strcpy(str, s);
    }
    S(const char* s1, const char* s2) {
        str = new char[strlen(s1) + strlen(s2) + 1];
       strcpy(str, s1);
        strcat(str, s2);
    }
    char* findVowels() {
        if (str==NULL) return NULL;
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = tolower(str[i]);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                count++;
        }
        char* vowels = new char[count + 1];
        int index = 0;
        for (int i = 0; str[i] != '\0'; i++) {
           char ch = tolower(str[i]);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels[index++] = str[i];
        }
         vowels[index] = '\0';
        return vowels;
    }
    ~S() {
        delete[] str;
    }
};
int main() {
     S s1;
     S s2("Karnan");
     S s3("Mani","Balaji");
     cout << "String s2: " << s2.str << endl;
    char* vowels2 = s2.findVowels();
    cout << "Vowels are: " << (vowels2) << endl;
     cout << "String s3: " << s3.str << endl;
    char* vowels3 = s3.findVowels();
    cout << "Vowels are " << (vowels3) << endl;
    return 0;
}
