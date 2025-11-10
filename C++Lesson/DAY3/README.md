### 課題:
「std::vector<double> を受け取り、その全要素を2倍にする関数を2種類実装し、違いを確認してください。」
- std::vector<double> double_vector_copy(std::vector<double> vec)値渡し（コピー）で vec を受け取ります。
vec の全要素を2倍にします。
変更後の vec を return します。
- void double_vector_reference(std::vector<double>& vec)
参照渡し（&）で vec を受け取ります。
vec の全要素を2倍にします。void（何も返さない）です。
- main関数でやること:
std::vector<double> my_vec = {1.0, 2.0, 3.0}; を定義します。
print_vector 関数（DAY2レビューの const& 版）も用意してください。
#### 実験1:
std::vector<double> copied_vec = double_vector_copy(my_vec); を呼び出します。
std::cout << "--- Copy --- \n";
print_vector(my_vec); を呼び出します。（my_vec はどうなっている？）
print_vector(copied_vec); を呼び出します。
#### 実験2:
std::cout << "--- Reference --- \n";
double_vector_reference(my_vec); を呼び出します。
print_vector(my_vec); を呼び出します。（my_vec はどうなっている？）

この課題で「参照渡し」が my_vec 本体を直接書き換えることを確認してください。