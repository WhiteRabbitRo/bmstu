//
//  main.cpp
//  mo-5
//
//  Created by Игорь on 12.12.2018.
//  Copyright © 2018 Игорь. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <random>
//min = 10.794

double func(double x) {return exp(-0.2*x)*sin(x)+1;}
double mod_func(double x) {return func(x)*sin(5*x);}

template<typename Numeric, typename Generator = std::mt19937>
Numeric random(Numeric from, Numeric to)
{
    thread_local static Generator gen(std::random_device{}());

    using dist_type = typename std::conditional
    <
    std::is_integral<Numeric>::value
    , std::uniform_int_distribution<Numeric>
    , std::uniform_real_distribution<Numeric>
    >::type;

    thread_local static dist_type dist;

    return dist(gen, typename dist_type::param_type{from, to});
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int b = 12;
    int a = 9;
    std::vector<double> q;
    for(double temp = .005; temp <= .100; temp+=.005) { q.push_back(temp); }
    std::vector<double> P;
    for(double temp = .90; temp <= .99; temp+=.01) P.push_back(temp);
    int D = b-a;
    std::vector<double> eps;
    for(int i = 0; i < q.size(); i++) eps.push_back(D*q[i]);
    std::uniform_real_distribution<double> unif(a,b);
    std::default_random_engine re;
    double a_random_double = unif(re);
    std::vector<double> N;
    for(int i = 0; i < eps.size() && i < P.size(); i++){
        N.push_back( floor(log(1-P[i])/log(1-eps[i]/D))+1);
    }


    std::cout << "## Таблица 1.\n" << std::endl;
    std::cout << "| N | P | eps | pogr % |" << std::endl;
    std::cout << "|---|---|---|---|";
    std::vector<std::vector<double>> po_g;
    for(int i = 0; i < N.size(); i++) {
        double record = 100500;
        double x_rec = 0;
        std::cout <<std::endl<<"| " <<N[i] <<" | " << P[i] <<" | "<< eps[i] << " | ";
        // << " : "
        ;
        double temp = 0;
        for (int n = 0; n<3; n++){
            for(int j = 0; j < N[i]; j++){
                double x = random<double>(a, b);
                double temp = func(x);
                if( temp < record ) {record = temp;  //std::cout << std::endl<<record << " while x = " << x << std::endl;
                    x_rec = x;}
            }
            temp+=(abs(9 - x_rec ))/9;
        }
        std::cout
        //<< "pog: "
        << temp/3
        <<" | "
        // << "%"
        ;
        // std::cout << "pog: " << (abs(10.794 - x_rec )*100)/10.794 << "%"<< std::endl;
        // pog[i].push_back((abs(10.794 - x_rec )*100)/10.794);
    }

    std::cout << "\n\n ## Таблица 2.\n" << std::endl;
    std::cout << "| N | P | eps | pogr % |" << std::endl;
    std::cout << "|---|---|---|---|";
    std::vector<std::vector<double>> pog;
    for(int i = 0; i < N.size(); i++) {
        double record = 100500;
        double x_rec = 0;
        std::cout <<std::endl<<"| " <<N[i] <<" | " << P[i] <<" | "<< eps[i] << " | ";
        // << " : "
        ;
        double temp = 0;
        for (int n = 0; n<3; n++){
        for(int j = 0; j < N[i]; j++){
            double x = random<double>(a, b);
            double temp = mod_func(x);
            if( temp < record ) {record = temp;  //std::cout << std::endl<<record << " while x = " << x << std::endl;
                x_rec = x;}
        }
            temp+=(abs(9 - x_rec ))/9;
        }
        std::cout
        //<< "pog: "
        << temp/3
        <<" | "
        // << "%"
        ;

        // std::cout << "pog: " << (abs(10.794 - x_rec )*100)/10.794 << "%"<< std::endl;
        // pog[i].push_back((abs(10.794 - x_rec )*100)/10.794);
    }
//    double temp = 0;
//    for (int i = 0; i < pog.size(); i++){
//        for(int j = 0; j < pog[i].size(); j++){
//            temp+=pog[i][j];
//        }
//        temp/=pog[i].size();
//        std::cout << N[i] << " : " << temp << "%"<<std::endl;
//    }
//    double temp = 0;
//    for (int i = 0; temp< 12; i++, temp =-1.76819 + 6.28319 *i) std::cout << temp <<std::endl;
    std::cout << std::endl;
}
