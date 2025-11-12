# ✏️ 5日目の演習課題
DAY4のReLUは簡単すぎたので、今日はTransformerの心臓部である LinearLayer (全結合層) の実装に挑戦しましょう。
これは Python (Numpy) での Y = np.dot(X, W) + B に相当する処理です。C++にはNumpyがないため、行列積を自力で実装する必要があります。（Numpy経験者のあなたなら、ロジックはわかるはずです）
## 課題:
LinearLayer クラスを、LinearLayer.h と LinearLayer.cpp に分けて実装してください。
### LinearLayer.h の要件:
- class LinearLayer を定義。
- private: メンバ:
    - std::vector<std::vector<double>> weights;
    - std::vector<double> bias;
- public: メンバ:
  - コンストラクタ: LinearLayer(int input_dim, int output_dim);
  - forward 関数: std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& x);
### LinearLayer.cpp の要件:
- コンストラクタ (LinearLayer::LinearLayer):
    - input_dim と output_dim を受け取ります。
    - weights を input_dim x output_dim のサイズで初期化します (中身は 0.1 など適当な値で)。
    - bias を output_dim のサイズで初期化します (中身は 0.1 など適当な値で)。
- forward 関数 (LinearLayer::forward):
    - x (入力) は Batch x input_dim の行列だと仮定します。
    - weights は input_dim x output_dim です。
    - bias は output_dim です。
    - 戻り値 output は Batch x output_dim の行列になります。
- 行列積 (Y = X * W + B) の実装:
  - Batch サイズは x.size() で取得できます。
  - input_dim は weights.size() で取得できます。
  - output_dim は bias.size() で取得できます。
  - output ベクトルを Batch x output_dim で、中身 0.0 で初期化します。

## main.cpp (テスト用)
- LinearLayer.h を #include します。
- LinearLayer layer(3, 2); のようにインスタンス化します (入力3次元, 出力2次元)。
- std::vector<std::vector<double>> input = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}}; (2バッチ x 3次元) を定義します。
- std::vector<std::vector<double>> output = layer.forward(input); を呼び出します。
- output をmain関数内のループで出力し、(2バッチ x 2次元) の行列が出力されることを確認します。