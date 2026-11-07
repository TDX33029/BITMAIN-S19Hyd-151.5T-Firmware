// FUN_00e134f0 @ 00e134f0 size=1148 calls_out=11 calls_in=3
// strings: 

void FUN_00e134f0(undefined4 *param_1,int *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined1 uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined8 unaff_d8;
  undefined8 uVar22;
  uint local_c0;
  undefined4 local_88;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[4]) {
  case '\0':
    param_2[1] = *param_2;
    *(undefined1 *)(param_2 + 0x12) = 0;
    param_2[5] = *param_2 + 0x28;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c176f8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c176f8);
  case '\x04':
    goto switchD_00e13514_caseD_4;
  }
  piVar15 = param_2 + 5;
  uVar22 = FUN_00df39fc(piVar15,param_3);
  iVar16 = (int)((ulonglong)uVar22 >> 0x20);
  if ((int)uVar22 == 0) {
    uVar14 = 3;
    *param_1 = 3;
  }
  else {
    *(undefined8 *)(param_2 + 2) = uVar22;
    if ((char)param_2[0x12] == '\x03') {
      cVar1 = (char)param_2[0x11];
      bVar21 = cVar1 == '\x03';
      if (bVar21) {
        cVar1 = (char)param_2[0x10];
      }
      if (bVar21 && cVar1 == '\x03') {
        FUN_0193c3cc(param_2 + 8);
        iVar16 = param_2[3];
      }
    }
    uVar18 = *(uint *)(iVar16 + 8);
    if (0x2762762 < uVar18) {
      uVar17 = 0;
LAB_00e13598:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,piVar15);
    }
    piVar15 = (int *)(uVar18 * 0x34);
    if (piVar15 == (int *)0x0) {
      iVar16 = 4;
      uVar18 = 0;
    }
    else {
      uVar17 = 4;
      iVar16 = FUN_01298504(piVar15,4);
      if (iVar16 == 0) goto LAB_00e13598;
    }
    param_2[7] = 0;
    param_2[6] = iVar16;
    param_2[5] = uVar18;
    iVar16 = *(int *)(param_2[3] + 4);
    iVar11 = *(int *)(param_2[3] + 8);
    param_2[8] = iVar16;
    iVar11 = iVar16 + iVar11 * 4;
    param_2[9] = iVar11;
    while (iVar16 != iVar11) {
      param_2[10] = iVar16;
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[8] = iVar16 + 4;
switchD_00e13514_caseD_4:
      uVar22 = FUN_00df39fc(param_2 + 10,param_3);
      iVar16 = (int)((ulonglong)uVar22 >> 0x20);
      if ((int)uVar22 == 0) {
        uVar14 = 4;
        *param_1 = 3;
        goto LAB_00e13954;
      }
      if ((char)param_2[0x17] == '\x03') {
        cVar1 = (char)param_2[0x16];
        bVar21 = cVar1 == '\x03';
        if (bVar21) {
          cVar1 = (char)param_2[0x15];
        }
        if (bVar21 && cVar1 == '\x03') {
          FUN_0193c3cc(param_2 + 0xd);
        }
      }
      local_38 = 0;
      local_3c = 1;
      local_40 = 0;
      local_4c = &LAB_00632348;
      local_50 = iVar16;
      iVar11 = FUN_012fa178(&local_40,&DAT_01c10bb0,&DAT_00590e5f,&local_50);
      uVar9 = local_38;
      uVar7 = local_3c;
      uVar17 = local_40;
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01c10bf8,&DAT_01d30334);
      }
      FUN_006666fc(&local_60,*(undefined4 *)(iVar16 + 0x10),*(undefined4 *)(iVar16 + 0x14));
      FUN_006666fc(&local_50,*(undefined4 *)(iVar16 + 0x1c),*(undefined4 *)(iVar16 + 0x20));
      if (*(int *)(iVar16 + 0x24) == -0x80000000) {
        local_40 = 0x80000000;
      }
      else {
        FUN_006666fc(&local_40,*(undefined4 *)(iVar16 + 0x28),*(undefined4 *)(iVar16 + 0x2c));
      }
      uVar10 = local_38;
      uVar8 = local_3c;
      uVar6 = local_40;
      uVar20 = uStack_48;
      puVar5 = local_4c;
      iVar11 = local_50;
      uVar4 = uStack_58;
      uVar3 = uStack_5c;
      uVar2 = local_60;
      local_88 = CONCAT31(local_88._1_3_,*(undefined1 *)(iVar16 + 0x30));
      iVar16 = param_2[7];
      if (iVar16 == param_2[5]) {
        FUN_00f85d4c();
      }
      puVar12 = (undefined4 *)(iVar16 * 0x34 + param_2[6]);
      *puVar12 = uVar2;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = iVar11;
      puVar12[4] = puVar5;
      puVar12[5] = uVar20;
      puVar12[6] = uVar17;
      puVar12[7] = uVar7;
      puVar12[8] = uVar9;
      puVar12[9] = uVar6;
      puVar12[10] = uVar8;
      puVar12[0xb] = uVar10;
      puVar12[0xc] = local_88;
      param_2[7] = iVar16 + 1;
      FUN_019f8c54((int)uVar22,1);
      iVar11 = param_2[9];
      iVar16 = param_2[8];
    }
    local_50 = param_2[1] + 0x10;
    local_38 = 0;
    local_3c = 1;
    local_40 = 0;
    local_4c = &LAB_00632348;
    iVar16 = FUN_012fa178(&local_40,&DAT_01c17420,&DAT_00590e5f,&local_50);
    uVar9 = local_38;
    uVar7 = local_3c;
    uVar17 = local_40;
    if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01c17458,&DAT_01d30334);
    }
    FUN_006666fc(&local_40,*(undefined4 *)(param_2[1] + 0x20),*(undefined4 *)(param_2[1] + 0x24));
    uVar4 = local_38;
    uVar3 = local_3c;
    uVar2 = local_40;
    puVar13 = (uint *)param_2[1];
    local_c0 = param_3;
    if (*puVar13 == 2) {
      uVar20 = 2;
    }
    else if ((*puVar13 & 1) == 0) {
      local_c0 = puVar13[1];
      uVar20 = 0;
    }
    else {
      unaff_d8 = *(undefined8 *)(puVar13 + 2);
      uVar20 = 1;
    }
    iVar16 = param_2[5];
    iVar11 = param_2[6];
    iVar19 = param_2[7];
    uVar14 = 1;
    FUN_019f8c54(param_2[2],1);
    *param_1 = uVar20;
    param_1[1] = local_c0;
    *(undefined8 *)(param_1 + 2) = unaff_d8;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    param_1[7] = iVar16;
    param_1[8] = iVar11;
    param_1[9] = iVar19;
    param_1[10] = uVar17;
    param_1[0xb] = uVar7;
    param_1[0xc] = uVar9;
  }
LAB_00e13954:
  *(undefined1 *)(param_2 + 4) = uVar14;
  return;
}

