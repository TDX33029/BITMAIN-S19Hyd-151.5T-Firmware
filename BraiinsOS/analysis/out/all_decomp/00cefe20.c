// FUN_00cefe20 @ 00cefe20 size=304 calls_out=4 calls_in=23
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

undefined4 FUN_00cefe20(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return 0;
  }
  while( true ) {
    piVar2 = *(int **)(iVar4 + 0xc);
    iVar3 = *piVar2;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar4 + 8) == piVar2) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_1 + 0x10) != 0) {
        return 2;
      }
      piVar2 = (int *)*param_1;
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*param_1);
        }
      }
      *param_1 = 0;
      return 0;
    }
    FUN_016da3a8();
  }
  *(int *)(iVar4 + 0xc) = iVar3;
  if ((char)piVar2[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  if (*(char *)(iVar3 + 4) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  *(undefined1 *)(iVar3 + 4) = 0;
  thunk_FUN_016d3fb4();
  if (*param_1 == 0) {
    return 1;
  }
  piVar2 = (int *)(*param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  DataMemoryBarrier(0xb);
  return 1;
}

