// FUN_00950940 @ 00950940 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00950940(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = param_1[3];
  *param_1 = 4;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 4;
  FUN_01aa3700(iVar2,((uint)(iVar1 - iVar2) >> 2) * 0x38e38e39);
  return;
}

