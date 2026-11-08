// FUN_01212754 @ 01212754 size=220 calls_out=5 calls_in=2
// strings: 

void FUN_01212754(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar6 = 0;
  iVar2 = param_1;
  if (iVar5 != 0) {
    iVar2 = iVar5 * 3;
    iVar6 = iVar5 * 0xd;
  }
  if (iVar5 != 0 && iVar6 != -0x11) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x20) + iVar2 * -4 + -0xc);
    iVar6 = extraout_r1;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    iVar6 = iVar2 * 0x11;
  }
  if (iVar2 != 0 && iVar6 != -0x15) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x50) + iVar2 * -0x10 + -0x10);
    uVar3 = *(uint *)(param_1 + 0x1c8);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1c8);
  }
  if ((uVar3 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1cc));
  }
  piVar4 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  FUN_011a33a4(param_1 + 0x88);
  FUN_01212554(param_1 + 0x118);
  FUN_011a3b88(param_1 + 0xb8);
  FUN_011a3b88(param_1 + 0xe8);
  return;
}

