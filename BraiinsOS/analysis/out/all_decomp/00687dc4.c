// FUN_00687dc4 @ 00687dc4 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_00687dc4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if ((uint)(uVar2 < 4) <= -param_1[1]) {
    iVar1 = uVar2 - 4;
  }
  if (iVar1 == 0) {
    FUN_007ab1cc(param_1 + 2,-(param_1[1] + (uint)(uVar2 >= 4)));
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    FUN_007aad34(param_1);
  }
  FUN_005c3320(param_1 + 0x90);
  return;
}

