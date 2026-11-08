// FUN_01158ab8 @ 01158ab8 size=260 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code: invalid Once state

void FUN_01158ab8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar5 = *param_1;
  puVar6 = (undefined4 *)param_1[1];
  pcVar3 = (code *)*puVar6;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[2],param_1[3]);
  }
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(param_1[4]);
    }
  }
  if (param_1[7] - 2 < 2) {
    return;
  }
  if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[5],param_1[6]);
    return;
  }
  return;
}

