#include <iostream>

using namespace std;

const char *AliceCreates() {
    cout << "Alice allocates memory" << endl;
    const char *document = new char[10000]{"This is a bomb. It can hurt badly."};
    cout << "Alice created document: " << document << endl;
    return document;
}
void BobConsumes(const char *document) {
    cout << "Bob consumed document: " << document << endl;
    delete[] document;
    cout << "Bob deallocates memory" << endl;
}
void CharlieConsumes(const char *document) {
    cout << "Charile consumed document: " << document << endl;
    delete[] document;
    cout << "Charlie deallocates memory" << endl;
}
int main() {
    // Alice: "Hey I created your document!"
    const char *document = AliceCreates();
    // Bob: "Cool! Let me see!"
    // * Bob looks at the document *
    BobConsumes(document);

    // A few weeks later...
    // Charlie: "Hey guys! Just gonna take a quick peek at that document..."
    // Alice&Charlie: "Oh no..."
    CharlieConsumes(document); // here the bomb explodes

    return 0;
}







