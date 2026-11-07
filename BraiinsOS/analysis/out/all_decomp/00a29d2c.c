// FUN_00a29d2c @ 00a29d2c size=260 calls_out=3 calls_in=2
// strings: 

void FUN_00a29d2c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    FUN_00aa0a58(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
    return;
  }
  if (*(char *)(param_1 + 8) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x50);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x4c);
  }
  if (bVar5 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      puVar2 = (undefined4 *)(param_1 + 0x14);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (*(char *)(param_1 + 0x48) != '\x03') goto LAB_00a29d5c;
      cVar1 = *(char *)(param_1 + 0x44);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x41);
      }
      if (bVar5 && cVar1 == '\x03') {
        if (*(int *)(param_1 + 0x2c) != 0) {
          FUN_00aa0a58(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
        }
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      puVar2 = (undefined4 *)(param_1 + 0x1c);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*puVar2,puVar2[1]);
    }
  }
LAB_00a29d5c:
  FUN_00aa13c0(*(undefined4 *)(param_1 + 4));
  return;
}

