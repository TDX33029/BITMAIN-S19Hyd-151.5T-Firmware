// FUN_01543148 @ 01543148 size=252 calls_out=4 calls_in=2
// strings: 

void FUN_01543148(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  piVar2 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0xc]);
  }
  piVar2 = (int *)param_1[0xd];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0xd],param_1[0xe]);
  }
  if (((char)param_1[7] == '\0') && ((param_1[8] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_1[9]);
    uVar5 = param_1[5];
    puVar6 = (undefined4 *)param_1[6];
    pcVar4 = (code *)*puVar6;
  }
  else {
    uVar5 = param_1[5];
    puVar6 = (undefined4 *)param_1[6];
    pcVar4 = (code *)*puVar6;
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  if ((*param_1 & 0x7fffffff) == 0) {
    FUN_0154394c(param_1 + 0x10);
    return;
  }
  thunk_FUN_016d3fb4(param_1[1]);
  FUN_0154394c(param_1 + 0x10);
  return;
}

