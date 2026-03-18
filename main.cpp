#include <iostream>
#include <string>
using namespace std;

/*
    Cấu trúc hocsinh
    Chức năng: lưu trữ thông tin của một học sinh gồm họ tên, điểm toán và điểm văn
*/

struct hocsinh{
    string hovaten;
    float diemtoan;
    float diemvan;
};

/*
    Hàm main
    Chức năng: nhập thông tin học sinh, tính điểm trung bình và in ra kết quả
    Đầu vào: họ tên, điểm toán, điểm văn
    Đầu ra: thông tin học sinh và điểm trung bình
*/

int main()
{
    hocsinh hs;
    getline(cin, hs.hovaten);
    cin >> hs.diemtoan;
    cin >> hs.diemvan;
    if (hs.hovaten == ""){
        cout<<"Ten khong hop le";
        return 0;
    }
    if (hs.diemtoan < 0 || hs.diemtoan > 10 || hs.diemvan < 0 || hs.diemvan > 10){
        cout<<"Diem khong hop le";
        return 0;
    }
    float trungbinh = (hs.diemtoan + hs.diemvan) / 2;
    cout << hs.hovaten << endl;
    cout << hs.diemtoan << endl;
    cout << hs.diemvan << endl;
    cout << trungbinh << endl;
    return 0;
}
