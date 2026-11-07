// FUN_01a41dd8 @ 01a41dd8 size=120 calls_out=4 calls_in=2
// strings: 

void FUN_01a41dd8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
  if (iVar1 - 1U < 4) {
    return;
  }
  if (iVar1 == 0) {
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  }
  if (iVar1 == 5) {
    uVar2 = param_1[2];
    FUN_01a4137c(uVar2,param_1[3]);
    FUN_0134aee0(param_1[1],uVar2,8,0x18);
    return;
  }
  FUN_01a41e70(param_1 + 1);
  return;
}

