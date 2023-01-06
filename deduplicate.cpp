#include <iostream>
#include <vector>

using namespace std;

vector<int> inputVector;

void vectorDeduplicator () {

    vector<int> deduplicatedVector;

    //Here goes the deduplication code
    for (int i = 0; i < inputVector.size(); i++) {
        
        bool isElementFound = false;
        
        for (int j = 0; j < deduplicatedVector.size(); j++) {

            if (inputVector.at(i) == deduplicatedVector.at(j)) {
                isElementFound = true;
                break;
            };

        };
        
        if (!isElementFound) {
                deduplicatedVector.push_back(inputVector.at(i));
        };
        
    };

    //Here goes the output code
    cout << "The deduplicated vector is: [";

    for (int i = 0; i < deduplicatedVector.size(); i++) {

        if (i < deduplicatedVector.size() -1) {
            cout << deduplicatedVector.at(i) << ",";
        } else {
            cout << deduplicatedVector.at(i);
        };
    };
    cout << "]";
};

int main () {

    int value;
    cout << "Enter the vector elements: " << endl;

    //Checks if the input is not of integer type, or if it is not a newline character 
    while (cin >> value && cin.peek() != '\n') { 
        inputVector.push_back(value);
    };
    //Reference from https://stackoverflow.com/questions/53451531/what-is-cin-peek-and-what-does-it-do

    vectorDeduplicator();

    return 0;

};
