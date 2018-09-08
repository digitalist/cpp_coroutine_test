/*
 * example modified from www.modernescpp.com/index.php/coroutines
 *
 * lazyGenerator.cpp
 * uses https://github.com/lewissbaker/cppcoro
 */
#include <iostream>
#include <experimental/coroutine>
#include "cppcoro/include/cppcoro/generator.hpp"

//added cppcoro:: and `end` parameter, just for an experiment
cppcoro::generator<int> generatorForNumbers(int begin, int inc=1, int end=INT32_MAX){

    for (int i= begin; i<=end; i += inc){
        co_yield i;
    }

}

int main(){

    std::cout << std::endl;

    for (auto n: generatorForNumbers(0, 1, 200)) std::cout << n << " ";

    std::cout << "\n\n";

    //this doesn't work for me :(
    /*
    auto numbers = generatorForNumbers(-10);
    for (int i= 1; i <= 20; ++i){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n\n";
     */

}
