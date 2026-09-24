#include <iostream>
#include <string>

// using std::cout;
// using std::endl;
// comment tren 1 dong - trinh bien dich bo qua lenh nay

using namespace std;

int main(){
    int id; // ma so
    string address; // dia chi

    cout << "Hello World" << endl;
    cout << "CodeGym C++" << endl;

    cout << "Moi nhap ma so: " << endl;
    // Nhap du lieu tu ban phim
    cin >> id; 
    cin.ignore(); // xoa bo cu phap xuong dong khi nhap du lieu
    cout << "Moi nhap dia chi cua ban ro rang" << endl;
    // cin >> address; // Chi nhap ki tu khong co khoang trang
    getline(cin, address); // Nhap duoc ca khoang trang trong chuoi

    cout << " ID: " << id <<  " - Address : " << address << endl;

    return 0;
}