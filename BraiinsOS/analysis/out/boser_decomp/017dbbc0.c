// FUN_017dbbc0 @ 017dbbc0 size=244 calls_out=12 calls_in=1
// strings: 

void FUN_017dbbc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    FUN_0142e6dc(param_1);
    FUN_017cbe08(param_1 + 0xb8);
    FUN_01784c20(param_1 + 0x160);
    FUN_017037a4(param_1 + 0xf8);
    FUN_0178a7e8(param_1 + 0x16c);
    if (*(uint *)(param_1 + 0x104) < 2) {
      FUN_0178a644();
    }
    FUN_017dbb58(*(undefined4 *)(param_1 + 0x17c));
    FUN_0177a9a8(param_1 + 0xd0);
    piVar2 = *(int **)(param_1 + 0xf0);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
      }
    }
    FUN_017cbbc8(param_1 + 0x1ac);
    FUN_017cbd88(param_1 + 0x1a8);
    return;
  }
  if (*(char *)(param_1 + 0x1c4) != '\x03') {
    return;
  }
  FUN_017cbd88(param_1 + 0x1b4);
  piVar2 = *(int **)(param_1 + 0x1b0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784968(*(undefined4 *)(param_1 + 0x1b0));
    return;
  }
  return;
}

