// FUN_008b55d8 @ 008b55d8 size=364 calls_out=4 calls_in=6
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_008b55d8(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
    *param_1 = 0;
    return;
  }
  while( true ) {
    piVar2 = *(int **)(iVar5 + 0xc);
    piVar3 = (int *)piVar2[4];
    DataMemoryBarrier(0xb);
    if (piVar3 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar5 + 8) == piVar2) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        *param_1 = 2;
        return;
      }
      piVar2 = (int *)*param_2;
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e44c(*param_2);
        }
      }
      *param_1 = 0;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar5 + 0xc) = piVar3;
  if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  iVar5 = piVar3[1];
  iVar4 = piVar3[2];
  iVar6 = piVar3[3];
  *piVar3 = 0;
  thunk_FUN_016d3fb4();
  if (*param_2 != 0) {
    piVar2 = (int *)(*param_2 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
    DataMemoryBarrier(0xb);
  }
  *param_1 = 1;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  param_1[3] = iVar6;
  return;
}

