// FUN_0157cec4 @ 0157cec4 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_0157cec4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 2;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    return;
  }
  iVar2 = 4;
  if (uVar3 != 1) {
    FUN_019bb7e0(uVar1,param_1[1]);
    iVar2 = 0xc;
  }
  FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar2),((undefined4 *)((int)param_1 + iVar2))[1]);
  return;
}

