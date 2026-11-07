// FUN_015fc218 @ 015fc218 size=140 calls_out=0 calls_in=5
// strings: 

bool FUN_015fc218(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  
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
    bVar1 = true;
  }
  else {
    bVar1 = (char)*param_1 == (char)*param_2;
  }
  return bVar1;
}

