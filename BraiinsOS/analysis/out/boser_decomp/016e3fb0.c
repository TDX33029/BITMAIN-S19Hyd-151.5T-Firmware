// FUN_016e3fb0 @ 016e3fb0 size=72 calls_out=1 calls_in=5
// strings: 

void FUN_016e3fb0(uint *param_1)

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
    FUN_0134bd64(uVar1,param_1[1]);
    iVar2 = 0xc;
  }
  FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar2),((undefined4 *)((int)param_1 + iVar2))[1]);
  return;
}

