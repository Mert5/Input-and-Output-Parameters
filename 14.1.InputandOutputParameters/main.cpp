#include <iostream>
#include <string>
#include <cstring>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

void max_str(const std::string& input1, const std::string input2,   // searches for the last character alphabetically
            std::string& output)
{
    if(input1.length() > input2.length()){
        output = input1;
    }else{
        output = input2;
    }
}

void max_int(int input1, int input2, int& output2){
    if(input1 > input2){
        output2 = input1;
    }else{
        output2 = input2;
    }
}

void max_double(double input1, double input2, double* output3){
    if(input1 > input2){
        *output3 = input1;
    }else{
        *output3 = input2;
    }
}

int main(){

    /*
    std::string out_str2;
    std::string string3("Conneticut");
    std::string string4("Oklahoma"); // Louisiana
    
    max_str(string3,string4,out_str2);
    
    std::cout << "max_str : " << out_str2 << std::endl;
    */

    /*
    int out_int;
    int num1{135};
    int num2{45};
    
    max_int(num1,num2,out_int);
    
    std::cout << "max_int : " << out_int << std::endl;
    */

   
    double out_double;
    double n1_double{16.2};
    double n2_double{11.8};

    max_double(n1_double,n2_double,&out_double);

    std::cout << "max_double : " << out_double << std::endl;

    return 0;

}
