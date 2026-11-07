// FUN_0081c170 @ 0081c170 size=552 calls_out=9 calls_in=6
// strings: 

undefined4 FUN_0081c170(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x1d)) {
  case 0:
    puVar4 = param_1 + 4;
    *puVar4 = *param_1;
    iVar2 = param_1[0x1c];
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[9] = iVar2;
    param_1[10] = puVar4;
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
LAB_0081c200:
    param_1[0xc] = puVar4;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    param_1[0xd] = iVar2 + 0xc;
    *(undefined1 *)(param_1 + 0xb) = 1;
switchD_0081c1e4_caseD_3:
    iVar2 = FUN_007d67b8(param_1 + 0xd,param_2);
    if (iVar2 == 0) {
      uVar3 = 3;
      goto LAB_0081c2b0;
    }
    param_1[8] = iVar2;
    if (*(char *)(param_1 + 0x1b) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1a);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 0x11);
      }
      if (bVar8 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x12);
        if (param_1[0x13] != 0) {
          (**(code **)(param_1[0x13] + 0xc))(param_1[0x14]);
        }
      }
    }
    puVar4 = (undefined4 *)param_1[0xc];
    *(undefined1 *)(param_1 + 0xb) = 0;
    uVar9 = (**(code **)(*(int *)(param_1[8] + 0x20) + 0x20))
                      (*(undefined4 *)(param_1[8] + 0x1c),puVar4[2],*puVar4,puVar4[1],puVar4[2]);
    *(undefined8 *)(param_1 + 0xc) = uVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875908);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875908);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x2d)) {
    case 0:
      iVar2 = param_1[9];
      puVar4 = (undefined4 *)param_1[10];
      goto LAB_0081c200;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018758f8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018758f8);
    case 3:
      goto switchD_0081c1e4_caseD_3;
    case 4:
      uVar9 = *(undefined8 *)(param_1 + 0xc);
    }
  }
  iVar2 = (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))((int)uVar9,param_2);
  uVar3 = 4;
  if (iVar2 != 0) {
LAB_0081c2b0:
    *(undefined1 *)((int)param_1 + 0x2d) = uVar3;
    *(undefined1 *)(param_1 + 0x1d) = 3;
    return 1;
  }
  uVar7 = param_1[0xc];
  puVar4 = (undefined4 *)param_1[0xd];
  pcVar5 = (code *)*puVar4;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar7);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  pcVar6 = (char *)param_1[8];
  if (*pcVar6 == '\0') {
    bVar8 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar8) {
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0081c324;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar6);
LAB_0081c324:
  FUN_0128236c(pcVar6);
  FUN_0163af68(pcVar6,1,pcVar6);
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  FUN_0081c020(param_1 + 8);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 0;
}

