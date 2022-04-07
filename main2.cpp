#include <iostream>
#include <string.h>
#include "Document.h"

using namespace std;

Document AliceCreates() {
    Document document("This is a contained bomb. It cannot hurt you.");
    cout << "Alice created document: " << document << endl;
    return document;
}
void BobConsumes(Document& document){
    cout << "Bob consumed document: " << document << endl;
}
void CharlieConsumes(Document& document){
    cout << "Charile consumed document: " << document << endl;
}
int main() {
    // Alice: "Hey I created your document!"
    Document document = AliceCreates();

    // Bob: "Cool! Let me see!"
    // * Bob looks at the document *
    BobConsumes(document);

    // A few weeks later...
    // Charlie: "Hey guys! Just gonna take a quick peek at that document..."
    // Alice&Charlie: "Yeah, sure! No problem."
    CharlieConsumes(document);
    return 0;
}

