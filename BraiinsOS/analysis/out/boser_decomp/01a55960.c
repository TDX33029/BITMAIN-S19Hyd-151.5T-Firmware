// FUN_01a55960 @ 01a55960 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_01a55960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  if (-1 < (int)param_2[6]) {
    FUN_0134bd64(param_2[6],param_2[7]);
  }
  FUN_01a53c68(param_2 + 9);
  return;
}

