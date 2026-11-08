// FUN_01a3de3c @ 01a3de3c size=148 calls_out=4 calls_in=0
// strings: 

void FUN_01a3de3c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0134bd64(*param_1,param_1[1]);
  iVar1 = 4;
  if (1 < (uint)param_1[4]) {
    iVar1 = param_1[4] - 2;
  }
  if (iVar1 - 1U < 4) {
    return;
  }
  if (iVar1 == 0) {
    FUN_0134bd64(param_1[5],param_1[6]);
    return;
  }
  if (iVar1 == 5) {
    uVar2 = param_1[6];
    FUN_01a4137c(uVar2,param_1[7]);
    FUN_0134aee0(param_1[5],uVar2,8,0x18);
    return;
  }
  FUN_01a41e70(param_1 + 5);
  return;
}

