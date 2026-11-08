// FUN_0126e3b0 @ 0126e3b0 size=128 calls_out=4 calls_in=2
// strings: 

void FUN_0126e3b0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 != 9) {
    iVar1 = 4;
    if (1 < uVar2) {
      iVar1 = uVar2 - 2;
    }
    if (3 < iVar1 - 1U) {
      if (iVar1 == 0) {
        FUN_019bb7e0(param_1[1],param_1[2]);
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
  }
  return;
}

