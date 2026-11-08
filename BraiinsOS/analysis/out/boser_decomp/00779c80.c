// FUN_00779c80 @ 00779c80 size=208 calls_out=3 calls_in=1
// strings: 

void FUN_00779c80(int *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (param_1[4] != 0) {
        FUN_013f476c();
        return;
      }
    }
    else {
      iVar4 = param_1[4];
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)param_1[5];
        pcVar3 = (code *)*puVar5;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar4);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_01be4678(iVar4);
          return;
        }
      }
    }
    return;
  }
  piVar2 = (int *)param_1[0x16];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x16],param_1[0x17]);
    }
  }
  piVar2 = (int *)param_1[0x18];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a868(param_1[0x18]);
  }
  piVar2 = (int *)param_1[0x19];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a9cc(param_1[0x19]);
  }
  FUN_0075d77c(param_1 + 0x4d);
  if (param_1[0x1c] == -0x80000000) {
    return;
  }
  FUN_007782e8(param_1 + 0x1c);
  piVar2 = (int *)param_1[0x4c];
  FUN_013cee40(piVar2 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cef90(piVar2);
    return;
  }
  return;
}

