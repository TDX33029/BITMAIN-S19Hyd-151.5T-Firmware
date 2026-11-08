// FUN_00768004 @ 00768004 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_00768004(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 8);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x48) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x44) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x40);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x3d);
      }
      if (bVar5 && cVar1 == '\x03') {
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_006f5fbc(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),1);
        }
        *(undefined1 *)(param_1 + 0x3c) = 0;
      }
      puVar2 = (undefined4 *)(param_1 + 0x18);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (*(char *)(param_1 + 0x44) != '\0') {
        return;
      }
      puVar2 = (undefined4 *)(param_1 + 0x10);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*puVar2,puVar2[1]);
    return;
  }
  return;
}

