#include <iostream>
#include <windows.h>
#include <Lmcons.h>
#include <fstream>

int main() {
    char username[UNLEN+1];
    DWORD username_len = UNLEN+1;
    GetUserName(username, &username_len);

    std::ofstream outfile;
    outfile.open("C:\\Users\\Public\\userlog.txt", std::ios_base::app);
    outfile << username << std::endl;

    return 0;
}