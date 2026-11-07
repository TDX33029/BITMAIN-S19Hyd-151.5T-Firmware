// FUN_01348fc8 @ 01348fc8 size=240 calls_out=3 calls_in=2
// strings: assertion failed: head.enqueued.swap(false; SeqCst)

void FUN_01348fc8(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  while (iVar3 = *(int *)(param_1 + 8), iVar3 != 0 && iVar3 != 0x48) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 0x40);
    pcVar4 = (char *)(iVar3 + 0x44);
    piVar5 = (int *)(iVar3 + -8);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\0';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: head.enqueued.swap(false, SeqCst)",0x33,&DAT_01ce6cc0);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01349164(piVar5);
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
  }
  if (param_1 == -1) {
    return;
  }
  piVar5 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

