#include <stdbool.h>

bool IsLeapYear(int year) {
  int res_4 = 0;
  int res_100 = 0;
  int res_400 = 0;
  
  res_4 = year%4;
  res_100 = year%100;
  res_400 = year%400;
  
  if(res_4 == 0 && res_100 != 0) {return true;}
  else if(res_400 == 0) {return true;}
  else {return false;};
}


/*
#include <stdbool.h>

bool IsLeapYear(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}
*/


/*
#include <stdbool.h>

bool IsLeapYear(int year) {
    bool is_div_4 = (((year % 4) == 0) ? true : false);
    bool is_div_100 = (((year % 100) == 0) ? true : false);
    bool is_div_400 = (((year % 400) == 0) ? true : false);
  
    if (year < 0) {
        return false;
    }
    if (is_div_400 == true) {
        return true;
    } else if (is_div_100 == true) {
        return false;
    } else if (is_div_4 == true) {
        return true;
    }
    return false;
}
*/
