#include "LinearLayer.h"
#include <iostream>

LinearLayer::LinearLayer(int input_dim, int output_dim) {
    weights.resize(input_dim, std::vector<double>(output_dim, 0.1));
    bias.resize(output_dim, 0.1);
};

std::vector<std::vector<double>> LinearLayer::forward(const std::vector<std::vector<double>>& x){
    int B = x.size();
    int input_dim = x[0].size();
    int output_dim = bias.size();
    std::vector<std::vector<double>> output(B, std::vector<double>(output_dim, 0.0));
    for (int b=0; b < B; ++b) {
        for (int o=0; o < output_dim; ++o) {
            for (int i=0; i < input_dim; ++i) {
                output[b][o] += x[b][i]*weights[i][o];
            };
            output[b][o] += bias[o];
        };
    };
    return output;
}