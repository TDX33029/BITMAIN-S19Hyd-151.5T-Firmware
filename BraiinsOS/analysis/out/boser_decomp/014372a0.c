// FUN_014372a0 @ 014372a0 size=188 calls_out=0 calls_in=3
// strings: 

void FUN_014372a0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x20) = 1;
  pcVar4 = (char *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  pcVar4 = (char *)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 != '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0x18));
  }
  DataMemoryBarrier(0xb);
  *pcVar4 = '\0';
  DataMemoryBarrier(0xb);
  return;
}

