// FUN_009d4ed4 @ 009d4ed4 size=136 calls_out=3 calls_in=3
// strings: 

void FUN_009d4ed4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(*param_1 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) {
    return;
  }
  iVar2 = *param_1;
  pcVar4 = (char *)(iVar2 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_009d4f2c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_009d4f2c:
  FUN_0165098c(pcVar4);
  *(undefined1 *)(iVar2 + 0x2c) = 1;
  FUN_01a14524(iVar2 + 8,pcVar4);
  return;
}

