// FUN_00cef7a0 @ 00cef7a0 size=448 calls_out=5 calls_in=3
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_00cef7a0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + 2) = 2;
    return;
  }
  while( true ) {
    piVar6 = *(int **)(iVar7 + 0xc);
    iVar5 = *piVar6;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar7 + 8) == piVar6) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        *(undefined1 *)(param_1 + 2) = 3;
        return;
      }
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar4 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar4);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078f014(*param_2);
        }
      }
      *(undefined1 *)(param_1 + 2) = 2;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int *)(iVar7 + 0xc) = iVar5;
  if ((char)piVar6[3] != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  cVar1 = *(char *)(iVar5 + 0xc);
  if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  uVar8 = *(undefined4 *)(iVar5 + 4);
  uVar9 = *(undefined4 *)(iVar5 + 8);
  uVar2 = *(undefined1 *)(iVar5 + 0xf);
  *(undefined1 *)(iVar5 + 0xc) = 2;
  uVar3 = *(undefined2 *)(iVar5 + 0xd);
  if ((char)piVar6[3] != '\x02') {
    FUN_00cef9a4(piVar6 + 1);
  }
  thunk_FUN_016d3fb4(piVar6);
  if (*param_2 != 0) {
    piVar6 = (int *)(*param_2 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      bVar4 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar4);
    *piVar6 = *piVar6 + -1;
    DataMemoryBarrier(0xb);
  }
  *(char *)(param_1 + 2) = cVar1;
  *(undefined2 *)((int)param_1 + 9) = uVar3;
  *(undefined1 *)((int)param_1 + 0xb) = uVar2;
  *param_1 = uVar8;
  param_1[1] = uVar9;
  return;
}

