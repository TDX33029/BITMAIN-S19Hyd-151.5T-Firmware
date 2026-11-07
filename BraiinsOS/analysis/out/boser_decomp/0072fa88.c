// FUN_0072fa88 @ 0072fa88 size=72 calls_out=1 calls_in=0
// strings: 

void FUN_0072fa88(int param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint auStack_40 [3];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  int iStack_14;
  
  piVar3 = *(int **)(param_1 + 0x68);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0071ce80();
    }
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_34 = *(undefined4 *)(param_1 + 0x70);
    uStack_20 = *(undefined4 *)(param_1 + 0x74);
    uStack_2c = 0;
    auStack_40[1] = 0;
    auStack_40[2] = iVar4;
    iStack_28 = iVar4;
    uStack_24 = uStack_34;
  }
  auStack_40[0] = (uint)(iVar4 != 0);
  uStack_30 = auStack_40[0];
  while (FUN_00724dd8(aiStack_1c,auStack_40), aiStack_1c[0] != 0) {
    pcVar2 = (char *)(aiStack_1c[0] + iStack_14 * 0x10);
    if (*pcVar2 == 'O') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0071cf74(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

