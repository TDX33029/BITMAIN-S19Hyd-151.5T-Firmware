// FUN_01a8cd2c @ 01a8cd2c size=192 calls_out=0 calls_in=1
// strings: 

void FUN_01a8cd2c(int param_1)

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
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0xc));
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
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  DataMemoryBarrier(0xb);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a8cde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x18));
  return;
}

