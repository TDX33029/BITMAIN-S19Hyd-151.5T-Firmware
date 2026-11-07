// FUN_0154a9e8 @ 0154a9e8 size=96 calls_out=1 calls_in=1
// strings: 

int FUN_0154a9e8(int *param_1,int param_2)

{
  int local_14;
  
  if (param_2 != 0) {
    local_14 = *param_1;
    *param_1 = 0;
    do {
      if (local_14 == 0) {
        return param_2;
      }
      FUN_01542824(&local_14);
      param_2 = param_2 + -1;
      local_14 = 0;
    } while (param_2 != 0);
  }
  return 0;
}

