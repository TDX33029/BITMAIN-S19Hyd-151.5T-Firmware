// FUN_01266e60 @ 01266e60 size=140 calls_out=0 calls_in=2
// strings: 

bool FUN_01266e60(int *param_1,int *param_2,uint param_3)

{
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*param_1 != *param_2) {
      return false;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  if (1 < param_3) {
    if ((short)*param_1 != (short)*param_2) {
      return false;
    }
    param_3 = param_3 - 2;
    param_2 = (int *)((int)param_2 + 2);
    param_1 = (int *)((int)param_1 + 2);
  }
  if (param_3 == 0) {
    return true;
  }
  return (char)*param_1 == (char)*param_2;
}

