
## 2日目の演習課題
DAY1のif/forと、DAY2のvector/関数を組み合わせてみましょう。
Numpyで行列の合計値を出すようなイメージです。

### 課題:
#### 「std::vector<std::vector<double>> (行列) を受け取り、その全要素の合計値を計算して返す関数 double sum_matrix(...) を実装してください。」

#### ヒント:
- #include <vector> と #include <iostream> が必要です。
- sum_matrix 関数のシグネチャ（定義）は double sum_matrix(std::vector<std::vector<double>> matrix) となります。
- 関数の中で、double sum = 0.0; のような合計値用変数を初期化します。
- forループを2重にネスト（入れ子に）して、行列の全要素にアクセスします。
- main関数の中で、適当な2次元ベクトル（例: {{1.1, 2.2}, {3.3, 4.4}}）を定義します。
- main関数から sum_matrix を呼び出し、戻り値（合計値）を std::cout で出力します。

### （発展） 1次元の std::vector<double> を受け取り、その中身をすべて表示する関数 void print_vector(std::vector<double> vec) も作ってみましょう（voidは戻り値がないという意味です）。

