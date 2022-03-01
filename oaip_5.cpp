#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    ofstream fout("data_types.txt", ios_base::out|ios_base::trunc);

    if (!fout.is_open()) {
        cout << "error";

        return 1;
    }

    fout << "df";

    fout.close();

    return 0;
}
