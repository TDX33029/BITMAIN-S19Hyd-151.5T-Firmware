// FUN_00d3f614 @ 00d3f614 size=232 calls_out=4 calls_in=28
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

int FUN_00d3f614(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)param_1[1];
  iVar2 = *piVar4;
  DataMemoryBarrier(0xb);
  while (iVar2 == 0) {
    DataMemoryBarrier(0xb);
    if ((int *)*param_1 == piVar4) {
      return 0;
    }
    FUN_016da3a8();
    piVar4 = (int *)param_1[1];
    iVar2 = *piVar4;
    DataMemoryBarrier(0xb);
  }
  param_1[1] = iVar2;
  if (piVar4[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  iVar5 = *(int *)(iVar2 + 4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  piVar3 = (int *)piVar4[1];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(piVar4[1]);
    }
  }
  thunk_FUN_016d3fb4(piVar4);
  return iVar5;
}

