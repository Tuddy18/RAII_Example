//
// Created by tuddy on 06-Apr-22.
//

#ifndef RAII_EXAMPLE_DOCUMENT_H
#define RAII_EXAMPLE_DOCUMENT_H

#include <iostream>
#include <string.h>
using namespace std;

class Document{
private:
    char* text;
public:
    Document(const char *text) {
        cout << "Document allocates memory..." << endl;
        this->text = new char[strlen(text) + 1];
        strcpy(this->text, text);
    }
//
//    Document(const Document &other) {
//        cout << "Document passed as value. Creating copy with copy constructor." << endl;
//        this->text = new char[strlen(other.text) + 1];
//        strcpy(this->text, other.text);
//    }
//
//    Document& operator=(const Document& other){
//        if(this->text != nullptr){
//            delete[] this->text;
//        }
//        this->text = new char[strlen(other.text) + 1];
//        strcpy(this->text, other.text);
//        return *this;
//    }


    ~Document() {
        cout << "Document deletes memory..." << endl;
        delete[] this->text;
        this->text = nullptr;
    }

    friend ostream &operator<<(ostream &os, const Document &document) {
        cout << document.text;
        return os;
    }
};


#endif //RAII_EXAMPLE_DOCUMENT_H
