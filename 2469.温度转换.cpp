/*
 * @lc app=leetcode.cn id=2469 lang=cpp
 *
 * [2469] 温度转换
 */
#include <vector>
#include <iostream>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        vector<double> temperature = {kelvin, fahrenheit};
        return temperature;
    }
};
// @lc code=end
