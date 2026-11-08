// FUN_00d7c740 @ 00d7c740 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_00d7c740(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 6) {
    return;
  }
  uVar2 = uVar1 - 2;
  if (uVar1 < 2) {
    uVar2 = 2;
  }
  if (uVar2 < 2) {
    return;
  }
  iVar3 = 8;
  if (uVar2 != 2) {
    iVar3 = 0xc;
  }
  FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar3),((undefined4 *)((int)param_1 + iVar3))[1]);
  return;
}

