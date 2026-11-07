// FUN_0080e920 @ 0080e920 size=4740 calls_out=17 calls_in=0
// strings: PauseConfig | PauseConfig | cooldownFanSpeed | PauseConfig | PauseConfig | PauseConfig

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0080e920(int *******param_1,int *******param_2,int *******param_3,int *******param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  undefined1 uVar9;
  int iVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  int *piVar13;
  int ****ppppiVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int ******ppppppiVar18;
  int iVar19;
  uint uVar20;
  int *****pppppiVar21;
  int *****pppppiVar22;
  int *******extraout_r2;
  int *******extraout_r3;
  int ******ppppppiVar23;
  int iVar24;
  int ******ppppppiVar25;
  int ****ppppiVar26;
  int ****ppppiVar27;
  int *******pppppppiVar28;
  int ******ppppppiVar29;
  int *****pppppiVar30;
  int *******pppppppiVar31;
  uint uVar32;
  int *******pppppppiVar33;
  int ******ppppppiVar34;
  int ******ppppppiVar35;
  int *****pppppiVar36;
  int ****ppppiVar37;
  int *******pppppppiVar38;
  int *******pppppppiVar39;
  int ******ppppppiVar40;
  int ******ppppppiVar41;
  bool bVar42;
  int ******local_118;
  int ******local_114;
  int *******local_f4;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******local_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_c4;
  int *******local_c0;
  int *******local_bc;
  int ******local_b8;
  int ******local_b4;
  int ******local_b0;
  int ******ppppppiStack_ac;
  int ******ppppppiStack_a8;
  int ******local_a0;
  int ******local_9c;
  int *******local_98;
  int ******local_94;
  int *****local_90;
  int ******local_8c;
  int ******ppppppiStack_88;
  int ******ppppppiStack_84;
  undefined1 local_80;
  int ******local_78;
  int ******ppppppiStack_74;
  int ******ppppppiStack_70;
  int *******local_68;
  int *******local_64;
  int *******local_60;
  int *******local_5c;
  int *******local_58;
  int *******local_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  
  pppppppiVar38 = (int *******)&local_48;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x17)) {
  case 0:
    ppppppiVar18 = param_2[9];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    pppppppiVar28 = (int *******)0x0;
    if (*param_2 != (int ******)0x0) {
      pppppppiVar28 = param_2 + 1;
    }
    *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(param_2 + 8);
    param_2[0xf] = ppppppiVar18;
    pppppiVar21 = ppppppiVar18[0x13];
    param_2[0xe] = (int ******)pppppppiVar28;
    iVar10 = 0x3c;
    iVar19 = 0x3c;
    if (pppppiVar21 == (int *****)0x0) {
      iVar19 = 0x2c;
    }
    iVar24 = *(int *)((int)ppppppiVar18 + iVar19 + 0x10);
    param_2[0xd] = *(int *******)((int)ppppppiVar18 + iVar19 + 0x14);
    local_c4 = param_2 + 0xb;
    *local_c4 = (int ******)0x1;
    pppppppiVar28 = param_2 + 0xc;
    *pppppppiVar28 = (int ******)(iVar24 + 8);
    if (ppppppiVar18[0x13] == (int *****)0x0) {
      iVar10 = 0x2c;
    }
    ppppppiVar34 = *(int *******)((int)ppppppiVar18 + iVar10 + 0x10);
    do {
      pppppiVar21 = *ppppppiVar34;
      bVar42 = (bool)hasExclusiveAccess(ppppppiVar34);
    } while (!bVar42);
    *ppppppiVar34 = (int *****)((int)pppppiVar21 + 1);
    if ((int)pppppiVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x80fc68);
      (*pcVar1)();
    }
    ppppppiVar29 = *(int *******)((int)ppppppiVar18 + iVar10 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    pppppiVar21 = *param_2[6];
    local_b8 = ppppppiVar34;
    local_b4 = ppppppiVar29;
    if ((pppppiVar21[4] != (int ****)0x0) || (param_2[9][7] != (int *****)0x0)) {
      param_2[0x14] = (int ******)0x80000000;
      param_2[0x15] = (int ******)"PauseConfig";
      param_2[0x16] = (int ******)0xb;
      if (param_2[0xb] == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&LAB_01c14638);
      }
      iVar10 = FUN_006c176c((*param_2[0x10])[0x1e],(*param_2[0x10])[0x1f],"PauseConfig",0xb);
      if (iVar10 != 0) {
        uVar20 = 2;
        if ((int)*(uint *)(iVar10 + 0x10) < 0) {
          uVar20 = *(uint *)(iVar10 + 0x10) ^ 0x80000000;
        }
        if (uVar20 != 2) {
          if (uVar20 != 1) goto LAB_0080eb7c;
          iVar10 = iVar10 + 0x18;
        }
        iVar10 = FUN_006e05dc(iVar10,param_2[9][0xf] + 2,param_2[9][0x10]);
        if (iVar10 != 0) {
          ppppppiVar18 = param_2[9];
          pppppiVar22 = ppppppiVar18[0xf];
          if (ppppppiVar18[0x13] == (int *****)0x0) {
            local_114 = (int ******)0x0;
          }
          else {
            local_118 = (int ******)ppppppiVar18[0x14];
            local_114 = (int ******)(ppppppiVar18[0x13] + 2);
          }
          ppppppiVar40 = (int ******)(pppppiVar21 + 2);
          ppppppiVar35 = *(int *******)(iVar10 + 0x8c);
          ppppppiVar41 = *(int *******)(iVar10 + 0x90);
          ppppppiVar23 = (int ******)ppppppiVar18[0x10];
          *(undefined1 *)((int)param_2 + 0x5e) = 1;
          ppppppiVar25 = param_2[10];
          uVar9 = *(undefined1 *)(param_2 + 0x13);
          pppppiVar21 = ppppppiVar18[7];
          *(undefined1 *)((int)param_2 + 0x5e) = 0;
          if (pppppiVar21 == (int *****)0x0) {
            param_2[0x18] = ppppppiVar25;
            param_2[0x19] = (int ******)local_c4;
            param_2[0x5a] = ppppppiVar29;
            param_2[0x55] = local_114;
            param_2[0x56] = local_118;
            param_2[0x59] = ppppppiVar34;
            *(undefined1 *)(param_2 + 0x57) = uVar9;
            *(undefined1 *)(param_2 + 0x1b) = 0;
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)(param_2 + 0x58) = 0;
            param_2[0x54] = ppppppiVar18 + 2;
            param_2[0x4c] = ppppppiVar40;
            param_2[0x4d] = (int ******)pppppppiVar28;
            param_2[0x52] = (int ******)(pppppiVar22 + 2);
            param_2[0x34] = (int ******)(param_2 + 0x33);
            param_2[0x4e] = (int ******)"PauseConfig";
            param_2[0x4f] = (int ******)0xb;
            param_2[0x50] = ppppppiVar35;
            param_2[0x51] = ppppppiVar41;
            param_2[0x53] = ppppppiVar23;
            param_2[0x33] = (int ******)(param_2 + 0x18);
            param_2[0x35] = (int ******)&DAT_01c0b7b0;
            goto switchD_0080e954_caseD_4;
          }
          ppppppiVar12 = (int ******)thunk_FUN_01be5118(0x6c);
          if (ppppppiVar12 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x6c);
          }
          *(undefined1 *)(ppppppiVar12 + 3) = 0;
          *ppppppiVar12 = (int *****)ppppppiVar25;
          param_2[0x3d] = ppppppiVar12;
          param_2[0x3e] = (int ******)&DAT_01c10904;
          ppppppiVar12[1] = (int *****)local_c4;
          if (ppppppiVar18[7] != (int *****)0x0) {
            pppppiVar36 = ppppppiVar18[6];
            pppppiVar21 = pppppiVar36 + (int)ppppppiVar18[7] * 9;
            piVar13 = (int *)((uint)&local_68 | 4);
            do {
              pppppiVar30 = *param_2[5];
              if (pppppiVar30[5] != (int ****)0x0) {
                ppppiVar14 = pppppiVar36[7];
                ppppiVar27 = pppppiVar36[8];
                uVar15 = FUN_01a9c24c(pppppiVar30[6],pppppiVar30[7],pppppiVar30[8],pppppiVar30[9],
                                      ppppiVar14 + 2,ppppiVar27);
                uVar20 = uVar15 >> 0x19;
                ppppiVar37 = pppppiVar30[2];
                ppppiVar26 = pppppiVar30[3];
                iVar10 = 0;
                while( true ) {
                  uVar15 = (uint)ppppiVar26 & uVar15;
                  uVar32 = *(uint *)((int)ppppiVar37 + uVar15);
                  uVar16 = uVar32 ^ uVar20 * 0x1010101;
                  for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
                      uVar16 = uVar16 - 1 & uVar16) {
                    uVar17 = uVar15 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18)
                                      >> 3) & (uint)ppppiVar26;
                    if ((ppppiVar27 == (int ****)ppppiVar37[uVar17 * -5 + -3]) &&
                       (iVar19 = thunk_FUN_01bed842(ppppiVar14 + 2,ppppiVar37[uVar17 * -5 + -4]),
                       iVar19 == 0)) {
                      local_a0 = *local_c4;
                      local_9c = param_2[0xc];
                      local_98 = (int *******)param_2[0xd];
                      local_94 = param_2[0xe];
                      local_80 = 0;
                      local_8c = param_2[0x10];
                      ppppppiStack_88 = param_2[0x11];
                      ppppppiStack_84 = param_2[0x12];
                      local_90 = pppppiVar36;
                      (*(code *)ppppiVar37[uVar17 * -5 + -1][5])
                                (&local_68,ppppiVar37[uVar17 * -5 + -2],&local_a0,pppppiVar36 + 2);
                      pppppppiVar33 = local_44;
                      pppppppiVar11 = local_48;
                      pppppppiVar38 = local_68;
                      local_bc = local_64;
                      if (local_68 != (int *******)0x2) {
                        local_d4 = local_40;
                        local_f4 = local_3c;
                        local_c4 = local_38;
                        local_dc = local_34;
                        local_e0 = local_30;
                        local_d0 = local_4c;
                        local_ec = local_5c;
                        local_e8 = local_58;
                        local_e4 = local_54;
                        local_d8 = local_50;
                        FUN_0175d85c(param_2 + 0x3d);
                        local_5c = local_60;
                        goto LAB_0080f64c;
                      }
                      if (*local_c4 == (int ******)0x1) {
                        local_78 = *pppppppiVar28;
                        ppppppiStack_74 = param_2[0xd];
                        ppppppiStack_70 = param_2[0xe];
                      }
                      local_68 = (int *******)(uint)(*local_c4 == (int ******)0x1);
                      local_58 = (int *******)param_2[0xf];
                      local_54 = (int *******)param_2[0x10];
                      local_50 = (int *******)param_2[0x11];
                      local_4c = (int *******)param_2[0x12];
                      uVar3 = *(undefined1 *)(param_2 + 0x13);
                      *piVar13 = (int)local_78;
                      piVar13[1] = (int)ppppppiStack_74;
                      piVar13[2] = (int)ppppppiStack_70;
                      local_40 = local_60;
                      local_44 = local_64;
                      local_3c = (int *******)param_2[0x3d];
                      local_38 = (int *******)param_2[0x3e];
                      local_48 = (int *******)CONCAT31(local_48._1_3_,uVar3);
                      local_2c = (int *******)((uint)local_2c & 0xffffff00);
                      ppppppiVar25 = (int ******)thunk_FUN_01be5118(0x40);
                      if (ppppppiVar25 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0066439c(4,0x40);
                      }
                      *ppppppiVar25 = (int *****)local_68;
                      ppppppiVar25[1] = (int *****)local_64;
                      ppppppiVar25[2] = (int *****)local_60;
                      ppppppiVar25[3] = (int *****)local_5c;
                      ppppppiVar25[4] = (int *****)local_58;
                      ppppppiVar25[5] = (int *****)local_54;
                      ppppppiVar25[6] = (int *****)local_50;
                      ppppppiVar25[7] = (int *****)local_4c;
                      ppppppiVar25[8] = (int *****)local_48;
                      ppppppiVar25[9] = (int *****)local_44;
                      ppppppiVar25[10] = (int *****)local_40;
                      ppppppiVar25[0xb] = (int *****)local_3c;
                      ppppppiVar25[0xc] = (int *****)local_38;
                      ppppppiVar25[0xd] = (int *****)local_34;
                      ppppppiVar25[0xe] = (int *****)local_30;
                      ppppppiVar25[0xf] = (int *****)local_2c;
                      param_2[0x3d] = ppppppiVar25;
                      param_2[0x3e] = (int ******)&DAT_01c0b7a0;
                      goto LAB_0080f28c;
                    }
                  }
                  if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) break;
                  iVar10 = iVar10 + 4;
                  uVar15 = uVar15 + iVar10;
                }
              }
LAB_0080f28c:
              pppppiVar36 = pppppiVar36 + 9;
            } while (pppppiVar36 != pppppiVar21);
          }
          param_2[0x3f] = ppppppiVar34;
          param_2[0x40] = ppppppiVar29;
          param_2[0x38] = ppppppiVar18 + 2;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3c) = 0;
          param_2[0x39] = local_114;
          param_2[0x30] = ppppppiVar40;
          param_2[0x3a] = local_118;
          *(undefined1 *)(param_2 + 0x3b) = uVar9;
          param_2[0x31] = (int ******)pppppppiVar28;
          param_2[0x33] = (int ******)0xb;
          param_2[0x34] = ppppppiVar35;
          param_2[0x35] = ppppppiVar41;
          param_2[0x36] = (int ******)(pppppiVar22 + 2);
          param_2[0x32] = (int ******)"PauseConfig";
          param_2[0x37] = ppppppiVar23;
          param_2[0x18] = (int ******)(param_2 + 0x3d);
          param_2[0x19] = (int ******)&DAT_01c0b0b0;
          local_c0 = param_2;
          goto switchD_0080e954_caseD_5;
        }
      }
LAB_0080eb7c:
      local_9c = (int ******)&LAB_00701524;
      local_a0 = (int ******)&local_b8;
      local_94 = (int ******)&LAB_012b97d8;
      local_98 = param_2 + 0x14;
      FUN_00664898(&local_78,&DAT_005952c0,&local_a0);
      local_b0 = local_78;
      ppppppiStack_ac = ppppppiStack_74;
      ppppppiStack_a8 = ppppppiStack_70;
      local_9c = (int ******)*param_2[0xf];
      local_98 = (int *******)param_2[0xf][1];
      local_a0 = (int ******)0x1;
      FUN_006bd784(&local_68,&local_b0,&local_a0);
      local_d4 = local_40;
      local_c4 = local_38;
      local_dc = local_34;
      local_e0 = local_30;
      local_d0 = local_4c;
      local_d8 = local_50;
      local_e4 = local_54;
      local_e8 = local_58;
      local_bc = local_64;
      local_ec = local_5c;
      local_c0 = local_48;
      local_5c = local_60;
      local_f4 = local_3c;
      pppppppiVar38 = local_68;
      pppppppiVar33 = local_44;
LAB_0080f664:
      pppppppiVar28 = local_5c;
      if (param_2[0x14] != (int ******)0x80000000) {
        FUN_019bb7e0(param_2[0x14],param_2[0x15]);
      }
      goto LAB_0080f678;
    }
    *(undefined1 *)(param_2 + 0x1b) = 0;
    param_2[0x33] = ppppppiVar34;
    ppppppiVar18 = param_2[10];
    param_2[0x34] = ppppppiVar29;
    param_2[0x18] = ppppppiVar18;
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    param_2[0x19] = (int ******)local_c4;
    param_4 = (int *******)0x0;
    local_ec = param_3;
LAB_0080ed50:
    param_2[0x1a] = (int ******)local_c4;
    ppppppiVar34 = local_c4[4];
    pppppppiVar28 = (int *******)0x80000007;
    if (ppppppiVar34[0x10] == (int *****)0x10) {
      iVar10 = thunk_FUN_01bed842(ppppppiVar34[0xf] + 2,"cooldownFanSpeed",0x10);
      param_3 = extraout_r2;
      pppppppiVar11 = extraout_r3;
      if (iVar10 == 0) {
        param_2[0x1c] = ppppppiVar18;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)local_c4;
        goto LAB_0080f89c;
      }
    }
    else {
      param_3 = param_2;
      pppppppiVar11 = param_4;
      if ((ppppppiVar34[0x10] == (int *****)0x4) &&
         (pppppppiVar11 = param_4, ppppppiVar34[0xf][2] == (int ****)0x65646f6d)) {
        param_2[0x1c] = ppppppiVar18;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)local_c4;
        goto LAB_0080edb4;
      }
    }
    goto LAB_0080f7cc;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      local_c4 = (int *******)param_2[0x19];
      ppppppiVar18 = param_2[0x18];
      goto LAB_0080ed50;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c107b4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c107b4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        local_c4 = (int *******)param_2[0x1d];
        ppppppiVar18 = param_2[0x1c];
LAB_0080edb4:
        param_2[0x1e] = ppppppiVar18;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)local_c4;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107b4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107b4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107b4);
        }
        ppppppiVar18 = param_2[0x1e];
      }
      ppppppiVar34 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      pppppppiVar28 = param_2 + 0x1d;
      *(undefined1 *)(param_2 + 0x20) = 1;
      pppppppiVar11 = param_2 + 0x1c;
      *pppppppiVar11 = ppppppiVar18 + 2;
      bVar2 = *(byte *)(ppppppiVar34 + 8);
      local_c4 = (int *******)(uint)bVar2;
      param_4 = (int *******)ppppppiVar34[4];
      ppppppiVar23 = (int ******)ppppppiVar34[5];
      pppppppiVar38 = (int *******)ppppppiVar34[6];
      ppppppiVar25 = (int ******)ppppppiVar34[7];
      ppppppiVar18 = (int ******)ppppppiVar34[1];
      ppppppiVar29 = (int ******)ppppppiVar34[2];
      ppppppiVar40 = (int ******)ppppppiVar34[3];
      *pppppppiVar28 = (int ******)*ppppppiVar34;
      param_2[0x1e] = ppppppiVar18;
      param_2[0x1f] = ppppppiVar29;
      param_2[0x20] = ppppppiVar40;
      param_2[0x21] = (int ******)(param_4 + 8);
      param_2[0x22] = ppppppiVar23;
      param_2[0x23] = (int ******)pppppppiVar38;
      param_2[0x24] = ppppppiVar25;
      *(byte *)(param_2 + 0x25) = bVar2;
      param_3 = (int *******)ppppppiVar34[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)pppppppiVar11;
      param_2[0x27] = (int ******)pppppppiVar28;
      param_2[0x28] = (int ******)param_3;
LAB_0080eee0:
      ppppppiVar18 = *pppppppiVar11;
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_2[0x29] = ppppppiVar18;
      param_2[0x2a] = (int ******)pppppppiVar28;
      param_2[0x2b] = (int ******)param_3;
LAB_0080eefc:
      param_2[0x2c] = (int ******)pppppppiVar28;
      if (*(char *)ppppppiVar18 != '\x03') {
        param_2[0x2e] = (int ******)pppppppiVar28;
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2d] = ppppppiVar18;
        param_2[0x2f] = param_2[0x2b];
        goto LAB_0080f758;
      }
      local_58 = (int *******)&DAT_80000000;
      local_48 = param_4;
      local_50 = pppppppiVar38;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x32)) {
      case 0:
        pppppppiVar11 = (int *******)param_2[0x26];
        pppppppiVar28 = (int *******)param_2[0x27];
        param_3 = (int *******)param_2[0x28];
        goto LAB_0080eee0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x31)) {
      case 0:
        ppppppiVar18 = param_2[0x29];
        pppppppiVar28 = (int *******)param_2[0x2a];
        goto LAB_0080eefc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21c3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c3c);
      case 3:
        if (*(char *)(param_2 + 0x30) != '\0') {
          if (*(char *)(param_2 + 0x30) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22600);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22600);
        }
        ppppppiVar18 = param_2[0x2d];
      }
LAB_0080f758:
      FUN_00b566e8(&local_68,*(char *)ppppppiVar18);
      local_d4 = local_4c;
      local_c4 = local_44;
      local_dc = local_40;
      local_e0 = local_3c;
      local_ec = local_68;
      local_e8 = local_64;
      local_e4 = local_60;
      local_d8 = local_5c;
      *(undefined1 *)(param_2 + 0x30) = 1;
      param_3 = local_54;
      break;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        local_c4 = (int *******)param_2[0x1d];
        ppppppiVar18 = param_2[0x1c];
LAB_0080f89c:
        param_2[0x1e] = ppppppiVar18;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)local_c4;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107b4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107b4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107b4);
        }
        ppppppiVar18 = param_2[0x1e];
      }
      ppppppiVar34 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = ppppppiVar18;
      ppppppiVar18 = (int ******)ppppppiVar34[5];
      pppppiVar21 = ppppppiVar34[4];
      ppppppiVar40 = (int ******)ppppppiVar34[6];
      ppppppiVar25 = (int ******)ppppppiVar34[7];
      uVar9 = *(undefined1 *)(ppppppiVar34 + 8);
      ppppppiVar29 = (int ******)ppppppiVar34[1];
      ppppppiVar23 = (int ******)ppppppiVar34[2];
      ppppppiVar35 = (int ******)ppppppiVar34[3];
      param_2[0x1d] = (int ******)*ppppppiVar34;
      param_2[0x1e] = ppppppiVar29;
      param_2[0x1f] = ppppppiVar23;
      param_2[0x20] = ppppppiVar35;
      param_2[0x21] = (int ******)(pppppiVar21 + 8);
      param_2[0x24] = ppppppiVar25;
      *(undefined1 *)(param_2 + 0x25) = uVar9;
      param_2[0x22] = ppppppiVar18;
      param_2[0x23] = ppppppiVar40;
      ppppppiVar18 = (int ******)ppppppiVar34[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar18;
    case 6:
      FUN_007cb920(&local_68,param_2 + 0x26);
      local_f4 = local_38;
      local_d4 = local_3c;
      pppppppiVar33 = local_40;
      local_c0 = local_44;
      local_d8 = local_4c;
      local_ec = local_58;
      if (local_68 == (int *******)0x2) {
        *(undefined1 *)(param_2 + 0x1b) = 6;
        *param_1 = (int ******)0x2;
        uVar9 = 3;
        goto LAB_0080f864;
      }
      local_d0 = local_48;
      local_dc = local_30;
      local_e0 = local_2c;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      if (((uint)local_68 & 1) == 0) {
        local_ec = local_60;
        local_d8 = local_54;
        local_e0 = local_34;
        local_e4 = local_58;
        local_e8 = local_5c;
        local_d4 = local_44;
        local_c4 = local_3c;
        local_dc = local_38;
        goto LAB_0080f7d8;
      }
      ppppppiVar18 = param_2[0x33];
      local_c4 = local_34;
      DataMemoryBarrier(0xb);
      do {
        pppppiVar21 = *ppppppiVar18;
        bVar42 = (bool)hasExclusiveAccess(ppppppiVar18);
      } while (!bVar42);
      *ppppppiVar18 = (int *****)((int)pppppiVar21 + -1);
      local_bc = local_60;
      local_e8 = local_54;
      local_e4 = local_50;
      if (pppppiVar21 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x33],param_2[0x34]);
      }
      pppppppiVar28 = local_5c;
      pppppppiVar38 = local_64;
LAB_0080f678:
      if (*(char *)((int)param_2 + 0x5d) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          pppppiVar21 = *local_b8;
          bVar42 = (bool)hasExclusiveAccess(local_b8);
        } while (!bVar42);
        *local_b8 = (int *****)((int)pppppiVar21 + -1);
        if (pppppiVar21 == (int *****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(local_b8,local_b4);
        }
      }
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      ppppppiVar18 = (int ******)0x1;
      local_64 = pppppppiVar38;
      local_48 = pppppppiVar33;
      goto LAB_0080f800;
    }
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x32) = 1;
    pppppppiVar11 = local_48;
    pppppppiVar28 = local_58;
    pppppppiVar38 = local_50;
LAB_0080f7cc:
    local_48 = pppppppiVar38;
    local_50 = pppppppiVar28;
    local_40 = pppppppiVar11;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    local_4c = param_3;
    local_64 = (int *******)&local_50;
LAB_0080f7d8:
    if (local_50 == (int *******)0x80000007) {
      local_50 = (int *******)&DAT_80000000;
    }
    pppppppiVar28 = (int *******)param_2[0x34];
    local_bc = (int *******)param_2[0x33];
    local_c0 = local_4c;
    local_d0 = local_50;
    goto LAB_0080f7f8;
  case 4:
switchD_0080e954_caseD_4:
    FUN_00b4f44c(&local_68,param_2 + 0x34,param_3);
    pppppppiVar31 = local_3c;
    pppppppiVar33 = local_40;
    pppppppiVar11 = local_44;
    pppppppiVar39 = local_48;
    pppppppiVar28 = local_4c;
    local_d0 = local_50;
    local_e8 = local_54;
    local_ec = local_58;
    pppppppiVar38 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar9 = 4;
      goto LAB_0080f864;
    }
    local_d4 = local_44;
    local_f4 = local_38;
    local_c4 = local_34;
    local_dc = local_30;
    local_e0 = local_2c;
    local_c0 = local_4c;
    local_d8 = local_54;
    cVar4 = *(char *)(param_2 + 0x58);
    bVar42 = cVar4 == '\x03';
    if (bVar42) {
      cVar4 = *(char *)(param_2 + 0x49);
    }
    if (bVar42 && cVar4 == '\x03') {
      FUN_0175d85c(param_2 + 0x4a);
    }
    if (((uint)pppppppiVar38 & 1) != 0) {
      ppppppiVar18 = param_2[0x59];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar21 = *ppppppiVar18;
        bVar42 = (bool)hasExclusiveAccess(ppppppiVar18);
      } while (!bVar42);
      *ppppppiVar18 = (int *****)((int)pppppiVar21 + -1);
      if (pppppiVar21 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x59],param_2[0x5a]);
      }
      local_d8 = pppppppiVar28;
      local_e4 = local_d0;
      local_bc = local_60;
      local_d0 = pppppppiVar39;
      local_d4 = pppppppiVar31;
      pppppppiVar38 = local_64;
      goto LAB_0080f64c;
    }
    local_e4 = local_ec;
    if (local_d0 == (int *******)0x80000007) {
      local_d0 = (int *******)&DAT_80000000;
    }
    pppppppiVar28 = (int *******)param_2[0x5a];
    local_bc = (int *******)param_2[0x59];
    local_ec = local_60;
    local_e8 = local_5c;
    break;
  case 5:
switchD_0080e954_caseD_5:
    FUN_00b4f44c(&local_68,param_2 + 0x18,param_3);
    pppppppiVar31 = local_3c;
    pppppppiVar8 = local_40;
    pppppppiVar11 = local_44;
    pppppppiVar39 = local_48;
    pppppppiVar7 = local_4c;
    pppppppiVar6 = local_50;
    pppppppiVar5 = local_54;
    pppppppiVar28 = local_58;
    pppppppiVar38 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar9 = 5;
      goto LAB_0080f864;
    }
    local_d4 = local_3c;
    local_f4 = local_38;
    local_c4 = local_34;
    local_dc = local_30;
    local_e0 = local_2c;
    local_bc = local_60;
    local_ec = local_58;
    local_d0 = local_48;
    local_d8 = local_4c;
    local_e4 = local_50;
    local_e8 = local_54;
    cVar4 = *(char *)(param_2 + 0x3c);
    bVar42 = cVar4 == '\x03';
    if (bVar42) {
      cVar4 = *(char *)(param_2 + 0x2d);
    }
    if (bVar42 && cVar4 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    pppppppiVar33 = pppppppiVar8;
    if (((uint)pppppppiVar38 & 1) != 0) {
      ppppppiVar18 = param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar21 = *ppppppiVar18;
        bVar42 = (bool)hasExclusiveAccess(ppppppiVar18);
      } while (!bVar42);
      *ppppppiVar18 = (int *****)((int)pppppiVar21 + -1);
      if (pppppiVar21 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      pppppppiVar38 = local_64;
LAB_0080f64c:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      local_c0 = pppppppiVar11;
      goto LAB_0080f664;
    }
    if (pppppppiVar6 == (int *******)0x80000007) {
      local_d0 = (int *******)&DAT_80000000;
      pppppppiVar31 = param_1;
      pppppppiVar33 = pppppppiVar11;
      local_e8 = param_1 + 10;
      pppppppiVar39 = pppppppiVar8;
    }
    else {
      local_d4 = pppppppiVar11;
      local_d0 = pppppppiVar6;
      local_e4 = pppppppiVar28;
      local_c0 = pppppppiVar7;
      local_d8 = pppppppiVar5;
      pppppppiVar38 = local_60;
      local_e8 = local_5c;
    }
    local_bc = (int *******)param_2[0x3f];
    pppppppiVar28 = (int *******)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    local_ec = pppppppiVar38;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != (int ******)0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_dc = local_f4;
  local_e0 = local_c4;
  local_40 = pppppppiVar33;
  local_48 = pppppppiVar39;
  local_c4 = pppppppiVar31;
LAB_0080f7f8:
  ppppppiVar18 = (int ******)0x0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
  local_f4 = local_40;
LAB_0080f800:
  *param_1 = ppppppiVar18;
  param_1[1] = (int ******)local_64;
  param_1[2] = (int ******)local_bc;
  param_1[4] = (int ******)local_ec;
  param_1[5] = (int ******)local_e8;
  param_1[6] = (int ******)local_e4;
  param_1[7] = (int ******)local_d8;
  param_1[0xb] = (int ******)local_d4;
  param_1[0xc] = (int ******)local_f4;
  param_1[0xd] = (int ******)local_c4;
  param_1[0xe] = (int ******)local_dc;
  param_1[8] = (int ******)local_d0;
  param_1[0xf] = (int ******)local_e0;
  uVar9 = 1;
  param_1[9] = (int ******)local_c0;
  param_1[3] = (int ******)pppppppiVar28;
  param_1[10] = (int ******)local_48;
LAB_0080f864:
  *(undefined1 *)(param_2 + 0x17) = uVar9;
  return;
}

