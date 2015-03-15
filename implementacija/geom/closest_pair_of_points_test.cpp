#include "closest_pair_of_points.h"

#include "gtest/gtest.h"

typedef complex<double> P;

TEST(ClosestPair, ClosestPair) {
    vector<P> points;
    points = {{0, 0}, {10000, 10000}, {10000, 0}};
    ASSERT_DOUBLE_EQ(10000*10000.0, najblizji_tocki(points));
    points = {{0, 2}, {6, 67}, {43, 71}, {39, 107}, {189, 140}};
    ASSERT_DOUBLE_EQ(1312, najblizji_tocki(points));
    points = {{243627, 913225}, {7834, 796330}, {912331, 385311}, {347100, 61023},
        {788874, 778719}, {254157, 417730}, {921190, 269592}, {989921, 512561}, {973213, 926547},
        {210966, 628238}, {662934, 265159}, {841797, 684544}, {950720, 85461}, {37937, 503054},
        {904683, 266758}, {266429, 923596}, {944183, 131920}, {539780, 845374}, {388793, 318751},
        {438393, 442762}, {241471, 891457}, {119627, 132845}, {950680, 140521}, {270541, 176290},
        {161633, 70585}, {928470, 725766}, {449420, 239230}, {378231, 159915}, {219099, 247735},
        {789863, 221226}, {327097, 946717}, {98133, 50200}, {570116, 423030}, {995648, 254364},
        {129882, 718066}, {324777, 554512}, {859971, 948791}, {761973, 883710}, {80479, 913177},
        {211287, 487322}, {620278, 575813}, {672759, 141456}, {134306, 282239}, {346967, 871163},
        {843086, 72773}, {741491, 913433}, {145026, 72357}, {855582, 281479}, {698653, 777792},
        {71032, 132970}, {79234, 390356}, {130630, 895267}, {518201, 631089}, {136253, 211712},
        {391167, 830747}, {660612, 700667}, {470894, 734664}, {855295, 266588}, {145071, 522634},
        {298448, 116787}, {580551, 912691}, {899648, 994338}, {464364, 596539}, {26473, 718440},
        {394894, 658636}, {230834, 647150}, {56591, 178858}, {609162, 570116}, {403578, 779173},
        {421474, 256589}, {539431, 112139}, {975006, 348444}, {295438, 275391}, {660874, 370993},
        {610188, 659092}, {87093, 670583}, {64552, 694225}, {273238, 894651}, {965003, 410853},
        {465886, 28868}, {543275, 558815}, {977749, 108323}, {790087, 272722}, {289616, 156562},
        {334859, 246103}, {31218, 394986}, {291495, 575036}, {923508, 276435}, {29329, 479293},
        {387050, 146900}, {867915, 966855}, {505724, 849964}, {938004, 520177}, {174979, 568858},
        {128662, 121457}, {241160, 90567}, {423524, 695854}, {876512, 818727}, {175674, 200519},
        {222119, 25939}, {607204, 861596}, {746495, 780303}, {249338, 774756}, {586584, 987074},
        {936788, 407714}, {192417, 111195}, {778458, 606150}, {862529, 18533}, {750188, 76079},
        {648713, 957785}, {883339, 127098}, {9505, 685976}, {803827, 875336}, {399299, 537966},
        {954374, 868416}, {133403, 940129}, {169773, 650714}, {750410, 235180}, {424985, 455079},
        {685278, 446493}, {754170, 930962}, {669270, 30740}, {412146, 862613}, {771331, 781624},
        {123000, 150725}, {250108, 484862}, {519422, 599795}, {659320, 799827}, {202220, 759092},
        {746491, 547760}, {73397, 840713}, {119958, 310560}, {165598, 616126}, {789539, 107958},
        {509411, 232976}, {710145, 831378}, {496336, 48019}, {814119, 784259}, {5792, 59147},
        {563562, 980785}, {604913, 254280}, {795786, 523657}, {72814, 721811}, {202504, 539203},
        {608988, 911117}, {661468, 648899}, {34030, 11714}, {529703, 272294}, {280771, 937828},
        {987101, 232858}, {2295, 326579}, {340273, 563107}, {213381, 629108}, {371556, 456890},
        {766356, 360840}, {697988, 50661}, {947847, 908018}, {463499, 880331}, {471611, 423157},
        {995592, 449004}, {809752, 59784}, {372891, 941798}, {687178, 267748}, {731172, 194642},
        {526015, 292027}, {78791, 570715}, {690487, 508488}, {913011, 158877}, {599547, 52770},
        {542813, 344470}, {81724, 511956}, {281077, 906770}, {5755, 622444}};
    ASSERT_DOUBLE_EQ(6589125, najblizji_tocki(points));
}
