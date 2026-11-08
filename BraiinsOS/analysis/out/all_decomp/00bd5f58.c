// FUN_00bd5f58 @ 00bd5f58 size=800 calls_out=10 calls_in=2
// strings: 

undefined4 FUN_00bd5f58(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_fpscr;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x27)) {
  case 0:
    uVar7 = *param_1;
    uVar4 = param_1[2];
    param_1[4] = uVar7;
    param_1[6] = uVar4;
    iVar2 = *(int *)(param_1[0x26] + 0x178);
    *(undefined1 *)(param_1 + 0x25) = 0;
    iVar2 = iVar2 + 8;
    param_1[8] = uVar7;
    uVar10 = param_1[1];
    param_1[0x24] = iVar2;
    param_1[10] = uVar4;
    param_1[5] = uVar10;
    param_1[9] = uVar10;
LAB_00bd600c:
    puVar5 = param_1 + 0xc;
    *puVar5 = uVar7;
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
    param_1[0xd] = uVar10;
    param_1[0x11] = iVar2;
    param_1[0x12] = puVar5;
    param_1[0xe] = uVar4;
LAB_00bd6034:
    param_1[0x14] = puVar5;
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x15] = iVar2 + 0xc;
    *(undefined1 *)(param_1 + 0x13) = 1;
switchD_00bd6148_caseD_3:
    iVar2 = FUN_007d67b8(param_1 + 0x15,param_2);
    if (iVar2 != 0) {
      param_1[0x10] = iVar2;
      if (*(char *)(param_1 + 0x23) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x22);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x19);
        }
        if (bVar11 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x1a);
          if (param_1[0x1b] != 0) {
            (**(code **)(param_1[0x1b] + 0xc))(param_1[0x1c]);
          }
        }
      }
      puVar5 = (undefined4 *)param_1[0x14];
      *(undefined1 *)(param_1 + 0x13) = 0;
      uVar14 = (**(code **)(*(int *)(param_1[0x10] + 0x20) + 0x24))
                         (*(undefined4 *)(param_1[0x10] + 0x1c),puVar5[2],*puVar5,puVar5[1],
                          puVar5[2]);
      *(undefined8 *)(param_1 + 0x14) = uVar14;
      goto LAB_00bd60bc;
    }
    uVar3 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875eb8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875eb8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x25)) {
    case 0:
      uVar7 = param_1[8];
      uVar10 = param_1[9];
      uVar4 = param_1[10];
      iVar2 = param_1[0x24];
      goto LAB_00bd600c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018758e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018758e8);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x4d)) {
    case 0:
      iVar2 = param_1[0x11];
      puVar5 = (undefined4 *)param_1[0x12];
      goto LAB_00bd6034;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018758f8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018758f8);
    case 3:
      goto switchD_00bd6148_caseD_3;
    case 4:
      uVar14 = *(undefined8 *)(param_1 + 0x14);
    }
LAB_00bd60bc:
    iVar2 = (**(code **)((int)((ulonglong)uVar14 >> 0x20) + 0xc))((int)uVar14,param_2);
    uVar3 = 4;
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)param_1[0x15];
      uVar4 = param_1[0x14];
      pcVar6 = (code *)*puVar5;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      pcVar9 = (char *)param_1[0x10];
      if (*pcVar9 == '\0') {
        bVar11 = (bool)hasExclusiveAccess(pcVar9);
        if (!bVar11) goto LAB_00bd617c;
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00bd617c:
        FUN_01280da8(pcVar9);
      }
      FUN_0128236c(pcVar9);
      FUN_0163af68(pcVar9,1,pcVar9);
      *(undefined2 *)(param_1 + 0x13) = 0x100;
      FUN_0081c020(param_1 + 0x10);
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x25) = 1;
      uVar4 = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 == 0) {
        dVar12 = (double)VectorUnsignedToFloat(param_1[6],(byte)(in_fpscr >> 0x16) & 3);
        dVar13 = (double)FUN_01845f30(param_1[4],param_1[5]);
        do {
          bVar11 = (bool)hasExclusiveAccess((double *)(DAT_018d7fe4 + 8));
        } while (!bVar11);
        *(double *)(DAT_018d7fe4 + 8) = dVar12 / 1000000000.0 + dVar13;
        uVar4 = 0;
      }
      goto LAB_00bd621c;
    }
  }
  uVar8 = 3;
  uVar4 = 1;
  *(undefined1 *)(param_1 + 0x25) = 3;
  *(undefined1 *)((int)param_1 + 0x4d) = uVar3;
LAB_00bd621c:
  *(undefined1 *)(param_1 + 0x27) = uVar8;
  return uVar4;
}

