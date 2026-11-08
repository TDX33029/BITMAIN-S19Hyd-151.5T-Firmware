// FUN_00779e00 @ 00779e00 size=364 calls_out=13 calls_in=1
// strings: 

void FUN_00779e00(int *param_1)

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
  FUN_019deb7c(param_1 + 0x10);
  if (param_1[0x13] != -1) {
    FUN_01bf01d6();
  }
  FUN_01781558(param_1 + 0x10);
  FUN_00756454(param_1 + 0x14);
  FUN_00756518(param_1 + 0x26);
  if (param_1[0x22] != -0x80000000) {
    FUN_019bb7e0(param_1[0x22],param_1[0x23]);
  }
  FUN_00756554(param_1 + 0x33);
  FUN_007631bc(param_1 + 6);
  piVar2 = (int *)param_1[0xe];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0xe],param_1[0xf]);
    }
  }
  FUN_0075d77c(param_1 + 0x71);
  if (param_1[0x40] == -0x80000000) {
    return;
  }
  FUN_007782e8(param_1 + 0x40);
  piVar2 = (int *)param_1[0x70];
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

