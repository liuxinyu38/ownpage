//#include <iostream>
//using namespace std;
//
//int main() {
//    int k[5];  // �����СΪ5
//    int cnt = 0;
//    int m1 = 0, m2 = 0;  // ��ʼ����Ϊ0
//
//    // ��ȡ���루���5������������������룩
//    for (int i = 0; i < 5; i++) {
//        if (!(cin >> k[i])) {
//            if (cin.eof()) {  // �����������Ctrl+Z��
//                break;
//            }
//            else {          // ����������
//                cin.clear();
//                cin.ignore(1024, '\n');
//                cout << "����������������" << endl;
//                return 1;
//            }
//        }
//        cnt++;
//    }
//
//    // ���������
//    if (cnt == 0) {
//        cout << "����δ������Ч������" << endl;
//        return 1;
//    }
//
//    // ��ʼ����С/���ֵ
//    int mins = k[0], maxs = k[0];
//
//    // �������飬������С/���ֵ����
//    for (int i = 0; i < cnt; i++) {
//        if (k[i] < mins) {
//            mins = k[i];
//            m1 = i;
//        }
//        if (k[i] > maxs) {
//            maxs = k[i];
//            m2 = i;
//        }
//    }
//
//    cout << "��Сֵ������" << m1 << endl;
//    cout << "���ֵ������" << m2 << endl;
//    return 0;
//}