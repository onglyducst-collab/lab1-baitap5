#include <iostream>
#include <string>
using namespace std;

struct hocsinh{
    string hovaten;
    float diemtoan;
    float diemvan;
};

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
