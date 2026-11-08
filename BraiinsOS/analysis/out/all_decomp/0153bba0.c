// FUN_0153bba0 @ 0153bba0 size=360 calls_out=4 calls_in=1
// strings: 

void FUN_0153bba0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[0x49];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0x49]);
  }
  if (param_1[0xf] != -0x80000000) {
    FUN_015376c0(param_1 + 6);
  }
  if (((char)param_1[0x44] == '\0') && ((param_1[0x45] & 0x7fffffffU) != 0)) {
    thunk_FUN_016d3fb4(param_1[0x46]);
  }
  puVar5 = (undefined4 *)param_1[0x43];
  iVar3 = param_1[0x42];
  pcVar4 = (code *)*puVar5;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(iVar3);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if ((param_1[0x3d] & 0x7fffffffU) == 0) {
    iVar3 = param_1[2];
    iVar6 = param_1[1];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x3e]);
    iVar3 = param_1[2];
    iVar6 = param_1[1];
  }
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)(iVar6 + 4);
    do {
      if ((puVar5[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[0x36] != 0) {
    thunk_FUN_016d3fb4(param_1[0x37]);
  }
  if (param_1[0x39] != 0) {
    thunk_FUN_016d3fb4(param_1[0x3a]);
  }
  FUN_0153d998(param_1 + 0x1e);
  return;
}

