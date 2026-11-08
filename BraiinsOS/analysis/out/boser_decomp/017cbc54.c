// FUN_017cbc54 @ 017cbc54 size=140 calls_out=9 calls_in=3
// strings: 

void FUN_017cbc54(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0142e6dc();
  FUN_017cbe08(param_1 + 0xb8);
  FUN_01784c20(param_1 + 0x160);
  FUN_017037a4(param_1 + 0xf8);
  FUN_0178a7e8(param_1 + 0x16c);
  FUN_017cbe30(param_1 + 0x104);
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_017c21dc();
  }
  FUN_0177a9a8(param_1 + 0xd0);
  piVar2 = *(int **)(param_1 + 0xf0);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
    return;
  }
  return;
}

