/*
 * Project Title : Daily Wellness and Calorie Tracker with BMI Analyser
 * File Name     : common.hpp
 * Programmers   : 
 * Purpose       : Defines shared data structures, constants, and common libraries.
 */

#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
#include <algorithm>
#include <set>

using namespace std;

// Structure to encapsulate user physical profile
struct UserProfile {
    double height = 0.0; // in meters
    double weight = 0.0; // in kilograms
};

// Structure to encapsulate a single meal record
struct MealRecord {
    string date;       // Format: YYYY-MM-DD
    string name;
    double calories;
};

// Structure to encapsulate a single physical activity record
struct ActivityRecord {
    string date;       // Format: YYYY-MM-DD
    string name;
    int duration;      // in minutes
    double caloriesBurned;
};

#endif

