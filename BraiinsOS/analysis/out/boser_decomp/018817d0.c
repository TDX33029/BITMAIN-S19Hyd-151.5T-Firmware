// FUN_018817d0 @ 018817d0 size=192 calls_out=0 calls_in=6
// strings: 

void FUN_018817d0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x38) = 1;
  pcVar4 = (char *)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x28) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0x24));
    }
  }
  pcVar4 = (char *)(param_1 + 0x34);
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
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x34) = 0;
  DataMemoryBarrier(0xb);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0188188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x30));
  return;
}

