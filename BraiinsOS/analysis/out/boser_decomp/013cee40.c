// FUN_013cee40 @ 013cee40 size=188 calls_out=0 calls_in=2
// strings: 

void FUN_013cee40(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  pcVar4 = (char *)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x18));
    }
  }
  pcVar4 = (char *)(param_1 + 0x28);
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
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0x24));
  }
  DataMemoryBarrier(0xb);
  *pcVar4 = '\0';
  DataMemoryBarrier(0xb);
  return;
}

