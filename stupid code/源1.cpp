//#include <iostream>
//using namespace std;
//
//int main() {
//    int k[5];  // 数组大小为5
//    int cnt = 0;
//    int m1 = 0, m2 = 0;  // 初始索引为0
//
//    // 读取输入（最多5个整数，处理错误输入）
//    for (int i = 0; i < 5; i++) {
//        if (!(cin >> k[i])) {
//            if (cin.eof()) {  // 输入结束（如Ctrl+Z）
//                break;
//            }
//            else {          // 非整数输入
//                cin.clear();
//                cin.ignore(1024, '\n');
//                cout << "错误：请输入整数！" << endl;
//                return 1;
//            }
//        }
//        cnt++;
//    }
//
//    // 处理空输入
//    if (cnt == 0) {
//        cout << "错误：未输入有效整数！" << endl;
//        return 1;
//    }
//
//    // 初始化最小/最大值
//    int mins = k[0], maxs = k[0];
//
//    // 遍历数组，更新最小/最大值索引
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
//    cout << "最小值索引：" << m1 << endl;
//    cout << "最大值索引：" << m2 << endl;
//    return 0;
//}