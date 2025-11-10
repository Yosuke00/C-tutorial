# ✏️ 4日目の演習課題
Transformerの最も単純なコンポーネントの一つ、ReLU （または GELU） レイヤーを struct として実装してみましょう。
（ReLU: max(0, x)）

## 課題:
### ReLU レイヤーを表す struct ReLU を定義してください。
- ReLU struct はメンバ変数（状態）を持ちません。
- std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& x) というメンバ関数を1つ持ちます。
    - forward 関数は、入力 x（行列）の全要素を max(0, element) で処理し、新しい行列（x と同じサイズ）を return します。
    - 元の x を変更してはいけません（const& で受け取っているので変更できません）。
    - std::vector<std::vector<double>> out; のような出力用ベクトルを準備する必要があります。
- C++で max(a, b) は #include <algorithm> して std::max(a, b) を使えますが、単純な if 文でも実装できます。（例: if (val > 0) { ... } else { ... }）

## main関数でやること:
- ReLU relu_layer; のようにインスタンス化します。
  - std::vector<std::vector<double>> input = {{1.0, -2.0}, {-3.0, 4.0}}; のような入力行列を作ります。
  - std::vector<std::vector<double>> output = relu_layer.forward(input); を呼び出します。
- 結果の output を print_vector（2次元対応版に改造が必要かも？）するか、main 関数内の2重ループで出力し、{{1.0, 0.0}, {0.0, 4.0}} となっていることを確認します。