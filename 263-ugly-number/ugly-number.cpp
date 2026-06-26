class Solution {
public:
    bool isUgly(int x) {
        if (x == 0)
    return false;
  while (x != 0)
  {
    if (x % 2 != 0 && x % 3 != 0 && x % 5 != 0)
    {
      break;
    }
    else if (x % 2 == 0)
    {
      x /= 2;
    }

    else if (x % 3 == 0)
    {
      x /= 3;
    }
    else if (x % 5 == 0)
    {
      x /= 5;
    }
  }
  if (x == 1)
    return true;
     return false; 
    }
};