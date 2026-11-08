// FUN_005bf3c4 @ 005bf3c4 size=248 calls_out=7 calls_in=4
// strings: 

void FUN_005bf3c4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_00ee1828();
  iVar5 = *param_1;
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) goto LAB_005bf448;
  pcVar4 = (char *)(iVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_005bf424;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_005bf424:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  FUN_0072a978(iVar5 + 8,pcVar4);
LAB_005bf448:
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*param_1);
  }
  piVar3 = (int *)param_1[1];
  FUN_01663cc4(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 1);
    return;
  }
  return;
}

