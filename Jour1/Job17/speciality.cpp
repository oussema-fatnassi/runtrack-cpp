#include <iostream>
using namespace std;

enum Speciality {
    AI,
    WEB,
    SOFTWARE,
    CYBERSECURITY,
    AR
};

void showSpeciality(Speciality speciality, int places) {
    switch (speciality) {
        case AI:
            cout << "AI: " << places << " places" << endl;
            break;
        case WEB:
            cout << "WEB: " << places << " places" << endl;
            break;
        case SOFTWARE:
            cout << "SOFTWARE: " << places << " places" << endl;
            break;
        case CYBERSECURITY:
            cout << "CYBERSECURITY: " << places << " places" << endl;
            break;
        case AR:
            cout << "AR: " << places << " places" << endl;
            break;
    }
}

int main() {
    Speciality specialities[] = {AI, WEB, SOFTWARE, CYBERSECURITY, AR};
    int students[5];
    for (int i = 0; i < 5; i++) {
        students[i] = rand()%(55)+12;
    }

    for (int i = 0; i < 5; i++) {
        showSpeciality(specialities[i], students[i]);
    }

    return 0;
}