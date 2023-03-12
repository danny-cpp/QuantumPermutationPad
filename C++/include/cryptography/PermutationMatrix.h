#pragma once

#include <PCH.h>





namespace QPP {

    namespace params {
        static const int n =                  8;
        static const int M =                  64;
        static const int mat_len =            (1 << n);
        static const int mat_size =           (mat_len * mat_len);
    }
    
    class PermutationMatrix {
    public:
        PermutationMatrix();
        uint8_t getValueAt(int row, int col);
        void setValueAt(int row, int col, int value);
        std::array<uint8_t, params::mat_len> multiply (std::array<uint8_t, params::mat_len> vector);
        //transpose the permutation matrix and return a new one
        PermutationMatrix transpose();


    private:
        
        std::array<std::array<uint8_t, params::mat_len>, params::mat_len> matrix;


    };
}