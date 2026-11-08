// FUN_01195280 @ 01195280 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_01195280(int *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  puVar4 = (undefined4 *)param_1[0x1d5];
  iVar5 = param_1[0x1d4];
  pcVar3 = (code *)*puVar4;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(iVar5);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(iVar5);
  }
  FUN_010952f0(param_1 + 0x1d0);
  FUN_0119533c(param_1);
  piVar2 = (int *)param_1[0x1da];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x1da]);
  }
  piVar2 = (int *)param_1[0x1db];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0x1db],param_1[0x1dc]);
    return;
  }
  return;
}

