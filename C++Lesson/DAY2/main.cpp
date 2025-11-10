#include <iostream>
#include <vector>

void print_vector(const std::vector<double>& vec) {
    for (const auto& val : vec) {
        std::cout << val << "\n";
    };
}

double sum_matrix(const std::vector<std::vector<double>>& matrix) {
    double sum_result = 0.0;
    for (const auto& row : matrix) {
        print_vector(row);
        for (double value : row) {
            sum_result += value;
        };
    };
    return sum_result;
};

int main() {
    const std::vector<std::vector<double>> raw_matrix = {{1.1, 2.2}, {3.3, 4.4}};
    const double sum_result = sum_matrix(raw_matrix);
    std::cout << sum_result << "\n";
    return 0;
};