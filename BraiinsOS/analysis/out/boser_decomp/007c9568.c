// FUN_007c9568 @ 007c9568 size=7360 calls_out=20 calls_in=0
// strings: PerformanceScaling | PerformanceScaling | enabled | dpsMode | PerformanceScaling | PerformanceScaling

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007c9568(int *****param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int *****pppppiVar4;
  int *****pppppiVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *****pppppiVar16;
  int *piVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int ****ppppiVar23;
  int iVar24;
  int iVar25;
  int *****pppppiVar26;
  int iVar27;
  int *****pppppiVar28;
  int iVar29;
  int iVar30;
  int *****pppppiVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int *****unaff_r8;
  int *****unaff_r10;
  int *****pppppiVar35;
  int *****pppppiVar36;
  int *****pppppiVar37;
  int iVar38;
  bool bVar39;
  int local_120;
  int local_11c;
  int local_108;
  int *****local_f8;
  int *****local_f0;
  int *****local_e8;
  int *****local_e4;
  int *****local_e0;
  int *****local_dc;
  int *****local_d8;
  int *****local_d4;
  int *****local_d0;
  int *****local_cc;
  int *****local_c0;
  int *****local_bc;
  int *****local_b8;
  int *****local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int *****local_a0;
  undefined1 *local_9c;
  int *local_98;
  undefined1 *local_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  undefined1 local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int *****local_68;
  int *****local_64;
  int *****local_60;
  int *****local_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int *****local_30;
  int *****local_2c;
  
  pppppiVar36 = param_1 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x17]) {
  case '\0':
    iVar22 = param_2[9];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    piVar15 = (int *)0x0;
    if (*param_2 != 0) {
      piVar15 = param_2 + 1;
    }
    *(char *)(param_2 + 0x13) = (char)param_2[8];
    param_2[0xf] = iVar22;
    iVar19 = *(int *)(iVar22 + 0x4c);
    param_2[0xe] = (int)piVar15;
    iVar7 = 0x3c;
    iVar20 = 0x3c;
    if (iVar19 == 0) {
      iVar20 = 0x2c;
    }
    iVar20 = iVar22 + 8 + iVar20;
    iVar19 = *(int *)(iVar20 + 8);
    param_2[0xd] = *(int *)(iVar20 + 0xc);
    unaff_r10 = (int *****)(param_2 + 0xb);
    *unaff_r10 = (int ****)0x1;
    piVar15 = param_2 + 0xc;
    *piVar15 = iVar19 + 8;
    if (*(int *)(iVar22 + 0x4c) == 0) {
      iVar7 = 0x2c;
    }
    iVar7 = iVar22 + 8 + iVar7;
    unaff_r8 = *(int ******)(iVar7 + 8);
    do {
      ppppiVar23 = *unaff_r8;
      bVar39 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar39);
    *unaff_r8 = (int ****)((int)ppppiVar23 + 1);
    if ((int)ppppiVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7cb440);
      (*pcVar1)();
    }
    pppppiVar37 = *(int ******)(iVar7 + 0xc);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    iVar22 = *(int *)param_2[6];
    local_b8 = unaff_r8;
    local_b4 = pppppiVar37;
    if ((*(int *)(iVar22 + 0x10) != 0) || (*(int *)(param_2[9] + 0x1c) != 0)) {
      param_2[0x14] = -0x80000000;
      param_2[0x15] = (int)"PerformanceScaling";
      param_2[0x16] = 0x12;
      if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&LAB_01c14638);
      }
      iVar7 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                           *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"PerformanceScaling",0x12);
      if (iVar7 != 0) {
        uVar21 = 2;
        if ((int)*(uint *)(iVar7 + 0x10) < 0) {
          uVar21 = *(uint *)(iVar7 + 0x10) ^ 0x80000000;
        }
        if (uVar21 != 2) {
          if (uVar21 != 1) goto LAB_007c97ec;
          iVar7 = iVar7 + 0x18;
        }
        iVar7 = FUN_006e05dc(iVar7,*(int *)(param_2[9] + 0x3c) + 8,
                             *(undefined4 *)(param_2[9] + 0x40));
        if (iVar7 != 0) {
          iVar19 = param_2[9];
          if (*(int *)(iVar19 + 0x4c) == 0) {
            local_11c = 0;
          }
          else {
            local_120 = *(int *)(iVar19 + 0x50);
            local_11c = *(int *)(iVar19 + 0x4c) + 8;
          }
          iVar32 = *(int *)(iVar7 + 0x8c);
          iVar22 = iVar22 + 8;
          iVar20 = *(int *)(iVar7 + 0x90);
          iVar24 = *(int *)(iVar19 + 0x3c) + 8;
          iVar25 = *(int *)(iVar19 + 0x40);
          *(undefined1 *)((int)param_2 + 0x5e) = 1;
          iVar29 = param_2[10];
          iVar7 = param_2[0x13];
          iVar8 = *(int *)(iVar19 + 0x1c);
          *(undefined1 *)((int)param_2 + 0x5e) = 0;
          if (iVar8 == 0) {
            param_2[0x18] = iVar29;
            *(char *)(param_2 + 0x57) = (char)iVar7;
            param_2[0x55] = local_11c;
            param_2[0x4c] = iVar22;
            *(undefined1 *)(param_2 + 0x1b) = 0;
            param_2[0x19] = (int)unaff_r10;
            param_2[0x59] = (int)unaff_r8;
            param_2[0x5a] = (int)pppppiVar37;
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)(param_2 + 0x58) = 0;
            param_2[0x54] = iVar19 + 8;
            param_2[0x56] = local_120;
            param_2[0x4d] = (int)piVar15;
            param_2[0x52] = iVar24;
            param_2[0x53] = iVar25;
            param_2[0x4e] = (int)"PerformanceScaling";
            param_2[0x4f] = 0x12;
            param_2[0x50] = iVar32;
            param_2[0x34] = (int)(param_2 + 0x33);
            param_2[0x51] = iVar20;
            param_2[0x33] = (int)(param_2 + 0x18);
            param_2[0x35] = (int)&DAT_01c0bdb0;
            goto switchD_007c959c_caseD_4;
          }
          piVar9 = (int *)thunk_FUN_01be5118(0x6c);
          if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x6c);
          }
          *(undefined1 *)(piVar9 + 3) = 0;
          *piVar9 = iVar29;
          piVar9[1] = (int)unaff_r10;
          param_2[0x3d] = (int)piVar9;
          param_2[0x3e] = (int)&DAT_01c10914;
          if (*(int *)(iVar19 + 0x1c) != 0) {
            iVar29 = *(int *)(iVar19 + 0x18);
            iVar8 = iVar29 + *(int *)(iVar19 + 0x1c) * 0x24;
            piVar9 = (int *)((uint)&local_68 | 4);
            do {
              iVar27 = *(int *)param_2[5];
              if (*(int *)(iVar27 + 0x14) != 0) {
                iVar30 = *(int *)(iVar29 + 0x20);
                iVar33 = *(int *)(iVar29 + 0x1c) + 8;
                uVar10 = FUN_01a9c24c(*(undefined4 *)(iVar27 + 0x18),*(undefined4 *)(iVar27 + 0x1c),
                                      *(undefined4 *)(iVar27 + 0x20),*(undefined4 *)(iVar27 + 0x24),
                                      iVar33,iVar30);
                uVar21 = uVar10 >> 0x19;
                iVar38 = *(int *)(iVar27 + 8);
                uVar34 = *(uint *)(iVar27 + 0xc);
                local_108 = 0;
                while( true ) {
                  uVar10 = uVar34 & uVar10;
                  uVar11 = *(uint *)(iVar38 + uVar10);
                  uVar12 = uVar11 ^ uVar21 * 0x1010101;
                  for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
                      uVar12 = uVar12 - 1 & uVar12) {
                    uVar13 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18)
                                      >> 3) & uVar34;
                    iVar27 = iVar38 + -0x14 + uVar13 * -0x14;
                    if ((iVar30 == *(int *)(iVar27 + 8)) &&
                       (iVar27 = thunk_FUN_01bed842(iVar33,*(undefined4 *)(iVar27 + 4),iVar30),
                       iVar27 == 0)) {
                      local_a0 = (int *****)*unaff_r10;
                      local_9c = (undefined1 *)param_2[0xc];
                      local_98 = (int *)param_2[0xd];
                      local_94 = (undefined1 *)param_2[0xe];
                      local_80 = 0;
                      local_8c = param_2[0x10];
                      iStack_88 = param_2[0x11];
                      iStack_84 = param_2[0x12];
                      iVar38 = iVar38 + uVar13 * -0x14;
                      local_90 = iVar29;
                      (**(code **)(*(int *)(iVar38 + -4) + 0x14))
                                (&local_68,*(undefined4 *)(iVar38 + -8),&local_a0,iVar29 + 8);
                      pppppiVar28 = local_44;
                      pppppiVar16 = local_48;
                      pppppiVar31 = local_4c;
                      pppppiVar35 = local_68;
                      local_bc = local_64;
                      local_c0 = local_60;
                      if (local_68 != (int *****)0x2) {
                        local_dc = local_40;
                        local_d0 = local_3c;
                        local_d4 = local_38;
                        local_e4 = local_30;
                        local_e8 = local_5c;
                        local_d8 = local_58;
                        local_cc = local_54;
                        local_e0 = local_50;
                        FUN_0175d85c(param_2 + 0x3d);
                        local_30 = local_34;
                        goto LAB_007ca0f4;
                      }
                      if (*unaff_r10 == (int ****)0x1) {
                        local_78 = *piVar15;
                        iStack_74 = param_2[0xd];
                        iStack_70 = param_2[0xe];
                      }
                      local_68 = (int *****)(uint)(*unaff_r10 == (int ****)0x1);
                      local_58 = (int *****)param_2[0xf];
                      local_54 = (int *****)param_2[0x10];
                      local_50 = (int *****)param_2[0x11];
                      local_4c = (int *****)param_2[0x12];
                      iVar27 = param_2[0x13];
                      *piVar9 = local_78;
                      piVar9[1] = iStack_74;
                      piVar9[2] = iStack_70;
                      local_40 = local_60;
                      local_44 = local_64;
                      local_3c = (int *****)param_2[0x3d];
                      local_38 = (int *****)param_2[0x3e];
                      local_48 = (int *****)CONCAT31(local_48._1_3_,(char)iVar27);
                      local_2c = (int *****)((uint)local_2c & 0xffffff00);
                      puVar14 = (undefined4 *)thunk_FUN_01be5118(0x40);
                      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0066439c(4,0x40);
                      }
                      *puVar14 = local_68;
                      puVar14[1] = local_64;
                      puVar14[2] = local_60;
                      puVar14[3] = local_5c;
                      puVar14[4] = local_58;
                      puVar14[5] = local_54;
                      puVar14[6] = local_50;
                      puVar14[7] = local_4c;
                      puVar14[8] = local_48;
                      puVar14[9] = local_44;
                      puVar14[10] = local_40;
                      puVar14[0xb] = local_3c;
                      puVar14[0xc] = local_38;
                      puVar14[0xd] = local_34;
                      puVar14[0xe] = local_30;
                      puVar14[0xf] = local_2c;
                      param_2[0x3d] = (int)puVar14;
                      param_2[0x3e] = (int)&DAT_01c0bda0;
                      goto LAB_007c9d4c;
                    }
                  }
                  if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
                  local_108 = local_108 + 4;
                  uVar10 = uVar10 + local_108;
                }
              }
LAB_007c9d4c:
              iVar29 = iVar29 + 0x24;
            } while (iVar29 != iVar8);
          }
          param_2[0x3f] = (int)unaff_r8;
          param_2[0x40] = (int)pppppiVar37;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3c) = 0;
          param_2[0x39] = local_11c;
          param_2[0x30] = iVar22;
          param_2[0x3a] = local_120;
          *(char *)(param_2 + 0x3b) = (char)iVar7;
          param_2[0x38] = iVar19 + 8;
          param_2[0x31] = (int)piVar15;
          param_2[0x36] = iVar24;
          param_2[0x32] = (int)"PerformanceScaling";
          param_2[0x33] = 0x12;
          param_2[0x34] = iVar32;
          param_2[0x35] = iVar20;
          param_2[0x37] = iVar25;
          param_2[0x18] = (int)(param_2 + 0x3d);
          param_2[0x19] = (int)&DAT_01c0b0b0;
          goto switchD_007c959c_caseD_5;
        }
      }
LAB_007c97ec:
      local_9c = &LAB_00701524;
      local_a0 = (int *****)&local_b8;
      local_94 = &LAB_012b97d8;
      local_98 = param_2 + 0x14;
      FUN_00664898(&local_78,&DAT_005952c0,&local_a0);
      local_b0 = local_78;
      iStack_ac = iStack_74;
      iStack_a8 = iStack_70;
      local_9c = *(undefined1 **)param_2[0xf];
      local_98 = (int *)((int *)param_2[0xf])[1];
      local_a0 = (int *****)0x1;
      FUN_006bd784(&local_68,&local_b0,&local_a0);
      local_dc = local_40;
      local_d0 = local_3c;
      local_d4 = local_38;
      local_e4 = local_30;
      local_e0 = local_50;
      local_cc = local_54;
      local_d8 = local_58;
      local_bc = local_64;
      local_c0 = local_60;
      local_e8 = local_5c;
      local_f0 = local_44;
      local_f8 = local_4c;
      local_30 = local_34;
      pppppiVar16 = local_48;
      pppppiVar35 = local_68;
LAB_007ca104:
      pppppiVar37 = local_30;
      if (param_2[0x14] != -0x80000000) {
        FUN_019bb7e0(param_2[0x14],param_2[0x15]);
      }
      goto LAB_007cb060;
    }
    *(undefined1 *)(param_2 + 0x1b) = 0;
    iVar22 = param_2[10];
    param_2[0x33] = (int)unaff_r8;
    param_2[0x18] = iVar22;
    param_2[0x34] = (int)pppppiVar37;
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    param_2[0x19] = (int)unaff_r10;
LAB_007c98f8:
    param_2[0x1a] = (int)unaff_r10;
    ppppiVar23 = unaff_r10[4];
    local_f8 = (int *****)0x80000007;
    switch(ppppiVar23[0x10]) {
    case (int ***)0x7:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"enabled",7);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007cad60;
      }
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"dpsMode",7);
      unaff_r8 = (int *****)&local_50;
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007ca3ec;
      }
      break;
    case (int ***)0x9:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"powerStep",9);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007ca7dc;
      }
      break;
    case (int ***)0xc:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"hashrateStep",0xc);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007caac4;
      }
      break;
    case (int ***)0xe:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"minPowerTarget",0xe);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007cabb4;
      }
      break;
    case (int ***)0xf:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"shutdownEnabled",0xf);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007cae34;
      }
      break;
    case (int ***)0x10:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,&DAT_0056ad28,0x10);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007ca6dc;
      }
      break;
    case (int ***)0x11:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"minHashrateTarget",0x11);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007ca8d4;
      }
      break;
    case (int ***)0x14:
      iVar7 = thunk_FUN_01bed842(ppppiVar23[0xf] + 2,"onStartTa",0x14);
      if (iVar7 == 0) {
        param_2[0x1c] = iVar22;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int)unaff_r10;
        goto LAB_007ca9d0;
      }
    }
    goto switchD_007c9928_caseD_8;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case '\x03':
    pppppiVar37 = pppppiVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      iVar22 = param_2[0x18];
      unaff_r10 = (int *****)param_2[0x19];
      goto LAB_007c98f8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c108c4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c108c4);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007cad60:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x48;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\x04':
      FUN_007cb7c0(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 4;
LAB_007caee8:
        *(undefined1 *)(param_2 + 0x1b) = uVar6;
        *param_1 = (int ****)0x2;
        uVar6 = 3;
        goto LAB_007cb114;
      }
LAB_007caf04:
      local_f0 = local_40;
      pppppiVar16 = local_44;
      local_f8 = local_48;
      local_e0 = local_4c;
      local_e8 = local_58;
      local_e4 = local_2c;
      local_cc = local_50;
      local_d8 = local_54;
      local_dc = local_3c;
      local_d0 = local_38;
      local_d4 = local_34;
      local_bc = local_60;
      local_c0 = local_5c;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      if (((uint)local_68 & 1) == 0) {
        local_e8 = local_60;
        local_e0 = local_54;
        local_d8 = local_5c;
        local_cc = local_58;
        local_f8 = local_50;
        local_f0 = local_48;
        local_e4 = local_d4;
        pppppiVar37 = local_44;
        local_d4 = local_dc;
        local_d0 = local_40;
        goto LAB_007cb004;
      }
      piVar15 = (int *)param_2[0x33];
      DataMemoryBarrier(0xb);
      do {
        iVar22 = *piVar15;
        bVar39 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar39);
      *piVar15 = iVar22 + -1;
      if (iVar22 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x33],param_2[0x34]);
      }
      pppppiVar37 = local_30;
      pppppiVar35 = local_64;
LAB_007cb060:
      if (*(char *)((int)param_2 + 0x5d) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          ppppiVar23 = *local_b8;
          bVar39 = (bool)hasExclusiveAccess(local_b8);
        } while (!bVar39);
        *local_b8 = (int ****)((int)ppppiVar23 + -1);
        if (ppppiVar23 == (int ****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(local_b8,local_b4);
        }
      }
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      ppppiVar23 = (int ****)0x1;
      local_4c = pppppiVar16;
      local_64 = pppppiVar35;
      goto LAB_007cb0ac;
    case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007ca7dc:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x30;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\x06':
      FUN_007cb920(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 6;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007cabb4:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x38;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\b':
      FUN_007cb920(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 8;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007caac4:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\n':
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 10;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007ca8d4:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x10;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\f':
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 0xc;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007cae34:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x49;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\x0e':
      FUN_007cb7c0(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 0xe;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007ca6dc:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x20;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\x10':
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 0x10;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007ca3ec:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar17 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      piVar15 = param_2 + 0x1d;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar9 = param_2 + 0x1c;
      *piVar9 = iVar22 + 0x4a;
      bVar2 = *(byte *)(piVar17 + 8);
      local_cc = (int *****)(uint)bVar2;
      iVar8 = piVar17[4];
      iVar22 = piVar17[5];
      unaff_r10 = (int *****)piVar17[6];
      unaff_r8 = (int *****)piVar17[7];
      iVar7 = piVar17[1];
      iVar19 = piVar17[2];
      iVar20 = piVar17[3];
      *piVar15 = *piVar17;
      param_2[0x1e] = iVar7;
      param_2[0x1f] = iVar19;
      param_2[0x20] = iVar20;
      param_2[0x21] = iVar8 + 0x20;
      param_2[0x22] = iVar22;
      param_2[0x23] = (int)unaff_r10;
      param_2[0x24] = (int)unaff_r8;
      *(byte *)(param_2 + 0x25) = bVar2;
      iVar22 = piVar17[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int)piVar9;
      param_2[0x27] = (int)piVar15;
      param_2[0x28] = iVar22;
      pppppiVar37 = (int *****)&local_50;
LAB_007ca60c:
      pcVar18 = (char *)*piVar9;
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_2[0x29] = (int)pcVar18;
      param_2[0x2a] = (int)piVar15;
      param_2[0x2b] = iVar22;
LAB_007ca628:
      param_2[0x2c] = (int)piVar15;
      if (*pcVar18 != '\x02') {
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2d] = (int)pcVar18;
        param_2[0x2e] = (int)piVar15;
        param_2[0x2f] = param_2[0x2b];
        goto LAB_007caca8;
      }
      local_f8 = (int *****)&DAT_80000000;
      local_40 = unaff_r8;
      break;
    case '\x12':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x32]) {
      case '\0':
        piVar9 = (int *)param_2[0x26];
        piVar15 = (int *)param_2[0x27];
        iVar22 = param_2[0x28];
        goto LAB_007ca60c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x31]) {
      case '\0':
        pcVar18 = (char *)param_2[0x29];
        piVar15 = (int *)param_2[0x2a];
        goto LAB_007ca628;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21c3c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c3c);
      case '\x03':
        if ((char)param_2[0x30] != '\0') {
          if ((char)param_2[0x30] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22520);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22520);
        }
        pcVar18 = (char *)param_2[0x2d];
      }
LAB_007caca8:
      FUN_00b564a0(&local_68,*pcVar18);
      local_f0 = local_50;
      local_dc = local_4c;
      local_d0 = local_48;
      local_d4 = local_44;
      local_e4 = local_3c;
      local_e8 = local_68;
      local_d8 = local_64;
      local_cc = local_60;
      local_e0 = local_5c;
      local_f8 = local_58;
      *(undefined1 *)(param_2 + 0x30) = 1;
      unaff_r10 = local_54;
      break;
    case '\x13':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar22 = param_2[0x1c];
        unaff_r10 = (int *****)param_2[0x1d];
LAB_007ca9d0:
        param_2[0x1e] = iVar22;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int)unaff_r10;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c108c4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c108c4);
      case '\x03':
        if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c108c4);
        }
        iVar22 = param_2[0x1e];
      }
      piVar15 = (int *)param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = iVar22 + 0x40;
      iVar7 = piVar15[7];
      iVar19 = piVar15[4];
      iVar29 = piVar15[5];
      iVar24 = piVar15[6];
      iVar22 = piVar15[8];
      iVar20 = piVar15[1];
      iVar8 = piVar15[2];
      iVar25 = piVar15[3];
      param_2[0x1d] = *piVar15;
      param_2[0x1e] = iVar20;
      param_2[0x1f] = iVar8;
      param_2[0x20] = iVar25;
      param_2[0x21] = iVar19 + 0x20;
      param_2[0x22] = iVar29;
      param_2[0x23] = iVar24;
      param_2[0x24] = iVar7;
      *(char *)(param_2 + 0x25) = (char)iVar22;
      iVar22 = piVar15[4];
      param_2[0x26] = (int)(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x27] = (int)(param_2 + 0x1d);
      param_2[0x28] = iVar22;
    case '\x14':
      FUN_007cba94(&local_68,param_2 + 0x26);
      if (local_68 == (int *****)0x2) {
        uVar6 = 0x14;
        goto LAB_007caee8;
      }
      goto LAB_007caf04;
    }
    *(undefined1 *)(param_2 + 0x32) = 1;
    *(undefined1 *)(param_2 + 0x31) = 1;
    unaff_r8 = local_40;
switchD_007c9928_caseD_8:
    local_c0 = (int *****)(param_2 + 0x1b);
    *(undefined1 *)local_c0 = 1;
    local_38 = unaff_r8;
    local_4c = unaff_r10;
    local_64 = pppppiVar37;
    pppppiVar37 = local_dc;
LAB_007cb004:
    local_dc = pppppiVar37;
    if (local_f8 == (int *****)0x80000007) {
      local_f8 = (int *****)&DAT_80000000;
    }
    local_bc = (int *****)param_2[0x33];
    local_c0 = (int *****)param_2[0x34];
    pppppiVar37 = local_38;
    goto LAB_007cb028;
  case '\x04':
switchD_007c959c_caseD_4:
    FUN_00b4f44c(&local_68,param_2 + 0x34,param_3);
    pppppiVar26 = local_3c;
    pppppiVar28 = local_40;
    pppppiVar16 = local_44;
    local_f0 = local_48;
    pppppiVar35 = local_4c;
    local_f8 = local_50;
    local_d8 = local_54;
    local_e8 = local_58;
    pppppiVar37 = local_68;
    if (local_68 == (int *****)0x2) {
      *param_1 = (int ****)0x2;
      uVar6 = 4;
      goto LAB_007cb114;
    }
    local_dc = local_3c;
    local_d0 = local_38;
    local_d4 = local_34;
    local_e4 = local_2c;
    local_cc = local_58;
    local_e0 = local_54;
    cVar3 = (char)param_2[0x58];
    bVar39 = cVar3 == '\x03';
    if (bVar39) {
      cVar3 = (char)param_2[0x49];
    }
    if (bVar39 && cVar3 == '\x03') {
      FUN_0175d85c(param_2 + 0x4a);
    }
    if (((uint)pppppiVar37 & 1) != 0) {
      piVar15 = (int *)param_2[0x59];
      DataMemoryBarrier(0xb);
      do {
        iVar22 = *piVar15;
        bVar39 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar39);
      *piVar15 = iVar22 + -1;
      if (iVar22 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x59],param_2[0x5a]);
      }
      local_c0 = local_5c;
      local_e0 = pppppiVar35;
      local_bc = local_60;
      local_cc = local_f8;
      pppppiVar31 = local_f0;
      pppppiVar35 = local_64;
      goto LAB_007ca0f4;
    }
    if (local_f8 == (int *****)0x80000007) {
      local_f8 = (int *****)&DAT_80000000;
    }
    local_bc = (int *****)param_2[0x59];
    local_c0 = (int *****)param_2[0x5a];
    local_e8 = local_60;
    local_d8 = local_5c;
    local_dc = pppppiVar16;
    break;
  case '\x05':
switchD_007c959c_caseD_5:
    FUN_00b4f44c(&local_68,param_2 + 0x18,param_3);
    pppppiVar26 = local_3c;
    pppppiVar28 = local_40;
    pppppiVar16 = local_44;
    pppppiVar31 = local_48;
    pppppiVar35 = local_4c;
    local_f8 = local_50;
    pppppiVar5 = local_54;
    pppppiVar4 = local_58;
    pppppiVar37 = local_68;
    if (local_68 == (int *****)0x2) {
      *param_1 = (int ****)0x2;
      uVar6 = 5;
      goto LAB_007cb114;
    }
    local_dc = local_3c;
    local_d0 = local_38;
    local_d4 = local_34;
    local_e4 = local_2c;
    local_bc = local_60;
    local_c0 = local_5c;
    local_e8 = local_58;
    local_e0 = local_4c;
    local_cc = local_50;
    local_d8 = local_54;
    cVar3 = (char)param_2[0x3c];
    bVar39 = cVar3 == '\x03';
    if (bVar39) {
      cVar3 = (char)param_2[0x2d];
    }
    if (bVar39 && cVar3 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)pppppiVar37 & 1) != 0) {
      piVar15 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar22 = *piVar15;
        bVar39 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar39);
      *piVar15 = iVar22 + -1;
      if (iVar22 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      pppppiVar35 = local_64;
LAB_007ca0f4:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      local_f0 = pppppiVar28;
      local_f8 = pppppiVar31;
      goto LAB_007ca104;
    }
    if (local_f8 == (int *****)0x80000007) {
      local_f8 = (int *****)&DAT_80000000;
      pppppiVar26 = pppppiVar37;
      local_f0 = local_64;
      local_e8 = param_1;
      pppppiVar35 = pppppiVar16;
      pppppiVar28 = pppppiVar36;
    }
    else {
      local_dc = pppppiVar16;
      local_cc = pppppiVar4;
      local_e0 = pppppiVar5;
      local_f0 = pppppiVar31;
      local_e8 = local_60;
      pppppiVar31 = local_5c;
    }
    local_bc = (int *****)param_2[0x3f];
    local_c0 = (int *****)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    local_d8 = pppppiVar31;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_e4 = local_d4;
  pppppiVar37 = local_d0;
  local_4c = pppppiVar35;
  local_64 = pppppiVar28;
  local_d4 = pppppiVar26;
  local_d0 = pppppiVar28;
LAB_007cb028:
  ppppiVar23 = (int ****)0x0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_007cb0ac:
  *param_1 = ppppiVar23;
  param_1[1] = (int ****)local_64;
  param_1[2] = (int ****)local_bc;
  param_1[3] = (int ****)local_c0;
  param_1[4] = (int ****)local_e8;
  param_1[5] = (int ****)local_d8;
  param_1[6] = (int ****)local_cc;
  param_1[7] = (int ****)local_e0;
  param_1[0xb] = (int ****)local_dc;
  param_1[0xc] = (int ****)local_d0;
  param_1[0xd] = (int ****)local_d4;
  param_1[8] = (int ****)local_f8;
  param_1[0xf] = (int ****)local_e4;
  uVar6 = 1;
  param_1[9] = (int ****)local_4c;
  *pppppiVar36 = (int ****)local_f0;
  param_1[0xe] = (int ****)pppppiVar37;
LAB_007cb114:
  *(undefined1 *)(param_2 + 0x17) = uVar6;
  return;
}

