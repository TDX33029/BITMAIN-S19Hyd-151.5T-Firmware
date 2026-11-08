// FUN_0083b238 @ 0083b238 size=3484 calls_out=19 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0083b6d8) */
/* WARNING: Removing unreachable block (ram,0x0083b934) */
/* WARNING: Removing unreachable block (ram,0x0083bc58) */

void FUN_0083b238(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  char cVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  undefined1 uVar22;
  ushort *puVar23;
  undefined4 *puVar24;
  char *pcVar25;
  int *piVar26;
  int unaff_r7;
  byte *pbVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  int *local_38;
  int *local_30;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x23)) {
  case 0:
    iVar19 = 3;
    *param_2 = 0;
    param_2[1] = 3;
    param_2[2] = param_2[3];
    iVar18 = 0;
    while (iVar18 < iVar19) {
      *param_2 = iVar18 + 1;
      iVar18 = *(int *)(param_2[2] + 0x148);
      param_2[9] = 0x101ffff;
      *(undefined1 *)(param_2 + 10) = 0;
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0xb] = 0;
      param_2[0xd] = iVar18 + 8;
      param_2[0xe] = (int)(param_2 + 9);
switchD_0083b264_caseD_3:
      uVar30 = FUN_0081c490(param_2 + 0xb,param_3);
      unaff_r7 = (int)(uVar30 >> 0x20);
      if ((uVar30 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)((int)param_2 + 0x23) = 3;
        return;
      }
      FUN_0081b77c(param_2 + 0xb);
      if (unaff_r7 != 0) goto LAB_0083bf58;
      iVar18 = *(int *)(param_2[2] + 0x148);
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(undefined1 *)(param_2 + 0x27) = 0;
      param_2[0xc] = 100000000;
      param_2[0x26] = iVar18 + 8;
switchD_0083b264_caseD_4:
      iVar18 = FUN_0081c170(param_2 + 10,param_3);
      if (iVar18 != 0) {
        *param_1 = 0xd;
        *(undefined1 *)((int)param_2 + 0x23) = 4;
        return;
      }
      if ((char)param_2[0x27] == '\x03') {
        FUN_0081c020(param_2 + 0x12);
      }
      iVar19 = param_2[1];
      iVar18 = *param_2;
    }
    iVar19 = *(int *)(param_2[2] + 0x148);
    iVar18 = 0;
    param_2[0xc] = 0;
    iVar19 = iVar19 + 8;
    *(undefined4 *)((int)param_2 + 0x2a) = 0x100;
    puVar23 = (ushort *)(param_2 + 9);
    *puVar23 = 0x60;
    param_2[0xe] = iVar19;
    param_2[0xf] = (int)puVar23;
    *(undefined4 *)((int)param_2 + 0x26) = 0x5070100;
    *(undefined1 *)(param_2 + 0x1a) = 0;
LAB_0083b528:
    param_2[0x11] = iVar18;
    param_2[0x12] = param_2[0xd];
    param_2[0x13] = (int)puVar23;
    param_2[0x10] = iVar19;
    puVar17 = (uint *)FUN_016d38c8(4,1);
    if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    uVar11 = *puVar23;
    bVar1 = *(byte *)((int)puVar23 + 7);
    param_2[0x17] = 0x60;
    uVar13 = puVar23[3];
    param_2[0x18] = 4;
    uVar14 = puVar23[4];
    param_2[0x16] = 4;
    param_2[0x14] = 4;
    uVar15 = puVar23[1];
    bVar2 = *(byte *)((int)puVar23 + 3);
    bVar3 = *(byte *)((int)puVar23 + 9);
    uVar16 = puVar23[2];
    bVar4 = *(byte *)((int)puVar23 + 5);
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x15] = (int)puVar17;
    param_2[0x1b] = iVar19 + 0xc;
    *puVar17 = (uVar11 & 0xff) << 8 |
               ((uint)bVar1 << 6 | (uint)(byte)uVar13 << 7 | (uint)(byte)uVar14 << 5 |
               (uint)bVar3 << 4) & 0xff | uVar11 >> 8 & 0xf |
               (bVar2 & 0x3f | ((byte)uVar15 & 3) << 6) << 0x10 |
               (bVar4 & 7 | ((byte)uVar16 & 7) << 4) << 0x18;
switchD_0083b2cc_caseD_3:
    local_30 = param_2 + 0x1a;
    iVar18 = FUN_007d67b8(param_2 + 0x1b,param_3);
    if (iVar18 == 0) {
      *(undefined1 *)local_30 = 3;
      goto LAB_0083b740;
    }
    param_2[0x19] = iVar18;
    if ((char)param_2[0x29] == '\x03') {
      cVar12 = (char)param_2[0x28];
      bVar28 = cVar12 == '\x03';
      if (bVar28) {
        cVar12 = (char)param_2[0x1f];
      }
      if (bVar28 && cVar12 == '\x04') {
        FUN_0163c790(param_2 + 0x20);
        if (param_2[0x21] != 0) {
          (**(code **)(param_2[0x21] + 0xc))(param_2[0x22]);
        }
      }
    }
    if (param_2[0x11] == 1) {
      uVar21 = *(int *)param_2[0x10] * param_2[0x12];
      if (0xff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar21 = (uint)*(byte *)((int *)param_2[0x10] + 1);
    }
    uVar29 = (**(code **)(*(int *)(param_2[0x19] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x19] + 0x1c),param_2[0x11],uVar21,param_2[0x17],
                        param_2[0x18],param_2[0x15],param_2[0x16]);
    *(undefined8 *)(param_2 + 0x1b) = uVar29;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018604d4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018604d4);
  case 3:
    goto switchD_0083b264_caseD_3;
  case 4:
    goto switchD_0083b264_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      iVar18 = param_2[0xc];
      iVar19 = param_2[0xe];
      puVar23 = (ushort *)param_2[0xf];
      goto LAB_0083b528;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_0083b2cc_caseD_3;
    case '\x04':
      uVar29 = *(undefined8 *)(param_2 + 0x1b);
    }
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      goto switchD_0083b30c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_0083b30c_caseD_3;
    case '\x04':
      uVar29 = *(undefined8 *)(param_2 + 0x1b);
    }
    goto LAB_0083b964;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      goto switchD_0083b354_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case '\x03':
      goto switchD_0083b354_caseD_3;
    case '\x04':
      uVar29 = *(undefined8 *)(param_2 + 0x1b);
    }
    goto LAB_0083bc88;
  case 8:
    goto switchD_0083b264_caseD_8;
  case 9:
    goto switchD_0083b264_caseD_9;
  case 10:
    goto switchD_0083b264_caseD_a;
  case 0xb:
    goto switchD_0083b264_caseD_b;
  case 0xc:
    goto switchD_0083b264_caseD_c;
  }
  local_30 = param_2 + 0x1a;
  local_38 = param_2 + 0xc;
  uVar30 = (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0xc))((int)uVar29,param_3);
  unaff_r7 = (int)(uVar30 >> 0x20);
  if ((uVar30 & 1) != 0) {
    *(undefined1 *)local_30 = 4;
    goto LAB_0083b740;
  }
  puVar24 = (undefined4 *)param_2[0x1c];
  iVar18 = param_2[0x1b];
  pcVar20 = (code *)*puVar24;
  if (pcVar20 != (code *)0x0) {
    (*pcVar20)(iVar18);
  }
  if (puVar24[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  pcVar25 = (char *)param_2[0x19];
  if (*pcVar25 == '\0') {
    bVar28 = (bool)hasExclusiveAccess(pcVar25);
    if (!bVar28) goto LAB_0083b7b0;
    *pcVar25 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0083b7b0:
    FUN_01280da8(pcVar25);
  }
  FUN_0128236c(pcVar25);
  FUN_0163af68(pcVar25,1,pcVar25);
  if (param_2[0x14] != 0) {
    thunk_FUN_016d3fb4(param_2[0x15]);
  }
  *(undefined1 *)local_30 = 1;
  if ((uVar30 & 1) != 0) {
LAB_0083b740:
    *param_1 = 0xd;
    *(undefined1 *)((int)param_2 + 0x23) = 5;
    return;
  }
  FUN_0081b77c(local_38);
  if (unaff_r7 == 0) {
    iVar18 = *(int *)(param_2[2] + 0x148);
    param_2[0xc] = 0;
    *(undefined1 *)(param_2 + 0xb) = 1;
    param_2[9] = 0x1a0000;
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = iVar18 + 8;
    param_2[0xf] = (int)(param_2 + 9);
    param_2[10] = 0;
switchD_0083b30c_caseD_0:
    param_2[0x13] = param_2[0xf];
    param_2[0x10] = param_2[0xe];
    param_2[0x11] = param_2[0xc];
    param_2[0x12] = param_2[0xd];
    FUN_008a2a2c(param_2 + 0x14);
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x1b] = param_2[0x10] + 0xc;
switchD_0083b30c_caseD_3:
    iVar18 = FUN_007d67b8(param_2 + 0x1b,param_3);
    if (iVar18 == 0) {
      *(undefined1 *)(param_2 + 0x1a) = 3;
      goto LAB_0083b998;
    }
    param_2[0x19] = iVar18;
    if ((char)param_2[0x29] == '\x03') {
      cVar12 = (char)param_2[0x28];
      bVar28 = cVar12 == '\x03';
      if (bVar28) {
        cVar12 = (char)param_2[0x1f];
      }
      if (bVar28 && cVar12 == '\x04') {
        FUN_0163c790(param_2 + 0x20);
        if (param_2[0x21] != 0) {
          (**(code **)(param_2[0x21] + 0xc))(param_2[0x22]);
        }
      }
    }
    if (param_2[0x11] == 1) {
      uVar21 = *(int *)param_2[0x10] * param_2[0x12];
      if (0xff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar21 = (uint)*(byte *)((int *)param_2[0x10] + 1);
    }
    uVar29 = (**(code **)(*(int *)(param_2[0x19] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x19] + 0x1c),param_2[0x11],uVar21,param_2[0x17],
                        param_2[0x18],param_2[0x15],param_2[0x16]);
    *(undefined8 *)(param_2 + 0x1b) = uVar29;
LAB_0083b964:
    local_30 = param_2 + 0xc;
    local_38 = param_2 + 0x1a;
    uVar30 = (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0xc))((int)uVar29,param_3);
    unaff_r7 = (int)(uVar30 >> 0x20);
    if ((uVar30 & 1) != 0) {
      *(undefined1 *)local_38 = 4;
      goto LAB_0083b998;
    }
    puVar24 = (undefined4 *)param_2[0x1c];
    iVar18 = param_2[0x1b];
    pcVar20 = (code *)*puVar24;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(iVar18);
    }
    if (puVar24[1] != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
    pcVar25 = (char *)param_2[0x19];
    if (*pcVar25 == '\0') {
      bVar28 = (bool)hasExclusiveAccess(pcVar25);
      if (!bVar28) goto LAB_0083ba08;
      *pcVar25 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0083ba08:
      FUN_01280da8(pcVar25);
    }
    FUN_0128236c(pcVar25);
    FUN_0163af68(pcVar25,1,pcVar25);
    if (param_2[0x14] != 0) {
      thunk_FUN_016d3fb4(param_2[0x15]);
    }
    *(undefined1 *)local_38 = 1;
    if ((uVar30 & 1) != 0) {
LAB_0083b998:
      *param_1 = 0xd;
      *(undefined1 *)((int)param_2 + 0x23) = 6;
      return;
    }
    FUN_0081b77c(local_30);
    if (unaff_r7 != 0) goto LAB_0083bf58;
    iVar18 = *(int *)(param_2[2] + 0x148);
    param_2[0xc] = 0;
    *(undefined4 *)((int)param_2 + 0x2a) = 0;
    *(undefined4 *)((int)param_2 + 0x26) = 0;
    *(undefined2 *)(param_2 + 9) = 0xd00;
    param_2[0xe] = iVar18 + 8;
    param_2[0xf] = (int)(param_2 + 9);
    *(undefined1 *)(param_2 + 0x1a) = 0;
switchD_0083b354_caseD_0:
    iVar18 = param_2[0xe];
    pbVar27 = (byte *)param_2[0xf];
    param_2[0x11] = param_2[0xc];
    param_2[0x12] = param_2[0xd];
    param_2[0x13] = (int)pbVar27;
    param_2[0x10] = iVar18;
    puVar17 = (uint *)FUN_016d38c8(4,1);
    if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    bVar1 = pbVar27[9];
    bVar2 = pbVar27[8];
    bVar3 = *pbVar27;
    bVar4 = pbVar27[2];
    param_2[0x17] = 0x29;
    bVar5 = pbVar27[7];
    bVar6 = pbVar27[1];
    bVar7 = pbVar27[6];
    bVar8 = pbVar27[5];
    bVar9 = pbVar27[4];
    bVar10 = pbVar27[3];
    param_2[0x1b] = iVar18 + 0xc;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x18] = 4;
    param_2[0x16] = 4;
    param_2[0x15] = (int)puVar17;
    param_2[0x14] = 4;
    *puVar17 = (bVar4 & 3) >> 1 | (bVar3 & 3) << 6 | (bVar6 & 0x1f) << 1 |
               (bVar9 & 0x3f | (bVar4 & 1) << 7 | (bVar10 & 1) << 6) << 8 |
               ((bVar5 & 3) >> 1 | (bVar8 & 7) << 5 | (bVar7 & 0xf) << 1) << 0x10 |
               (bVar1 & 0x3f | (uint)bVar5 << 7 | (bVar2 & 1) << 6) << 0x18;
switchD_0083b354_caseD_3:
    local_30 = param_2 + 0x1a;
    iVar18 = FUN_007d67b8(param_2 + 0x1b,param_3);
    if (iVar18 == 0) {
      *(undefined1 *)local_30 = 3;
      goto LAB_0083bcbc;
    }
    param_2[0x19] = iVar18;
    if ((char)param_2[0x29] == '\x03') {
      cVar12 = (char)param_2[0x28];
      bVar28 = cVar12 == '\x03';
      if (bVar28) {
        cVar12 = (char)param_2[0x1f];
      }
      if (bVar28 && cVar12 == '\x04') {
        FUN_0163c790(param_2 + 0x20);
        if (param_2[0x21] != 0) {
          (**(code **)(param_2[0x21] + 0xc))(param_2[0x22]);
        }
      }
    }
    if (param_2[0x11] == 1) {
      uVar21 = *(int *)param_2[0x10] * param_2[0x12];
      if (0xff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar21 = (uint)*(byte *)((int *)param_2[0x10] + 1);
    }
    uVar29 = (**(code **)(*(int *)(param_2[0x19] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x19] + 0x1c),param_2[0x11],uVar21,param_2[0x17],
                        param_2[0x18],param_2[0x15],param_2[0x16]);
    *(undefined8 *)(param_2 + 0x1b) = uVar29;
LAB_0083bc88:
    local_30 = param_2 + 0x1a;
    local_38 = param_2 + 0xc;
    uVar30 = (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0xc))((int)uVar29,param_3);
    unaff_r7 = (int)(uVar30 >> 0x20);
    if ((uVar30 & 1) != 0) {
      *(undefined1 *)local_30 = 4;
      goto LAB_0083bcbc;
    }
    puVar24 = (undefined4 *)param_2[0x1c];
    iVar18 = param_2[0x1b];
    pcVar20 = (code *)*puVar24;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(iVar18);
    }
    if (puVar24[1] != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
    pcVar25 = (char *)param_2[0x19];
    if (*pcVar25 == '\0') {
      bVar28 = (bool)hasExclusiveAccess(pcVar25);
      if (!bVar28) goto LAB_0083bd2c;
      *pcVar25 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0083bd2c:
      FUN_01280da8(pcVar25);
    }
    FUN_0128236c(pcVar25);
    FUN_0163af68(pcVar25,1,pcVar25);
    if (param_2[0x14] != 0) {
      thunk_FUN_016d3fb4(param_2[0x15]);
    }
    *(undefined1 *)local_30 = 1;
    if ((uVar30 & 1) != 0) {
LAB_0083bcbc:
      *param_1 = 0xd;
      *(undefined1 *)((int)param_2 + 0x23) = 7;
      return;
    }
    FUN_0081b77c(local_38);
    if (unaff_r7 == 0) {
      iVar18 = *(int *)(param_2[2] + 0x148);
      param_2[9] = 0;
      *(undefined1 *)((int)param_2 + 0x2b) = 7;
      *(undefined1 *)(param_2 + 10) = 0;
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0xb] = 0;
      *(undefined2 *)((int)param_2 + 0x29) = 0;
      param_2[0xd] = iVar18 + 8;
      param_2[0xe] = (int)(param_2 + 9);
switchD_0083b264_caseD_8:
      uVar30 = FUN_00818c80(param_2 + 0xb,param_3);
      unaff_r7 = (int)(uVar30 >> 0x20);
      if ((uVar30 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)((int)param_2 + 0x23) = 8;
        return;
      }
      FUN_0081b77c(param_2 + 0xb);
      if (unaff_r7 == 0) {
        iVar18 = *(int *)(param_2[2] + 0x148);
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(undefined1 *)(param_2 + 0x27) = 0;
        param_2[0xc] = 100000000;
        param_2[0x26] = iVar18 + 8;
switchD_0083b264_caseD_9:
        iVar18 = FUN_0081c170(param_2 + 10,param_3);
        if (iVar18 != 0) {
          *param_1 = 0xd;
          *(undefined1 *)((int)param_2 + 0x23) = 9;
          return;
        }
        if ((char)param_2[0x27] == '\x03') {
          FUN_0081c020(param_2 + 0x12);
        }
        param_2[4] = 0;
        *(undefined2 *)(param_2 + 5) = 0x101;
        *(undefined2 *)((int)param_2 + 0x17) = 0x100;
        *(undefined1 *)((int)param_2 + 0x16) = 0;
        *(undefined2 *)((int)param_2 + 0x21) = 0;
        *(undefined4 *)((int)param_2 + 0x19) = 0;
        *(undefined4 *)((int)param_2 + 0x1d) = 0xff0000;
        iVar18 = *(int *)(param_2[2] + 0x148);
        *(undefined1 *)(param_2 + 0x17) = 0;
        param_2[9] = 0;
        param_2[0xb] = iVar18 + 8;
        param_2[0xc] = (int)(param_2 + 4);
switchD_0083b264_caseD_a:
        piVar26 = param_2 + 9;
        uVar30 = FUN_0083c3d0(piVar26,param_3);
        unaff_r7 = (int)(uVar30 >> 0x20);
        if ((uVar30 & 1) != 0) {
          *param_1 = 0xd;
          *(undefined1 *)((int)param_2 + 0x23) = 10;
          return;
        }
        FUN_0081b77c(piVar26);
        if (unaff_r7 == 0) {
          iVar18 = *(int *)(param_2[2] + 0x148);
          *(undefined1 *)(param_2 + 0x18) = 0;
          param_2[0xc] = iVar18 + 8;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xd] = (int)piVar26;
switchD_0083b264_caseD_b:
          piVar26 = param_2 + 10;
          uVar30 = FUN_0083c838(piVar26,param_3);
          unaff_r7 = (int)(uVar30 >> 0x20);
          if ((uVar30 & 1) != 0) {
            *param_1 = 0xd;
            *(undefined1 *)((int)param_2 + 0x23) = 0xb;
            return;
          }
          FUN_0081b77c(piVar26);
          if (unaff_r7 == 0) {
            iVar18 = *(int *)(param_2[2] + 0x148);
            *piVar26 = 0;
            param_2[0xb] = 0;
            *(undefined1 *)(param_2 + 0x27) = 0;
            param_2[0xc] = 100000000;
            param_2[0x26] = iVar18 + 8;
switchD_0083b264_caseD_c:
            iVar18 = FUN_0081c170(param_2 + 10,param_3);
            if (iVar18 != 0) {
              *param_1 = 0xd;
              *(undefined1 *)((int)param_2 + 0x23) = 0xc;
              return;
            }
            uVar22 = 0xc;
            if ((char)param_2[0x27] == '\x03') {
              FUN_0081c020(param_2 + 0x12);
            }
            goto LAB_0083bf5c;
          }
        }
      }
    }
  }
LAB_0083bf58:
  uVar22 = 9;
LAB_0083bf5c:
  *(int *)(param_1 + 4) = unaff_r7;
  *param_1 = uVar22;
  *(undefined1 *)((int)param_2 + 0x23) = 1;
  return;
}

