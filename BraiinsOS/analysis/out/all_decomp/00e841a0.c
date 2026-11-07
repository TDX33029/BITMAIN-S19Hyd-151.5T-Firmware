// FUN_00e841a0 @ 00e841a0 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_00e841a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = *param_1;
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) goto LAB_00e84220;
  pcVar4 = (char *)(iVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_00e841fc;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00e841fc:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  FUN_0072a978(iVar5 + 8,pcVar4);
LAB_00e84220:
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*param_1);
    return;
  }
  return;
}

