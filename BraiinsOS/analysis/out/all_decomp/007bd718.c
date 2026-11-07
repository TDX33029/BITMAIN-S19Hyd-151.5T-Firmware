// FUN_007bd718 @ 007bd718 size=256 calls_out=3 calls_in=4
// strings: 

void FUN_007bd718(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    puVar5 = (undefined4 *)(param_1 + 0x18);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_007bd7fc;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x31);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x41) == '\x03') {
        uVar4 = *(undefined4 *)(param_1 + 0x34);
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar4);
        }
        goto LAB_007bd7b8;
      }
    }
    else {
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x49);
      }
      if (bVar6 && cVar1 == '\x03') {
        uVar4 = *(undefined4 *)(param_1 + 0x34);
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar4);
        }
LAB_007bd7b8:
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  FUN_00a07b4c(uVar4);
  thunk_FUN_016d3fb4(uVar4);
  puVar5 = (undefined4 *)(param_1 + 0x1c);
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_007bd7fc:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089f0fc(*puVar5);
    return;
  }
  return;
}

