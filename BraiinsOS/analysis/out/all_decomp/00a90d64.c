// FUN_00a90d64 @ 00a90d64 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_00a90d64(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00a90db8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_00a90db8:
  FUN_0128236c(pcVar4);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_0072a978(param_1 + 8,pcVar4);
  return;
}

