// FUN_00d25ba8 @ 00d25ba8 size=4384 calls_out=16 calls_in=0
// strings: Component | Component | indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | Component | Component | Component

void FUN_00d25ba8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int *****pppppiVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int ****ppppiVar18;
  int *piVar19;
  int *****pppppiVar20;
  int *****pppppiVar21;
  int iVar22;
  int iVar23;
  int *****pppppiVar24;
  int iVar25;
  int iVar26;
  int *****pppppiVar27;
  int iVar28;
  int iVar29;
  int *****unaff_r7;
  int iVar30;
  int iVar31;
  uint uVar32;
  int *****unaff_r8;
  int iVar33;
  int iVar34;
  int *****pppppiVar35;
  int *****pppppiVar36;
  bool bVar37;
  int local_13c;
  int local_138;
  int local_128;
  int *****local_11c;
  int *****local_118;
  int *****local_114;
  int *****local_10c;
  int *****local_108;
  int *****local_104;
  int *****local_100;
  int *****local_fc;
  int *****local_f8;
  int *****local_f4;
  int *****local_f0;
  int *****local_ec;
  int *****local_e8;
  int *****local_e0;
  int local_dc;
  int ****local_d8;
  int iStack_d4;
  int iStack_d0;
  int *****local_c8;
  undefined1 *local_c4;
  int *local_c0;
  undefined1 *local_bc;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 local_a8;
  int *****local_a0;
  int *****local_9c;
  int *****local_98;
  int *****local_94;
  int *****local_90;
  int *****local_8c;
  int *****local_88;
  int *****local_84;
  int *****local_80;
  int *****local_7c;
  int *****local_78;
  int *****local_74;
  int *****local_70;
  int *****local_6c;
  int *****local_68;
  int *****local_64;
  int ****local_60;
  int iStack_5c;
  int iStack_58;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int ****local_34;
  int ****local_30;
  int ****local_2c;
  int ****local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x17]) {
  case '\0':
    unaff_r7 = (int *****)param_2[9];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    *(char *)(param_2 + 0x13) = (char)param_2[8];
    param_2[0xf] = (int)unaff_r7;
    piVar13 = (int *)0x0;
    if (*param_2 != 0) {
      piVar13 = param_2 + 1;
    }
    ppppiVar18 = unaff_r7[0x13];
    param_2[0xe] = (int)piVar13;
    iVar17 = 0x3c;
    iVar15 = 0x3c;
    if (ppppiVar18 == (int ****)0x0) {
      iVar15 = 0x2c;
    }
    iVar22 = *(int *)((int)unaff_r7 + iVar15 + 0x10);
    iVar15 = *(int *)((int)unaff_r7 + iVar15 + 0x14);
    pppppiVar24 = (int *****)(param_2 + 0xb);
    *pppppiVar24 = (int ****)0x1;
    param_2[0xd] = iVar15;
    piVar13 = param_2 + 0xc;
    *piVar13 = iVar22 + 8;
    if (unaff_r7[0x13] == (int ****)0x0) {
      iVar17 = 0x2c;
    }
    unaff_r8 = *(int ******)((int)unaff_r7 + iVar17 + 0x10);
    do {
      ppppiVar18 = *unaff_r8;
      bVar37 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar37);
    *unaff_r8 = (int ****)((int)ppppiVar18 + 1);
    if ((int)ppppiVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xd26d88);
      (*pcVar1)();
    }
    iVar17 = *(int *)((int)unaff_r7 + iVar17 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    iVar15 = *(int *)param_2[6];
    local_e0 = unaff_r8;
    local_dc = iVar17;
    if ((*(int *)(iVar15 + 0x10) == 0) && (*(int *)(param_2[9] + 0x1c) == 0)) {
      *(undefined1 *)(param_2 + 0x1d) = 0;
      local_118 = (int *****)param_2[10];
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      param_2[0x18] = (int)unaff_r8;
      param_2[0x19] = iVar17;
      param_2[0x1a] = (int)local_118;
      param_2[0x1b] = (int)pppppiVar24;
      local_ec = pppppiVar24;
LAB_00d25fc4:
      param_2[0x1c] = (int)pppppiVar24;
      pppppiVar27 = (int *****)&DAT_80000000;
      ppppiVar18 = pppppiVar24[4];
      if (ppppiVar18[0x10] == (int ***)0x5) {
        iVar17 = thunk_FUN_01bed842(ppppiVar18[0xf] + 2,
                                    "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                                    ,5);
        if (iVar17 == 0) {
          param_2[0x1e] = (int)local_118;
          *(undefined1 *)(param_2 + 0x23) = 0;
          param_2[0x1f] = (int)pppppiVar24;
          goto LAB_00d269e8;
        }
      }
      else if ((ppppiVar18[0x10] == (int ***)0x4) && (ppppiVar18[0xf][2] == (int **)0x656d616e)) {
        param_2[0x1e] = (int)local_118;
        *(undefined1 *)(param_2 + 0x23) = 0;
        param_2[0x1f] = (int)pppppiVar24;
        goto LAB_00d2601c;
      }
      local_10c = unaff_r8;
      goto LAB_00d26b1c;
    }
    param_2[0x14] = -0x80000000;
    param_2[0x15] = (int)"Component";
    param_2[0x16] = 9;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&LAB_01c14638);
    }
    iVar22 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                          *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"Component",9);
    if (iVar22 != 0) {
      uVar16 = 2;
      if ((int)*(uint *)(iVar22 + 0x10) < 0) {
        uVar16 = *(uint *)(iVar22 + 0x10) ^ 0x80000000;
      }
      if (uVar16 != 2) {
        if (uVar16 != 1) goto LAB_00d25dd0;
        iVar22 = iVar22 + 0x18;
      }
      iVar22 = FUN_006e05dc(iVar22,*(int *)(param_2[9] + 0x3c) + 8,
                            *(undefined4 *)(param_2[9] + 0x40));
      if (iVar22 != 0) {
        iVar25 = param_2[9];
        if (*(int *)(iVar25 + 0x4c) == 0) {
          local_138 = 0;
        }
        else {
          local_13c = *(int *)(iVar25 + 0x50);
          local_138 = *(int *)(iVar25 + 0x4c) + 8;
        }
        iVar30 = *(int *)(iVar22 + 0x8c);
        iVar15 = iVar15 + 8;
        iVar5 = *(int *)(iVar22 + 0x90);
        iVar23 = *(int *)(iVar25 + 0x3c) + 8;
        iVar34 = *(int *)(iVar25 + 0x40);
        *(undefined1 *)((int)param_2 + 0x5e) = 1;
        iVar28 = param_2[10];
        iVar22 = param_2[0x13];
        iVar6 = *(int *)(iVar25 + 0x1c);
        *(undefined1 *)((int)param_2 + 0x5e) = 0;
        if (iVar6 == 0) {
          param_2[0x3e] = iVar28;
          *(char *)(param_2 + 0x3c) = (char)iVar22;
          param_2[0x3f] = (int)pppppiVar24;
          param_2[0x3a] = local_138;
          param_2[0x54] = (int)unaff_r8;
          param_2[0x3b] = local_13c;
          *(undefined1 *)(param_2 + 0x41) = 0;
          param_2[0x55] = iVar17;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3d) = 0;
          param_2[0x39] = iVar25 + 8;
          param_2[0x31] = iVar15;
          param_2[0x32] = (int)piVar13;
          param_2[0x34] = 9;
          param_2[0x33] = (int)"Component";
          param_2[0x36] = iVar5;
          param_2[0x37] = iVar23;
          param_2[0x38] = iVar34;
          param_2[0x35] = iVar30;
          param_2[0x18] = (int)(param_2 + 0x3e);
          param_2[0x19] = (int)(param_2 + 0x18);
          param_2[0x1a] = (int)&DAT_01c14aa8;
          goto switchD_00d25bcc_caseD_4;
        }
        piVar7 = (int *)thunk_FUN_01be5118(0x58);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x58);
        }
        *(undefined1 *)(piVar7 + 3) = 0;
        *piVar7 = iVar28;
        piVar7[1] = (int)pppppiVar24;
        param_2[0x3d] = (int)piVar7;
        param_2[0x3e] = (int)&DAT_01c17a18;
        if (*(int *)(iVar25 + 0x1c) != 0) {
          iVar28 = *(int *)(iVar25 + 0x18);
          iVar6 = iVar28 + *(int *)(iVar25 + 0x1c) * 0x24;
          piVar7 = (int *)((uint)&local_a0 | 4);
          do {
            iVar26 = *(int *)param_2[5];
            if (*(int *)(iVar26 + 0x14) != 0) {
              iVar31 = *(int *)(iVar28 + 0x1c) + 8;
              iVar33 = *(int *)(iVar28 + 0x20);
              uVar8 = FUN_01a9c24c(*(undefined4 *)(iVar26 + 0x18),*(undefined4 *)(iVar26 + 0x1c),
                                   *(undefined4 *)(iVar26 + 0x20),*(undefined4 *)(iVar26 + 0x24),
                                   iVar31,iVar33);
              uVar16 = uVar8 >> 0x19;
              iVar29 = *(int *)(iVar26 + 8);
              uVar32 = *(uint *)(iVar26 + 0xc);
              local_128 = 0;
              while( true ) {
                uVar8 = uVar32 & uVar8;
                uVar9 = *(uint *)(iVar29 + uVar8);
                uVar10 = uVar9 ^ uVar16 * 0x1010101;
                for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                    uVar10 = uVar10 - 1 & uVar10) {
                  uVar11 = uVar8 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                  (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >>
                                   3) & uVar32;
                  iVar26 = iVar29 + -0x14 + uVar11 * -0x14;
                  if ((iVar33 == *(int *)(iVar26 + 8)) &&
                     (iVar26 = thunk_FUN_01bed842(iVar31,*(undefined4 *)(iVar26 + 4),iVar33),
                     iVar26 == 0)) {
                    local_c8 = (int *****)*pppppiVar24;
                    local_c4 = (undefined1 *)param_2[0xc];
                    local_c0 = (int *)param_2[0xd];
                    local_bc = (undefined1 *)param_2[0xe];
                    local_a8 = 0;
                    local_b4 = param_2[0x10];
                    iStack_b0 = param_2[0x11];
                    iStack_ac = param_2[0x12];
                    iVar29 = iVar29 + uVar11 * -0x14;
                    local_b8 = iVar28;
                    (**(code **)(*(int *)(iVar29 + -4) + 0x14))
                              (&local_a0,*(undefined4 *)(iVar29 + -8),&local_c8,iVar28 + 8);
                    local_114 = local_78;
                    local_118 = local_7c;
                    pppppiVar20 = local_84;
                    pppppiVar35 = local_a0;
                    local_e8 = local_9c;
                    if (local_a0 != (int *****)0x2) {
                      local_f0 = local_68;
                      local_ec = local_6c;
                      local_104 = local_70;
                      local_100 = local_74;
                      local_fc = local_94;
                      local_f8 = local_90;
                      local_10c = local_8c;
                      local_f4 = local_88;
                      local_108 = local_80;
                      FUN_0175d85c(param_2 + 0x3d);
                      local_94 = local_98;
                      goto LAB_00d268ec;
                    }
                    if (*pppppiVar24 == (int ****)0x1) {
                      local_60 = (int ****)*piVar13;
                      iStack_5c = param_2[0xd];
                      iStack_58 = param_2[0xe];
                    }
                    local_a0 = (int *****)(uint)(*pppppiVar24 == (int ****)0x1);
                    local_90 = (int *****)param_2[0xf];
                    local_8c = (int *****)param_2[0x10];
                    local_88 = (int *****)param_2[0x11];
                    local_84 = (int *****)param_2[0x12];
                    iVar26 = param_2[0x13];
                    *piVar7 = (int)local_60;
                    piVar7[1] = iStack_5c;
                    piVar7[2] = iStack_58;
                    local_7c = local_9c;
                    local_74 = (int *****)param_2[0x3d];
                    local_70 = (int *****)param_2[0x3e];
                    local_78 = local_98;
                    local_80 = (int *****)CONCAT31(local_80._1_3_,(char)iVar26);
                    local_64 = (int *****)((uint)local_64 & 0xffffff00);
                    puVar12 = (undefined4 *)thunk_FUN_01be5118(0x40);
                    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x40);
                    }
                    *puVar12 = local_a0;
                    puVar12[1] = local_9c;
                    puVar12[2] = local_98;
                    puVar12[3] = local_94;
                    puVar12[4] = local_90;
                    puVar12[5] = local_8c;
                    puVar12[6] = local_88;
                    puVar12[7] = local_84;
                    puVar12[8] = local_80;
                    puVar12[9] = local_7c;
                    puVar12[10] = local_78;
                    puVar12[0xb] = local_74;
                    puVar12[0xc] = local_70;
                    puVar12[0xd] = local_6c;
                    puVar12[0xe] = local_68;
                    puVar12[0xf] = local_64;
                    param_2[0x3d] = (int)puVar12;
                    param_2[0x3e] = (int)&DAT_01c14b38;
                    goto LAB_00d2653c;
                  }
                }
                if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
                local_128 = local_128 + 4;
                uVar8 = uVar8 + local_128;
              }
            }
LAB_00d2653c:
            iVar28 = iVar28 + 0x24;
          } while (iVar28 != iVar6);
        }
        param_2[0x3f] = (int)unaff_r8;
        param_2[0x40] = iVar17;
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
        param_2[0x39] = local_138;
        param_2[0x30] = iVar15;
        param_2[0x3a] = local_13c;
        *(char *)(param_2 + 0x3b) = (char)iVar22;
        param_2[0x38] = iVar25 + 8;
        param_2[0x31] = (int)piVar13;
        param_2[0x33] = 9;
        param_2[0x18] = (int)(param_2 + 0x3d);
        param_2[0x32] = (int)"Component";
        param_2[0x34] = iVar30;
        param_2[0x35] = iVar5;
        param_2[0x36] = iVar23;
        param_2[0x37] = iVar34;
        param_2[0x19] = (int)&DAT_01c14648;
        goto switchD_00d25bcc_caseD_5;
      }
    }
LAB_00d25dd0:
    local_c4 = &LAB_00701524;
    local_c8 = (int *****)&local_e0;
    local_bc = &LAB_012b97d8;
    local_c0 = param_2 + 0x14;
    FUN_00664898(&local_60,&DAT_005952c0,&local_c8);
    local_d8 = local_60;
    iStack_d4 = iStack_5c;
    iStack_d0 = iStack_58;
    local_c4 = *(undefined1 **)param_2[0xf];
    local_c0 = (int *)((int *)param_2[0xf])[1];
    local_c8 = (int *****)0x1;
    FUN_006bd784(&local_a0,&local_d8,&local_c8);
    local_f0 = local_68;
    local_ec = local_6c;
    local_104 = local_70;
    local_100 = local_74;
    local_108 = local_80;
    local_e8 = local_9c;
    local_fc = local_94;
    local_f8 = local_90;
    local_f4 = local_88;
    pppppiVar24 = local_78;
    pppppiVar27 = local_84;
    unaff_r7 = local_a0;
    local_10c = local_8c;
    local_118 = local_7c;
    pppppiVar35 = local_98;
LAB_00d268f8:
    if (param_2[0x14] != -0x80000000) {
      FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    }
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        ppppiVar18 = *local_e0;
        bVar37 = (bool)hasExclusiveAccess(local_e0);
      } while (!bVar37);
      *local_e0 = (int ****)((int)ppppiVar18 + -1);
      if (ppppiVar18 == (int ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_e0,local_dc);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    uVar14 = 1;
    goto LAB_00d26b38;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1d]) {
    case '\0':
      local_118 = (int *****)param_2[0x1a];
      pppppiVar24 = (int *****)param_2[0x1b];
      goto LAB_00d25fc4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22680);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22680);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        local_118 = (int *****)param_2[0x1e];
        pppppiVar24 = (int *****)param_2[0x1f];
LAB_00d2601c:
        param_2[0x20] = (int)local_118;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)pppppiVar24;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22680);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22680);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c22680);
        }
        local_118 = (int *****)param_2[0x20];
      }
      piVar19 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      piVar7 = param_2 + 0x1f;
      *(undefined1 *)(param_2 + 0x22) = 1;
      piVar13 = param_2 + 0x1e;
      *piVar13 = (int)local_118;
      iVar15 = piVar19[4];
      iVar6 = piVar19[5];
      iVar28 = piVar19[6];
      iVar5 = piVar19[7];
      iVar17 = piVar19[8];
      iVar22 = piVar19[1];
      iVar25 = piVar19[2];
      iVar23 = piVar19[3];
      *piVar7 = *piVar19;
      param_2[0x20] = iVar22;
      param_2[0x21] = iVar25;
      param_2[0x22] = iVar23;
      param_2[0x23] = iVar15 + 0x20;
      param_2[0x24] = iVar6;
      param_2[0x25] = iVar28;
      param_2[0x26] = iVar5;
      *(char *)(param_2 + 0x27) = (char)iVar17;
      iVar15 = piVar19[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar13;
      param_2[0x29] = (int)piVar7;
      param_2[0x2a] = iVar15;
LAB_00d26118:
      iVar17 = *piVar13;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = iVar17;
      param_2[0x2c] = (int)piVar7;
      param_2[0x2d] = iVar15;
      break;
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar13 = (int *)param_2[0x28];
        piVar7 = (int *)param_2[0x29];
        iVar15 = param_2[0x2a];
        goto LAB_00d26118;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      case '\x03':
        if ((char)param_2[0x2e] != '\0') {
          if ((char)param_2[0x2e] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21c0c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21c0c);
        }
        iVar17 = param_2[0x2b];
      }
      break;
    case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        local_118 = (int *****)param_2[0x1e];
        pppppiVar24 = (int *****)param_2[0x1f];
LAB_00d269e8:
        param_2[0x20] = (int)local_118;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)pppppiVar24;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22680);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22680);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c22680);
        }
        local_118 = (int *****)param_2[0x20];
      }
      piVar7 = param_2 + 0x1e;
      piVar19 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      *(undefined1 *)(param_2 + 0x22) = 1;
      param_2[0x1e] = (int)(local_118 + 3);
      iVar23 = piVar19[4];
      piVar13 = param_2 + 0x1f;
      iVar6 = piVar19[5];
      iVar5 = piVar19[6];
      iVar28 = piVar19[7];
      iVar17 = piVar19[8];
      iVar15 = piVar19[1];
      iVar22 = piVar19[2];
      iVar25 = piVar19[3];
      *piVar13 = *piVar19;
      param_2[0x20] = iVar15;
      param_2[0x21] = iVar22;
      param_2[0x22] = iVar25;
      param_2[0x23] = iVar23 + 0x20;
      param_2[0x24] = iVar6;
      param_2[0x25] = iVar5;
      param_2[0x26] = iVar28;
      *(char *)(param_2 + 0x27) = (char)iVar17;
      iVar17 = piVar19[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar7;
      param_2[0x29] = (int)piVar13;
      param_2[0x2a] = iVar17;
LAB_00d26a88:
      puVar12 = (undefined4 *)*piVar7;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = (int)puVar12;
      param_2[0x2c] = (int)piVar13;
      param_2[0x2d] = iVar17;
      goto LAB_00d26aa0;
    case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar7 = (int *)param_2[0x28];
        piVar13 = (int *)param_2[0x29];
        iVar17 = param_2[0x2a];
        goto LAB_00d26a88;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      case '\x03':
        if ((char)param_2[0x2e] != '\0') {
          if ((char)param_2[0x2e] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21c2c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21c2c);
        }
        puVar12 = (undefined4 *)param_2[0x2b];
      }
LAB_00d26aa0:
      local_10c = (int *****)*puVar12;
      *(undefined1 *)(param_2 + 0x2e) = 1;
      local_f8 = (int *****)0x0;
      pppppiVar36 = (int *****)&local_c8;
      pppppiVar35 = &local_34;
      pppppiVar20 = &local_30;
      pppppiVar21 = &local_2c;
      unaff_r7 = &local_28;
      pppppiVar24 = &local_d8;
      local_118 = &local_60;
      pppppiVar27 = (int *****)&DAT_80000001;
      local_f4 = (int *****)0x0;
      local_fc = (int *****)0x0;
      goto LAB_00d26ae0;
    }
    FUN_006666fc(&local_a0,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
    pppppiVar27 = (int *****)0x80000002;
    pppppiVar36 = (int *****)&local_38;
    local_38 = local_8c;
    local_fc = local_a0;
    local_f8 = local_9c;
    local_f4 = local_94;
    local_3c = local_88;
    pppppiVar35 = (int *****)&local_50;
    local_40 = local_84;
    pppppiVar20 = (int *****)&local_4c;
    local_44 = local_80;
    pppppiVar21 = (int *****)&local_48;
    local_48 = local_7c;
    unaff_r7 = (int *****)&local_44;
    local_50 = local_74;
    local_118 = (int *****)&local_3c;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    pppppiVar24 = (int *****)&local_40;
    local_4c = local_78;
    local_10c = local_98;
LAB_00d26ae0:
    *(undefined1 *)(param_2 + 0x2f) = 1;
    local_f0 = (int *****)*pppppiVar35;
    local_ec = (int *****)*pppppiVar20;
    pppppiVar24 = (int *****)*pppppiVar24;
    local_118 = (int *****)*local_118;
    local_104 = (int *****)*pppppiVar21;
    local_100 = (int *****)*unaff_r7;
    local_108 = (int *****)*pppppiVar36;
LAB_00d26b1c:
    pppppiVar35 = (int *****)param_2[0x19];
    *(undefined1 *)(param_2 + 0x1d) = 1;
    local_e8 = (int *****)param_2[0x18];
    goto LAB_00d26b30;
  case '\x04':
switchD_00d25bcc_caseD_4:
    FUN_00b4f44c(&local_a0,param_2 + 0x19,param_3);
    pppppiVar21 = local_64;
    local_100 = local_70;
    local_114 = local_74;
    unaff_r7 = local_78;
    pppppiVar24 = local_7c;
    pppppiVar20 = local_80;
    local_f4 = local_84;
    pppppiVar27 = local_88;
    local_f8 = local_8c;
    local_fc = local_90;
    pppppiVar35 = local_a0;
    if (local_a0 == (int *****)0x2) {
      *param_1 = 2;
      uVar4 = 4;
      goto LAB_00d26b9c;
    }
    local_10c = local_90;
    local_f0 = local_6c;
    local_ec = local_70;
    local_108 = local_7c;
    local_118 = local_80;
    local_11c = local_84;
    cVar2 = (char)param_2[0x3d];
    bVar37 = cVar2 == '\x03';
    if (bVar37) {
      cVar2 = (char)param_2[0x2e];
    }
    if (bVar37 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2f);
    }
    if (((uint)pppppiVar35 & 1) != 0) {
      piVar13 = (int *)param_2[0x54];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar13;
        bVar37 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar37);
      *piVar13 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x54],param_2[0x55]);
      }
      local_104 = local_6c;
      local_ec = local_68;
      local_10c = pppppiVar27;
      local_e8 = local_98;
      local_f0 = pppppiVar21;
      pppppiVar35 = local_9c;
      local_118 = unaff_r7;
      goto LAB_00d268ec;
    }
    local_f4 = local_f8;
    if (pppppiVar27 == (int *****)0x80000007) {
      pppppiVar27 = (int *****)&DAT_80000000;
    }
    pppppiVar35 = (int *****)param_2[0x55];
    local_e8 = (int *****)param_2[0x54];
    local_fc = local_98;
    local_f8 = local_94;
    break;
  case '\x05':
switchD_00d25bcc_caseD_5:
    FUN_00b4f44c(&local_a0,param_2 + 0x18,param_3);
    pppppiVar3 = local_70;
    local_114 = local_74;
    unaff_r7 = local_78;
    pppppiVar24 = local_7c;
    pppppiVar20 = local_80;
    local_11c = local_84;
    pppppiVar27 = local_88;
    pppppiVar36 = local_8c;
    pppppiVar21 = local_90;
    pppppiVar35 = local_a0;
    if (local_a0 == (int *****)0x2) {
      *param_1 = 2;
      uVar4 = 5;
      goto LAB_00d26b9c;
    }
    local_e8 = local_98;
    local_fc = local_90;
    local_f0 = local_64;
    local_ec = local_68;
    local_104 = local_6c;
    local_100 = local_70;
    local_108 = local_7c;
    local_f4 = local_84;
    local_10c = local_88;
    local_f8 = local_8c;
    cVar2 = (char)param_2[0x3c];
    bVar37 = cVar2 == '\x03';
    if (bVar37) {
      cVar2 = (char)param_2[0x2d];
    }
    if (bVar37 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)pppppiVar35 & 1) != 0) {
      piVar13 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar13;
        bVar37 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar37);
      *piVar13 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      pppppiVar35 = local_9c;
      local_118 = unaff_r7;
LAB_00d268ec:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      pppppiVar24 = local_114;
      pppppiVar27 = pppppiVar20;
      unaff_r7 = pppppiVar35;
      pppppiVar35 = local_94;
      goto LAB_00d268f8;
    }
    local_118 = pppppiVar20;
    local_ec = pppppiVar3;
    local_f0 = local_6c;
    local_10c = pppppiVar21;
    local_f4 = pppppiVar36;
    if (pppppiVar27 == (int *****)0x80000007) {
      pppppiVar27 = (int *****)&DAT_80000000;
    }
    local_e8 = (int *****)param_2[0x3f];
    pppppiVar35 = (int *****)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    local_fc = local_98;
    local_f8 = local_94;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_108 = local_11c;
  local_104 = local_114;
  local_100 = unaff_r7;
LAB_00d26b30:
  uVar14 = 0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00d26b38:
  param_1[9] = local_108;
  *param_1 = uVar14;
  param_1[1] = unaff_r7;
  param_1[0xc] = local_100;
  param_1[2] = local_e8;
  param_1[0xd] = local_104;
  param_1[4] = local_fc;
  param_1[0xe] = local_ec;
  param_1[5] = local_f8;
  param_1[7] = local_f4;
  uVar4 = 1;
  param_1[8] = pppppiVar27;
  param_1[10] = local_118;
  param_1[0xb] = pppppiVar24;
  param_1[0xf] = local_f0;
  param_1[3] = pppppiVar35;
  param_1[6] = local_10c;
LAB_00d26b9c:
  *(undefined1 *)(param_2 + 0x17) = uVar4;
  return;
}

