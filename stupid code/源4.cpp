//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//// 四舍五入函数（处理减员）
//int round_loss(float x) {
//    int t1 = static_cast<int>(x);
//    float a1 = x - t1;
//    if (a1 >= 0.5) {
//        return t1 + 1;  // 如1.5→2
//    }
//    else {
//        return t1;       // 如1.4→1
//    }
//}
//
//struct Camp {
//    int id;    // 营帐编号（1-10）
//    int num;   // 当前人数
//};
//
//int main() {
//    int days;
//    // 多组输入处理
//    while (cin >> days) {
//        vector<int> soldiers(10);  // 10个营帐的初始人数
//        for (int i = 0; i < 10; i++) {
//            cin >> soldiers[i];
//        }
//
//        vector<int> status(days);   // 每天的战斗状态（0或1）
//        for (int i = 0; i < days; i++) {
//            cin >> status[i];
//        }
//
//        // 模拟每天的减员与补充
//        for (int day = 0; day < days; day++) {
//            int current_status = status[day];
//            for (int j = 0; j < 10; j++) {
//                int original = soldiers[j];
//                float loss_rate = (current_status == 0) ? 0.01f : 0.1f;
//                float loss = original * loss_rate;
//                int loss_num = round_loss(loss);  // 计算减员人数
//
//                soldiers[j] = original - loss_num;  // 减员
//
//                // 减员后若人数<50，补充200
//                if (soldiers[j] < 50) {
//                    soldiers[j] += 200;
//                }
//            }
//        }
//
//        // 构建营帐信息结构体数组
//        vector<Camp> camps(10);
//        for (int j = 0; j < 10; j++) {
//            camps[j].id = j + 1;
//            camps[j].num = soldiers[j];
//        }
//
//        // 排序：按人数降序，人数相同则按编号升序
//        sort(camps.begin(), camps.end(), [](const Camp& a, const Camp& b) {
//            if (a.num != b.num) {
//                return a.num > b.num;  // 人数降序
//            }
//            else {
//                return a.id < b.id;    // 编号升序（人数相同时）
//            }
//            });
//
//        // 输出结果（按格式："营帐号:人数"，空格分隔）
//        for (int i = 0; i < 10; i++) {
//            cout << camps[i].id << ":" << camps[i].num;
//            if (i != 9) cout << " ";  // 最后一个元素后不加空格
//        }
//        cout << endl;
//    }
//
//    return 0;
//}