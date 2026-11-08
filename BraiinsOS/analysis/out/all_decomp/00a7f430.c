// FUN_00a7f430 @ 00a7f430 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00a7f430(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  
  *param_2 = param_7[3];
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_7;
    bVar1 = (bool)hasExclusiveAccess(param_7);
  } while (!bVar1);
  *param_7 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894();
    return;
  }
  return;
}

