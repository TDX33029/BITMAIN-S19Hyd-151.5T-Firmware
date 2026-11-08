// FUN_00b40204 @ 00b40204 size=236 calls_out=5 calls_in=14
// strings: 

void FUN_00b40204(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078dc40(*param_1);
  }
  iVar4 = param_1[1];
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar4 + 0x44);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 != 1) goto LAB_00b402b4;
  pcVar5 = (char *)(iVar4 + 0x10);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar1) goto LAB_00b40290;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00b40290:
    FUN_01280da8(pcVar5);
  }
  FUN_0128236c(pcVar5);
  *(undefined1 *)(iVar4 + 0x2c) = 1;
  FUN_0072a978(iVar4 + 8,pcVar5);
LAB_00b402b4:
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[1]);
    return;
  }
  return;
}

