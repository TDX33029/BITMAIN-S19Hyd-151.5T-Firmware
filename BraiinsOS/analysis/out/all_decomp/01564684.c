// FUN_01564684 @ 01564684 size=284 calls_out=4 calls_in=3
// strings: 

void FUN_01564684(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[0x39];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0x39]);
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    if (*param_1 == 0 && param_1[1] == 0) {
      FUN_015628a0(param_1 + 2);
      if (param_1[0x11] != 0) {
        thunk_FUN_016d3fb4(param_1[0x12]);
      }
    }
    else {
      FUN_015628a0(param_1 + 2);
    }
  }
  iVar4 = param_1[0x25];
  puVar5 = (undefined4 *)(iVar4 + 4);
  for (iVar6 = param_1[0x26]; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (puVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar5);
    }
    puVar5 = puVar5 + 3;
  }
  if (param_1[0x24] != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (param_1[0x27] != 0) {
    thunk_FUN_016d3fb4(param_1[0x28]);
  }
  if (((char)param_1[0x34] == '\0') && ((param_1[0x35] & 0x7fffffffU) != 0)) {
    thunk_FUN_016d3fb4(param_1[0x36]);
    puVar3 = (undefined1 *)param_1[0x2b];
  }
  else {
    puVar3 = (undefined1 *)param_1[0x2b];
  }
  if (puVar3 == &DAT_80000018) {
    return;
  }
  FUN_01564190(param_1 + 0x2b);
  return;
}

