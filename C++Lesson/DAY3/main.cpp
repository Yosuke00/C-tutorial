#include <iostream>
#include <vector>
void print_vector(const std::vector<double>& vec) {
    for (const auto& val : vec) {
        std::cout << val << "\n";
    };
};

std::vector<double> double_vector_copy(std::vector<double> vec) {
    for (int i=0; i<vec.size(); ++i) {
        vec[i]*=2;
    };
    return vec;
};

void double_vector_reference(std::vector<double>& vec) {
    for (int i=0; i<vec.size(); ++i) {
        vec[i]*=2;
    };
};

/* コピーverの実行関数 */
// int main(){
//     std::vector<double> my_vec = {1.0, 2.0, 3.0};
//     print_vector(my_vec);
//     std::cout << "-----COPY--------"<< "\n";
//     std::vector<double> copied_vec = double_vector_copy(my_vec);
//     std::cout << "------ORIGIN VECTOR-------"<< "\n";
//     print_vector(my_vec);
//     std::cout << "------REFERENCE VECTOR-------"<< "\n";
//     print_vector(copied_vec);
//     return 0;
// };

//* コピーverの実行関数 *//
int main(){
    std::vector<double> my_vec = {1.0, 2.0, 3.0};
    print_vector(my_vec);
    std::cout << "-----REFERENCE--------"<< "\n";
    double_vector_reference(my_vec);
    std::cout << "------ORIGIN VECTOR-------"<< "\n";
    print_vector(my_vec);
    return 0;
};