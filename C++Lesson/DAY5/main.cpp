#include "LinearLayer.h"
#include <iostream>

int main() {
    LinearLayer layer(3,2);
    std::vector<std::vector<double>> input = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
    std::vector<std::vector<double>> output = layer.forward(input);
    for (int i=0; i < output.size(); i++) {
        for (int j=0; j < output[i].size(); j++) {
            std::cout << output[i][j] << " ";
        };
        std::cout << "\n";
    };
}