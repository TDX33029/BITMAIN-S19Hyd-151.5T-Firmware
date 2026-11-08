// FUN_01a54c4c @ 01a54c4c size=124 calls_out=1 calls_in=9
// strings: 

int FUN_01a54c4c(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int local_24;
  int local_20;
  
  iVar1 = -0x7fffffff;
  if (*param_1 - param_2 < param_3) {
    if (CARRY4(param_3,param_2)) {
      iVar1 = 0;
    }
    else {
      FUN_0134b234(&local_24,*param_1,param_1[1],param_3 + param_2,8,param_4);
      if (local_24 == 1) {
        iVar1 = local_20;
      }
      else {
        *param_1 = param_3 + param_2;
        param_1[1] = local_20;
      }
    }
  }
  return iVar1;
}

