#include<algorithm>
#include<vector>
#include<iostream>

struct ReLU {
    std::vector<std::vector<double>> forward(
        const std::vector<std::vector<double>>& x
    ){
        std::vector<std::vector<double>> return_vec = x;
        for (int i=0; i < x.size(); i++) {
            for (int j=0; j < x[i].size(); j++) {
                return_vec[i][j] = std::max(0.0, return_vec[i][j]);
            };
        };
        return return_vec;
    };
};

int main() {
    std::vector<std::vector<double>> input = {{1.0, -2.0}, {-3.0, 4.0}};
    ReLU relu;
    std::vector<std::vector<double>> after_relu_vec = input; 
    after_relu_vec = relu.forward(input);
    for (int i=0; i < after_relu_vec.size(); i++) {
        for (int j=0; j < after_relu_vec[i].size(); j++) {
            std::cout << after_relu_vec[i][j] << " ";
        };
        std::cout << "\n";
    };
    return 0;
};