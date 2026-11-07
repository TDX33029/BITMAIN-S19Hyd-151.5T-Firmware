// FUN_00a71bec @ 00a71bec size=1428 calls_out=19 calls_in=0
// strings: Braiins OS

void FUN_00a71bec(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int **ppiVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *extraout_r3_01;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int **ppiVar15;
  int **ppiVar16;
  int **ppiVar17;
  int *extraout_r12;
  bool bVar18;
  int **local_610;
  int *local_608;
  int *local_604;
  int *local_5f8;
  int **local_5f4;
  int *local_5f0;
  int **local_5ec;
  int *local_5e8;
  int **local_5e4;
  int *local_5e0;
  int **local_5dc;
  int iStack_5d8;
  int **local_5d4;
  undefined1 auStack_318 [708];
  int **local_54;
  int *local_50;
  int **local_4c;
  int *local_48;
  int *local_44;
  int **local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int **ppiStack_30;
  int *local_2c;
  
  ppiVar16 = &local_5f0;
  ppiVar17 = &local_5e8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    *(undefined1 *)(param_2 + 0x37) = 0;
    param_2[5] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f5ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f5ac);
  case 4:
    goto switchD_00a71c28_caseD_4;
  case 5:
    goto switchD_00a71c28_caseD_5;
  }
  FUN_00a6fd0c(&local_5f8,param_2 + 5,param_3);
  ppiVar7 = local_5ec;
  piVar11 = local_5f0;
  ppiVar15 = local_5f4;
  piVar4 = local_5f8;
  if (local_5f8 == (int *)&DAT_00000003) {
    *param_1 = 0x80000001;
    uVar3 = 3;
    goto LAB_00a72154;
  }
  local_604 = local_5f0;
  local_608 = local_5e8;
  local_610 = local_5e4;
  uVar8 = (uint)*(byte *)(param_2 + 0x37);
  bVar18 = uVar8 == 3;
  if (bVar18) {
    uVar8 = (uint)*(byte *)(param_2 + 0x36);
  }
  puVar6 = extraout_r3;
  if (bVar18 && uVar8 == 3) {
    uVar8 = FUN_00b99500(param_2 + 7);
    puVar6 = extraout_r3_01;
  }
  if (piVar4 == (int *)0x2) {
    param_2[1] = ppiVar15;
    *(undefined2 *)(param_2 + 0x16f) = 0;
    param_2[2] = piVar11;
    param_2[3] = ppiVar7;
    param_2[0x16e] = param_2 + 1;
switchD_00a71c28_caseD_4:
    FUN_00a6fe94(&local_5f8,param_2 + 6,param_3);
    ppiVar17 = local_5dc;
    piVar2 = local_5e0;
    ppiVar7 = local_5e4;
    piVar9 = local_5e8;
    ppiVar15 = local_5ec;
    piVar4 = local_5f0;
    ppiVar1 = local_5f4;
    piVar11 = local_5f8;
    if (local_5f8 == (int *)&SUB_00000004 && local_5f4 == (int **)0x0) {
      *param_1 = 0x80000001;
      uVar3 = 4;
      goto LAB_00a72154;
    }
    local_604 = local_5e8;
    local_608 = local_5e0;
    FUN_01bed4e2(auStack_318,&iStack_5d8,0x2c0);
    if (*(char *)(param_2 + 0x16f) == '\x03') {
      FUN_00a7389c(param_2 + 6);
    }
    if (piVar11 == (int *)&DAT_00000003 && ppiVar1 == (int **)0x0) {
      local_610 = ppiVar17;
    }
    else {
      param_2[0x173] = ppiVar15;
      param_2[0x174] = piVar9;
      param_2[0x175] = ppiVar7;
      param_2[0x176] = piVar2;
      param_2[0x170] = piVar11;
      param_2[0x171] = ppiVar1;
      param_2[0x177] = ppiVar17;
      param_2[0x172] = piVar4;
      FUN_01bed4e2(param_2 + 0x178,auStack_318,0x2c0);
      *(undefined2 *)(param_2 + 0x16f) = 0;
      param_2[0x16e] = param_2 + 1;
switchD_00a71c28_caseD_5:
      FUN_00a70fd4(&local_5f8,param_2 + 6,param_3);
      ppiVar16 = local_5e4;
      local_608 = local_5e8;
      ppiVar1 = local_5ec;
      piVar11 = local_5f0;
      ppiVar15 = local_5f4;
      piVar4 = local_5f8;
      if (local_5f8 == (int *)&DAT_00000003) {
        *param_1 = 0x80000001;
        uVar3 = 5;
        goto LAB_00a72154;
      }
      if (*(char *)(param_2 + 0x16f) == '\x03') {
        FUN_00a7389c(param_2 + 6);
      }
      if (piVar4 == (int *)0x2) {
        local_50 = piVar11;
        local_54 = ppiVar15;
        local_4c = ppiVar1;
        piVar4 = (int *)FUN_01220dcc();
        FUN_01220ee0(&local_5f8,piVar4);
        ppiVar17 = (int **)0x0;
        do {
          if (*piVar4 == 1) {
            iVar5 = piVar4[1];
            piVar4[1] = 0;
            if (iVar5 == 0) {
              *piVar4 = 0;
              goto LAB_00a71ee4;
            }
          }
          else {
LAB_00a71ee4:
            if ((piVar4[2] != 1) || (iVar5 = FUN_0122143c(piVar4 + 3), iVar5 == 0))
            goto LAB_00a71f3c;
          }
          if (*(int *)(iVar5 + 0x2b0) == 0) {
            ppiVar17 = (int **)((int)ppiVar17 + 1);
          }
        } while( true );
      }
      local_610 = ppiVar16;
      FUN_00a57438(param_2 + 0x170);
      local_604 = piVar11;
      ppiVar7 = ppiVar1;
      ppiVar17 = ppiVar1;
    }
    uVar8 = FUN_0084ec48(param_2 + 1);
    uVar10 = 0x80000000;
    puVar6 = extraout_r3_00;
  }
  else {
    uVar10 = 0x80000000;
  }
  goto LAB_00a72108;
LAB_00a71f3c:
  FUN_018f2d80(piVar4,&DAT_01c245a8);
  local_610 = (int **)&SUB_00000004;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_604 = (int *)&DAT_0000000a;
  *puVar6 = 0x656e6f4e;
  ppiVar7 = (int **)thunk_FUN_01be5118(10);
  if (ppiVar7 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  FUN_01bed4e2(ppiVar7,"Braiins OS",10);
  ppiVar16 = local_5d4;
  local_44 = piVar11;
  local_48 = piVar11;
  piVar4 = extraout_r12;
  if (ppiVar1 != (int **)0x0) {
    local_44 = piVar11 + 10;
    piVar4 = (int *)*piVar11;
  }
  local_3c = piVar11 + (int)ppiVar1 * 10;
  local_40 = ppiVar15;
  if (ppiVar1 != (int **)0x0 && piVar4 != (int *)0x2) {
    iVar5 = piVar11[2];
    iVar12 = piVar11[3];
    iVar13 = piVar11[4];
    piVar9 = (int *)((uint)&local_5f8 | 4);
    *piVar9 = piVar11[1];
    piVar9[1] = iVar5;
    piVar9[2] = iVar12;
    piVar9[3] = iVar13;
    iVar5 = piVar11[6];
    iVar12 = piVar11[7];
    iVar13 = piVar11[8];
    iVar14 = piVar11[9];
    piVar9[4] = piVar11[5];
    piVar9[5] = iVar5;
    piVar9[6] = iVar12;
    piVar9[7] = iVar13;
    piVar9[8] = iVar14;
    local_5f8 = piVar4;
    FUN_019bb7e0(local_5e8,local_5e4);
    FUN_0094ab64(&local_5dc);
    piVar4 = local_3c;
    local_38 = local_48;
    local_34 = local_44;
    ppiStack_30 = local_40;
    local_2c = local_3c;
    piVar11 = local_44;
    if (local_44 != local_3c) {
      do {
        local_5f8 = (int *)*piVar11;
        local_5f4 = (int **)piVar11[1];
        local_5f0 = (int *)piVar11[2];
        local_5ec = (int **)piVar11[3];
        local_5e8 = (int *)piVar11[4];
        local_5e4 = (int **)piVar11[5];
        local_5e0 = (int *)piVar11[6];
        local_5dc = (int **)piVar11[7];
        iStack_5d8 = piVar11[8];
        ppiVar15 = (int **)piVar11[9];
        local_5d4 = ppiVar15;
        FUN_019bb7e0(local_5e8,local_5e4);
        piVar11 = piVar11 + 10;
        FUN_0094ab64(&local_5dc);
        ppiVar16 = (int **)((int)ppiVar15 + (int)ppiVar16);
      } while (piVar11 != piVar4);
      local_34 = piVar11;
    }
    FUN_0094aac0(&local_38);
  }
  else {
    ppiVar16 = (int **)0x0;
    FUN_0094aac0(&local_48);
  }
  FUN_00a57438(param_2 + 0x170);
  FUN_0084ec48(param_2 + 1);
  piVar4 = (int *)&DAT_00000001;
  local_608 = (int *)&DAT_0000000a;
  uVar8 = 4;
  ppiVar15 = (int **)0x0;
  uVar10 = 0;
LAB_00a72108:
  *param_1 = uVar10;
  param_1[1] = piVar4;
  param_1[0xc] = 5;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  param_1[2] = ppiVar15;
  param_1[3] = local_604;
  param_1[4] = ppiVar7;
  param_1[5] = local_608;
  param_1[8] = uVar8;
  uVar3 = 1;
  param_1[9] = ppiVar17;
  param_1[0xb] = ppiVar16;
  param_1[6] = local_610;
  param_1[7] = puVar6;
LAB_00a72154:
  *(undefined1 *)(param_2 + 4) = uVar3;
  return;
}

