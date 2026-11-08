// FUN_0132b728 @ 0132b728 size=124 calls_out=1 calls_in=10
// strings: 

int FUN_0132b728(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int local_2c;
  int local_28;
  
  iVar1 = -0x7fffffff;
  if (*param_1 - param_2 < param_3) {
    if (CARRY4(param_3,param_2)) {
      iVar1 = 0;
    }
    else {
      FUN_0132b7a4(&local_2c,*param_1,param_1[1],param_3 + param_2,param_4,param_5);
      if (local_2c == 1) {
        iVar1 = local_28;
      }
      else {
        *param_1 = param_3 + param_2;
        param_1[1] = local_28;
      }
    }
  }
  return iVar1;
}

