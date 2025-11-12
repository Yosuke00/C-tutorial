#pragma once
#include <vector>

class LinearLayer{
    private:
        std::vector<std::vector<double>> weights;
        std::vector<double> bias;
    public:
        LinearLayer(int input_dim, int output_dim);
        std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& x);
};