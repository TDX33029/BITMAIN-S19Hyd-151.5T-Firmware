// FUN_00e51a74 @ 00e51a74 size=212 calls_out=2 calls_in=1
// strings: 

void FUN_00e51a74(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)(param_1 + 4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x48) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x44);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x40);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x20);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x94) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x90);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x8c);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x6c);
        }
      }
    }
    puVar4 = (undefined4 *)(param_1 + 0xc);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*puVar4);
    return;
  }
  return;
}

