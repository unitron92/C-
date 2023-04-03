#include<iostream>

int main(){
  typedef struct {
        unsigned int hexCode;
        unsigned int potiValue;
    }potiValue;

potiValue POTI_HEX_VALUES[] = {
        {0x0E, 1090},   
        {0x10, 1250},
        {0x11, 1330},
        {0x12, 1410},
        {0x13, 1480},
        {0x14, 1560},
        {0x15, 1640},
        {0x16, 1720},
        {0x17, 1800},
        {0x18, 1880},
        {0x19, 1950},
        {0x1A, 2030},
        {0x1B, 2110},
        {0x1C, 2190},
        {0x1D, 2270},
        {0x1E, 2340},
        {0x1F, 2420},
        {0x20, 2500},
        {0x21, 2580},
        {0x22, 2660},
        {0x23, 2730},
        {0x24, 2810},
        {0x25, 2890},
        {0x26, 2970},
        {0x27, 3050},
        {0x28, 3130},
        {0x29, 3200},
        {0x2A, 3280},
        {0x2B, 3360},
        {0x2C, 3440},
        {0x2D, 3520},
        {0x2E, 3590},
        {0x2F, 3670},
        {0x30, 3750},
        {0x31, 3830},
        {0x32, 3910},
        {0x33, 3980},
        {0x34, 4060},
        {0x35, 4140},
        {0x36, 4220},
        {0x37, 4300},
        {0x38, 4380},
        {0x39, 4450},
        {0x3A, 4530},
        {0x3B, 4610},
        {0x3C, 4690},
        {0x3D, 4770},
        {0x3E, 4840},
        {0x3F, 4920},
        {0x40, 5000},   
};

const unsigned int size_Of_Table = sizeof(POTI_HEX_VALUES) / sizeof(POTI_HEX_VALUES[0]);
for(int i = 0; i < size_Of_Table; ++i){
std::cout<<" HEX value: "<<POTI_HEX_VALUES[i].hexCode<<" "<<"Poti value: "<<POTI_HEX_VALUES[i].potiValue<<"\n";
}

}