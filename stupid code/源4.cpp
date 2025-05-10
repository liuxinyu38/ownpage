//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//// �������뺯���������Ա��
//int round_loss(float x) {
//    int t1 = static_cast<int>(x);
//    float a1 = x - t1;
//    if (a1 >= 0.5) {
//        return t1 + 1;  // ��1.5��2
//    }
//    else {
//        return t1;       // ��1.4��1
//    }
//}
//
//struct Camp {
//    int id;    // Ӫ�ʱ�ţ�1-10��
//    int num;   // ��ǰ����
//};
//
//int main() {
//    int days;
//    // �������봦��
//    while (cin >> days) {
//        vector<int> soldiers(10);  // 10��Ӫ�ʵĳ�ʼ����
//        for (int i = 0; i < 10; i++) {
//            cin >> soldiers[i];
//        }
//
//        vector<int> status(days);   // ÿ���ս��״̬��0��1��
//        for (int i = 0; i < days; i++) {
//            cin >> status[i];
//        }
//
//        // ģ��ÿ��ļ�Ա�벹��
//        for (int day = 0; day < days; day++) {
//            int current_status = status[day];
//            for (int j = 0; j < 10; j++) {
//                int original = soldiers[j];
//                float loss_rate = (current_status == 0) ? 0.01f : 0.1f;
//                float loss = original * loss_rate;
//                int loss_num = round_loss(loss);  // �����Ա����
//
//                soldiers[j] = original - loss_num;  // ��Ա
//
//                // ��Ա��������<50������200
//                if (soldiers[j] < 50) {
//                    soldiers[j] += 200;
//                }
//            }
//        }
//
//        // ����Ӫ����Ϣ�ṹ������
//        vector<Camp> camps(10);
//        for (int j = 0; j < 10; j++) {
//            camps[j].id = j + 1;
//            camps[j].num = soldiers[j];
//        }
//
//        // ���򣺰���������������ͬ�򰴱������
//        sort(camps.begin(), camps.end(), [](const Camp& a, const Camp& b) {
//            if (a.num != b.num) {
//                return a.num > b.num;  // ��������
//            }
//            else {
//                return a.id < b.id;    // �������������ͬʱ��
//            }
//            });
//
//        // ������������ʽ��"Ӫ�ʺ�:����"���ո�ָ���
//        for (int i = 0; i < 10; i++) {
//            cout << camps[i].id << ":" << camps[i].num;
//            if (i != 9) cout << " ";  // ���һ��Ԫ�غ󲻼ӿո�
//        }
//        cout << endl;
//    }
//
//    return 0;
//}