// FUN_013292d8 @ 013292d8 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_013292d8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int local_28;
  int local_24;
  int local_20;
  
  FUN_01328ef8(&local_28,param_2,param_3 << 3 | 2);
  if (((local_28 == 4) && (FUN_01328ef8(&local_28,param_2,param_5), local_28 == 4)) &&
     (FUN_01328914(&local_28,param_2,param_4,param_5), local_28 == 4)) {
    *param_1 = 4;
    return;
  }
  param_1[1] = local_24;
  *param_1 = local_28;
  param_1[2] = local_20;
  return;
}

