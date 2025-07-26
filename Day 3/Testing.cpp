#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    string result = (marks >= 90) ? "Grade A" :
                    (marks >= 75) ? "Grade B" :
                    (marks >= 50) ? "Grade C" :
                    "Fail";

    cout << "Result: " << result << endl;
    return 0;
}

