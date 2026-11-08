// FUN_00d8f5e8 @ 00d8f5e8 size=220 calls_out=2 calls_in=9
// strings: 

void FUN_00d8f5e8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar1 = (char)param_1[4];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      iVar4 = param_1[5];
      puVar5 = (undefined4 *)param_1[6];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(iVar4);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      iVar4 = param_1[5];
      puVar5 = (undefined4 *)param_1[6];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(iVar4);
      }
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    return;
  }
  if (*param_1 == 0) {
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[1],param_1[2]);
    return;
  }
  return;
}

