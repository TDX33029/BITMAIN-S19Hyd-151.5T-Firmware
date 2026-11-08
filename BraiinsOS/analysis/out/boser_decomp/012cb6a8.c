// FUN_012cb6a8 @ 012cb6a8 size=132 calls_out=3 calls_in=11
// strings: 

void FUN_012cb6a8(int param_1)

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
      goto LAB_012cb6fc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_012cb6fc:
  FUN_0165098c(pcVar4);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_01a14524(param_1 + 8,pcVar4);
  return;
}

