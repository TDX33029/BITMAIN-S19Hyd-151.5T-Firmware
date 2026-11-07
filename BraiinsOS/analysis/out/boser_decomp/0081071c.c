// FUN_0081071c @ 0081071c size=5776 calls_out=17 calls_in=0
// strings: TempControl | TempControl | TempControl | TempControl | TempControl | coldTempTYPE_SRV

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0081071c(int *******param_1,int *******param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  undefined1 uVar6;
  int iVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  int ******ppppppiVar10;
  int ******ppppppiVar11;
  uint *puVar12;
  int ****ppppiVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *****pppppiVar19;
  int *****pppppiVar20;
  uint *puVar21;
  int iVar22;
  int *******extraout_r3;
  int *******extraout_r3_00;
  int *******extraout_r3_01;
  int *******extraout_r3_02;
  int iVar23;
  int *******pppppppiVar24;
  int ******ppppppiVar25;
  int *******pppppppiVar26;
  int *******pppppppiVar27;
  int ******ppppppiVar28;
  int *****pppppiVar29;
  int ****ppppiVar30;
  int ******ppppppiVar31;
  int *******pppppppiVar32;
  int ****ppppiVar33;
  int *******unaff_r10;
  int *******pppppppiVar34;
  int ****ppppiVar35;
  int *******pppppppiVar36;
  int *******pppppppiVar37;
  int *****pppppiVar38;
  int *******extraout_r12;
  int *******extraout_r12_00;
  int *******extraout_r12_01;
  int *******extraout_r12_02;
  int ******ppppppiVar39;
  int ******ppppppiVar40;
  bool bVar41;
  int ******local_120;
  int ******local_11c;
  int local_108;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******local_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_cc;
  int *******local_c0;
  int ******local_b8;
  int *******local_b4;
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
  
  pppppppiVar36 = (int *******)&local_44;
  puVar21 = &switchD_00810750::switchdataD_00810754;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x17)) {
  case 0:
    ppppppiVar8 = param_2[9];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    param_2[0x12] = param_2[7];
    *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(param_2 + 8);
    pppppppiVar34 = (int *******)0x0;
    if (*param_2 != (int ******)0x0) {
      pppppppiVar34 = param_2 + 1;
    }
    param_2[0x11] = param_2[6];
    iVar22 = 0x3c;
    param_2[0x10] = param_2[5];
    param_2[0xf] = ppppppiVar8;
    pppppiVar19 = ppppppiVar8[0x13];
    param_2[0xe] = (int ******)pppppppiVar34;
    iVar7 = 0x3c;
    if (pppppiVar19 == (int *****)0x0) {
      iVar22 = 0x2c;
    }
    iVar23 = *(int *)((int)ppppppiVar8 + iVar22 + 0x10);
    param_2[0xd] = *(int *******)((int)ppppppiVar8 + iVar22 + 0x14);
    pppppppiVar34 = param_2 + 0xb;
    *pppppppiVar34 = (int ******)0x1;
    pppppppiVar37 = param_2 + 0xc;
    *pppppppiVar37 = (int ******)(iVar23 + 8);
    if (ppppppiVar8[0x13] == (int *****)0x0) {
      iVar7 = 0x2c;
    }
    ppppppiVar31 = *(int *******)((int)ppppppiVar8 + iVar7 + 0x10);
    do {
      pppppiVar19 = *ppppppiVar31;
      bVar41 = (bool)hasExclusiveAccess(ppppppiVar31);
    } while (!bVar41);
    *ppppppiVar31 = (int *****)((int)pppppiVar19 + 1);
    if ((int)pppppiVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x811f04);
      (*pcVar1)();
    }
    puVar21 = *(uint **)((int)ppppppiVar8 + iVar7 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    pppppiVar19 = *param_2[6];
    local_b8 = ppppppiVar31;
    local_b4 = (int *******)puVar21;
    if ((pppppiVar19[4] != (int ****)0x0) || (param_2[9][7] != (int *****)0x0)) {
      param_2[0x14] = (int ******)0x80000000;
      param_2[0x15] = (int ******)"TempControl";
      param_2[0x16] = (int ******)0xb;
      if (param_2[0xb] == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&LAB_01c14638);
      }
      iVar7 = FUN_006c176c((*param_2[0x10])[0x1e],(*param_2[0x10])[0x1f],"TempControl",0xb);
      if (iVar7 != 0) {
        uVar18 = 2;
        if ((int)*(uint *)(iVar7 + 0x10) < 0) {
          uVar18 = *(uint *)(iVar7 + 0x10) ^ 0x80000000;
        }
        if (uVar18 != 2) {
          if (uVar18 != 1) goto LAB_008109fc;
          iVar7 = iVar7 + 0x18;
        }
        iVar7 = FUN_006e05dc(iVar7,param_2[9][0xf] + 2,param_2[9][0x10]);
        if (iVar7 != 0) {
          ppppppiVar8 = param_2[9];
          pppppiVar20 = ppppppiVar8[0xf];
          if (ppppppiVar8[0x13] == (int *****)0x0) {
            local_11c = (int ******)0x0;
          }
          else {
            local_120 = (int ******)ppppppiVar8[0x14];
            local_11c = (int ******)(ppppppiVar8[0x13] + 2);
          }
          ppppppiVar40 = *(int *******)(iVar7 + 0x8c);
          ppppppiVar39 = (int ******)(pppppiVar19 + 2);
          ppppppiVar10 = *(int *******)(iVar7 + 0x90);
          ppppppiVar28 = (int ******)ppppppiVar8[0x10];
          *(undefined1 *)((int)param_2 + 0x5e) = 1;
          ppppppiVar25 = param_2[10];
          uVar6 = *(undefined1 *)(param_2 + 0x13);
          pppppiVar19 = ppppppiVar8[7];
          *(undefined1 *)((int)param_2 + 0x5e) = 0;
          if (pppppiVar19 == (int *****)0x0) {
            param_2[0x18] = ppppppiVar25;
            param_2[0x5a] = (int ******)puVar21;
            param_2[0x55] = local_11c;
            param_2[0x56] = local_120;
            param_2[0x4d] = (int ******)pppppppiVar37;
            *(undefined1 *)(param_2 + 0x1b) = 0;
            param_2[0x19] = (int ******)pppppppiVar34;
            param_2[0x59] = ppppppiVar31;
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)(param_2 + 0x58) = 0;
            *(undefined1 *)(param_2 + 0x57) = uVar6;
            param_2[0x54] = ppppppiVar8 + 2;
            param_2[0x4c] = ppppppiVar39;
            param_2[0x33] = (int ******)(param_2 + 0x18);
            param_2[0x35] = (int ******)&DAT_01c0b950;
            param_2[0x4e] = (int ******)"TempControl";
            param_2[0x4f] = (int ******)0xb;
            param_2[0x50] = ppppppiVar40;
            param_2[0x51] = ppppppiVar10;
            param_2[0x52] = (int ******)(pppppiVar20 + 2);
            param_2[0x53] = ppppppiVar28;
            param_2[0x34] = (int ******)(param_2 + 0x33);
            goto LAB_00810944;
          }
          ppppppiVar11 = (int ******)thunk_FUN_01be5118(0x6c);
          if (ppppppiVar11 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x6c);
          }
          *(undefined1 *)(ppppppiVar11 + 3) = 0;
          *ppppppiVar11 = (int *****)ppppppiVar25;
          ppppppiVar11[1] = (int *****)pppppppiVar34;
          param_2[0x3d] = ppppppiVar11;
          param_2[0x3e] = (int ******)&DAT_01c10984;
          if (ppppppiVar8[7] != (int *****)0x0) {
            pppppiVar38 = ppppppiVar8[6];
            pppppiVar19 = pppppiVar38 + (int)ppppppiVar8[7] * 9;
            puVar12 = (uint *)((uint)&local_68 | 4);
            do {
              pppppiVar29 = *param_2[5];
              if (pppppiVar29[5] != (int ****)0x0) {
                ppppiVar13 = pppppiVar38[7];
                ppppiVar30 = pppppiVar38[8];
                uVar14 = FUN_01a9c24c(pppppiVar29[6],pppppiVar29[7],pppppiVar29[8],pppppiVar29[9],
                                      ppppiVar13 + 2,ppppiVar30);
                uVar18 = uVar14 >> 0x19;
                ppppiVar35 = pppppiVar29[2];
                ppppiVar33 = pppppiVar29[3];
                local_108 = 0;
                while( true ) {
                  uVar14 = (uint)ppppiVar33 & uVar14;
                  uVar15 = *(uint *)((int)ppppiVar35 + uVar14);
                  uVar16 = uVar15 ^ uVar18 * 0x1010101;
                  for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
                      uVar16 = uVar16 - 1 & uVar16) {
                    uVar17 = uVar14 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18)
                                      >> 3) & (uint)ppppiVar33;
                    if ((ppppiVar30 == (int ****)ppppiVar35[uVar17 * -5 + -3]) &&
                       (iVar7 = thunk_FUN_01bed842(ppppiVar13 + 2,ppppiVar35[uVar17 * -5 + -4],
                                                   ppppiVar30), iVar7 == 0)) {
                      local_a0 = *pppppppiVar34;
                      local_9c = param_2[0xc];
                      local_98 = (int *******)param_2[0xd];
                      local_94 = param_2[0xe];
                      local_80 = 0;
                      local_8c = param_2[0x10];
                      ppppppiStack_88 = param_2[0x11];
                      ppppppiStack_84 = param_2[0x12];
                      local_90 = pppppiVar38;
                      (*(code *)ppppiVar35[uVar17 * -5 + -1][5])
                                (&local_68,ppppiVar35[uVar17 * -5 + -2],&local_a0,pppppiVar38 + 2);
                      pppppppiVar26 = local_4c;
                      pppppppiVar9 = local_54;
                      pppppppiVar32 = local_68;
                      local_c0 = local_60;
                      if (local_68 != (int *******)0x2) {
                        local_d4 = local_48;
                        local_e0 = local_44;
                        local_d8 = local_40;
                        local_cc = local_3c;
                        local_d0 = local_38;
                        local_f8 = local_34;
                        local_ec = local_30;
                        local_e8 = local_5c;
                        local_e4 = local_58;
                        local_dc = local_50;
                        FUN_0175d85c(param_2 + 0x3d);
                        local_60 = local_64;
                        goto LAB_00810cb8;
                      }
                      if (*pppppppiVar34 == (int ******)0x1) {
                        local_78 = *pppppppiVar37;
                        ppppppiStack_74 = param_2[0xd];
                        ppppppiStack_70 = param_2[0xe];
                      }
                      local_68 = (int *******)(uint)(*pppppppiVar34 == (int ******)0x1);
                      local_58 = (int *******)param_2[0xf];
                      local_54 = (int *******)param_2[0x10];
                      local_50 = (int *******)param_2[0x11];
                      local_4c = (int *******)param_2[0x12];
                      uVar3 = *(undefined1 *)(param_2 + 0x13);
                      *puVar12 = (uint)local_78;
                      puVar12[1] = (uint)ppppppiStack_74;
                      puVar12[2] = (uint)ppppppiStack_70;
                      local_48 = (int *******)CONCAT31(local_48._1_3_,uVar3);
                      local_40 = local_60;
                      local_3c = (int *******)param_2[0x3d];
                      local_38 = (int *******)param_2[0x3e];
                      local_44 = local_64;
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
                      param_2[0x3e] = (int ******)&DAT_01c0b940;
                      goto LAB_00811398;
                    }
                  }
                  if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
                  local_108 = local_108 + 4;
                  uVar14 = uVar14 + local_108;
                }
              }
LAB_00811398:
              pppppiVar38 = pppppiVar38 + 9;
            } while (pppppiVar38 != pppppiVar19);
          }
          param_2[0x3f] = ppppppiVar31;
          param_2[0x40] = (int ******)puVar21;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3c) = 0;
          param_2[0x39] = local_11c;
          param_2[0x30] = ppppppiVar39;
          param_2[0x3a] = local_120;
          *(undefined1 *)(param_2 + 0x3b) = uVar6;
          param_2[0x38] = ppppppiVar8 + 2;
          param_2[0x31] = (int ******)pppppppiVar37;
          param_2[0x33] = (int ******)0xb;
          param_2[0x36] = (int ******)(pppppiVar20 + 2);
          param_2[0x32] = (int ******)"TempControl";
          param_2[0x37] = ppppppiVar28;
          param_2[0x18] = (int ******)(param_2 + 0x3d);
          param_2[0x19] = (int ******)&DAT_01c0b0b0;
          param_2[0x34] = ppppppiVar40;
          param_2[0x35] = ppppppiVar10;
          local_f0 = pppppppiVar36;
          goto LAB_00810970;
        }
      }
LAB_008109fc:
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
      local_d4 = local_48;
      local_e0 = local_44;
      local_d8 = local_40;
      local_cc = local_3c;
      local_d0 = local_38;
      local_ec = local_30;
      local_dc = local_50;
      local_e4 = local_58;
      local_c0 = local_60;
      local_e8 = local_5c;
      local_f4 = local_4c;
      local_f0 = local_54;
      pppppppiVar32 = local_68;
      local_f8 = local_34;
      local_60 = local_64;
LAB_00810cd4:
      pppppppiVar36 = local_60;
      if (param_2[0x14] != (int ******)0x80000000) {
        FUN_019bb7e0(param_2[0x14],param_2[0x15]);
      }
      goto LAB_00811bfc;
    }
    *(undefined1 *)(param_2 + 0x1b) = 0;
    param_2[0x33] = ppppppiVar31;
    ppppppiVar8 = param_2[10];
    param_2[0x18] = ppppppiVar8;
    param_2[0x34] = (int ******)puVar21;
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    param_2[0x19] = (int ******)pppppppiVar34;
    pppppppiVar37 = param_2;
LAB_00810d60:
    param_2[0x1a] = (int ******)pppppppiVar34;
    local_f4 = (int *******)0x80000007;
    ppppppiVar31 = pppppppiVar34[4];
    switch(ppppppiVar31[0x10]) {
    case (int *****)0x4:
      if (ppppppiVar31[0xf][2] == (int ****)0x65646f6d) {
        param_2[0x1c] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar34;
        goto LAB_00810f1c;
      }
      break;
    case (int *****)0x7:
      iVar7 = thunk_FUN_01bed842(ppppppiVar31[0xf] + 2,"hotTemp",7);
      puVar21 = (uint *)extraout_r3_00;
      pppppppiVar36 = extraout_r12_00;
      if (iVar7 == 0) {
        param_2[0x1c] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar34;
        goto LAB_0081175c;
      }
      break;
    case (int *****)0x8:
      iVar7 = thunk_FUN_01bed842(ppppppiVar31[0xf] + 2,"coldTempTYPE_SRV",8);
      puVar21 = (uint *)extraout_r3;
      pppppppiVar36 = extraout_r12;
      if (iVar7 == 0) {
        param_2[0x1c] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar34;
        goto LAB_0081166c;
      }
      break;
    case (int *****)0xa:
      iVar7 = thunk_FUN_01bed842(ppppppiVar31[0xf] + 2,"targetTemp",10);
      puVar21 = (uint *)extraout_r3_01;
      pppppppiVar36 = extraout_r12_01;
      if (iVar7 == 0) {
        param_2[0x1c] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar34;
        goto LAB_00811854;
      }
      break;
    case (int *****)0xd:
      iVar7 = thunk_FUN_01bed842(ppppppiVar31[0xf] + 2,"dangerousTemp",0xd);
      puVar21 = (uint *)extraout_r3_02;
      pppppppiVar36 = extraout_r12_02;
      if (iVar7 == 0) {
        param_2[0x1c] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar34;
        goto LAB_00811a58;
      }
    }
    goto switchD_00810d88_caseD_5;
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
      ppppppiVar8 = param_2[0x18];
      pppppppiVar34 = (int *******)param_2[0x19];
      pppppppiVar37 = param_1;
      goto LAB_00810d60;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c107c4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c107c4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        ppppppiVar8 = param_2[0x1c];
        pppppppiVar34 = (int *******)param_2[0x1d];
LAB_00810f1c:
        param_2[0x1e] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar34;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107c4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107c4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107c4);
        }
        ppppppiVar8 = param_2[0x1e];
      }
      ppppppiVar31 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      pppppppiVar37 = param_2 + 0x1d;
      *(undefined1 *)(param_2 + 0x20) = 1;
      pppppppiVar9 = param_2 + 0x1c;
      *pppppppiVar9 = ppppppiVar8 + 0x10;
      pppppiVar19 = ppppppiVar31[4];
      pppppppiVar34 = (int *******)ppppppiVar31[5];
      unaff_r10 = (int *******)ppppppiVar31[6];
      ppppppiVar25 = (int ******)ppppppiVar31[7];
      uVar6 = *(undefined1 *)(ppppppiVar31 + 8);
      ppppppiVar8 = (int ******)ppppppiVar31[1];
      ppppppiVar10 = (int ******)ppppppiVar31[2];
      pppppppiVar36 = (int *******)ppppppiVar31[3];
      *pppppppiVar37 = (int ******)*ppppppiVar31;
      param_2[0x1e] = ppppppiVar8;
      param_2[0x1f] = ppppppiVar10;
      param_2[0x20] = (int ******)pppppppiVar36;
      param_2[0x24] = ppppppiVar25;
      param_2[0x21] = (int ******)(pppppiVar19 + 8);
      param_2[0x22] = (int ******)pppppppiVar34;
      param_2[0x23] = (int ******)unaff_r10;
      *(undefined1 *)(param_2 + 0x25) = uVar6;
      ppppppiVar31 = (int ******)ppppppiVar31[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)pppppppiVar9;
      param_2[0x27] = (int ******)pppppppiVar37;
      param_2[0x28] = ppppppiVar31;
      local_cc = pppppppiVar9;
LAB_00811570:
      ppppppiVar8 = *pppppppiVar9;
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_2[0x29] = ppppppiVar8;
      param_2[0x2a] = (int ******)pppppppiVar37;
      param_2[0x2b] = ppppppiVar31;
LAB_0081158c:
      param_2[0x2c] = (int ******)pppppppiVar37;
      if (*(char *)ppppppiVar8 != '\x04') {
        param_2[0x2d] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2e] = (int ******)pppppppiVar37;
        param_2[0x2f] = param_2[0x2b];
        goto LAB_008119b0;
      }
      local_58 = (int *******)&DAT_80000000;
      puVar21 = (uint *)param_2;
      local_54 = pppppppiVar34;
      local_40 = unaff_r10;
      break;
    case 4:
      pppppppiVar34 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x32)) {
      case 0:
        pppppppiVar9 = (int *******)param_2[0x26];
        pppppppiVar37 = (int *******)param_2[0x27];
        ppppppiVar31 = param_2[0x28];
        goto LAB_00811570;
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
        ppppppiVar8 = param_2[0x29];
        pppppppiVar37 = (int *******)param_2[0x2a];
        goto LAB_0081158c;
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
            FUN_013079f0(&DAT_01c22660);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22660);
        }
        ppppppiVar8 = param_2[0x2d];
      }
LAB_008119b0:
      FUN_00b5674c(&local_68,*(char *)ppppppiVar8);
      local_d8 = local_4c;
      local_cc = local_48;
      local_d0 = local_44;
      local_ec = local_3c;
      local_e8 = local_68;
      local_e4 = local_64;
      local_dc = local_5c;
      *(undefined1 *)(param_2 + 0x30) = 1;
      puVar21 = (uint *)local_60;
      pppppppiVar36 = local_50;
      break;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        ppppppiVar8 = param_2[0x1c];
        pppppppiVar34 = (int *******)param_2[0x1d];
LAB_00811854:
        param_2[0x1e] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar34;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107c4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107c4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107c4);
        }
        ppppppiVar8 = param_2[0x1e];
      }
      ppppppiVar31 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = ppppppiVar8;
      pppppiVar19 = ppppppiVar31[4];
      ppppppiVar40 = (int ******)ppppppiVar31[5];
      ppppppiVar28 = (int ******)ppppppiVar31[6];
      ppppppiVar25 = (int ******)ppppppiVar31[7];
      uVar6 = *(undefined1 *)(ppppppiVar31 + 8);
      ppppppiVar8 = (int ******)ppppppiVar31[1];
      ppppppiVar10 = (int ******)ppppppiVar31[2];
      ppppppiVar39 = (int ******)ppppppiVar31[3];
      param_2[0x1d] = (int ******)*ppppppiVar31;
      param_2[0x1e] = ppppppiVar8;
      param_2[0x1f] = ppppppiVar10;
      param_2[0x20] = ppppppiVar39;
      *(undefined1 *)(param_2 + 0x25) = uVar6;
      param_2[0x21] = (int ******)(pppppiVar19 + 8);
      param_2[0x22] = ppppppiVar40;
      param_2[0x23] = ppppppiVar28;
      param_2[0x24] = ppppppiVar25;
      ppppppiVar8 = (int ******)ppppppiVar31[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar8;
    case 6:
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar6 = 6;
        goto LAB_00811b08;
      }
      goto LAB_00811b1c;
    case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        ppppppiVar8 = param_2[0x1c];
        pppppppiVar34 = (int *******)param_2[0x1d];
LAB_0081175c:
        param_2[0x1e] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar34;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107c4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107c4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107c4);
        }
        ppppppiVar8 = param_2[0x1e];
      }
      ppppppiVar31 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = ppppppiVar8 + 4;
      pppppiVar19 = ppppppiVar31[4];
      ppppppiVar40 = (int ******)ppppppiVar31[5];
      ppppppiVar28 = (int ******)ppppppiVar31[6];
      ppppppiVar25 = (int ******)ppppppiVar31[7];
      uVar6 = *(undefined1 *)(ppppppiVar31 + 8);
      ppppppiVar8 = (int ******)ppppppiVar31[1];
      ppppppiVar10 = (int ******)ppppppiVar31[2];
      ppppppiVar39 = (int ******)ppppppiVar31[3];
      param_2[0x1d] = (int ******)*ppppppiVar31;
      param_2[0x1e] = ppppppiVar8;
      param_2[0x1f] = ppppppiVar10;
      param_2[0x20] = ppppppiVar39;
      *(undefined1 *)(param_2 + 0x25) = uVar6;
      param_2[0x21] = (int ******)(pppppiVar19 + 8);
      param_2[0x22] = ppppppiVar40;
      param_2[0x23] = ppppppiVar28;
      param_2[0x24] = ppppppiVar25;
      ppppppiVar8 = (int ******)ppppppiVar31[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar8;
    case 8:
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar6 = 8;
LAB_00811b08:
        *(undefined1 *)(param_2 + 0x1b) = uVar6;
        *param_1 = (int ******)0x2;
        uVar6 = 3;
        goto LAB_00811d20;
      }
LAB_00811b1c:
      local_cc = local_38;
      local_d8 = local_3c;
      local_e0 = local_40;
      local_f4 = local_48;
      local_dc = local_4c;
      local_f0 = local_50;
      local_e8 = local_58;
      local_c0 = local_5c;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      pppppppiVar32 = local_64;
      if (((uint)local_68 & 1) == 0) {
        local_e4 = local_5c;
        local_cc = local_40;
        local_d0 = local_3c;
        local_e8 = local_60;
        local_dc = local_54;
        local_d8 = local_44;
        local_ec = local_34;
        local_f4 = local_50;
        goto LAB_00811c88;
      }
      ppppppiVar8 = param_2[0x33];
      DataMemoryBarrier(0xb);
      local_d4 = local_44;
      do {
        pppppiVar19 = *ppppppiVar8;
        bVar41 = (bool)hasExclusiveAccess(ppppppiVar8);
      } while (!bVar41);
      *ppppppiVar8 = (int *****)((int)pppppiVar19 + -1);
      local_e4 = local_54;
      local_ec = local_2c;
      if (pppppiVar19 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x33],param_2[0x34]);
      }
      local_d0 = local_34;
      local_f8 = local_30;
      pppppppiVar36 = local_60;
LAB_00811bfc:
      if (*(char *)((int)param_2 + 0x5d) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          pppppiVar19 = *local_b8;
          bVar41 = (bool)hasExclusiveAccess(local_b8);
        } while (!bVar41);
        *local_b8 = (int *****)((int)pppppiVar19 + -1);
        if (pppppiVar19 == (int *****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(local_b8,local_b4);
        }
      }
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      ppppppiVar8 = (int ******)0x1;
      goto LAB_00811cbc;
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        ppppppiVar8 = param_2[0x1c];
        pppppppiVar34 = (int *******)param_2[0x1d];
LAB_00811a58:
        param_2[0x1e] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar34;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107c4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107c4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107c4);
        }
        ppppppiVar8 = param_2[0x1e];
      }
      ppppppiVar31 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = ppppppiVar8 + 8;
      pppppiVar19 = ppppppiVar31[4];
      ppppppiVar40 = (int ******)ppppppiVar31[5];
      ppppppiVar28 = (int ******)ppppppiVar31[6];
      ppppppiVar25 = (int ******)ppppppiVar31[7];
      uVar6 = *(undefined1 *)(ppppppiVar31 + 8);
      ppppppiVar8 = (int ******)ppppppiVar31[1];
      ppppppiVar10 = (int ******)ppppppiVar31[2];
      ppppppiVar39 = (int ******)ppppppiVar31[3];
      param_2[0x1d] = (int ******)*ppppppiVar31;
      param_2[0x1e] = ppppppiVar8;
      param_2[0x1f] = ppppppiVar10;
      param_2[0x20] = ppppppiVar39;
      *(undefined1 *)(param_2 + 0x25) = uVar6;
      param_2[0x21] = (int ******)(pppppiVar19 + 8);
      param_2[0x22] = ppppppiVar40;
      param_2[0x23] = ppppppiVar28;
      param_2[0x24] = ppppppiVar25;
      ppppppiVar8 = (int ******)ppppppiVar31[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar8;
    case 10:
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar6 = 10;
        goto LAB_00811b08;
      }
      goto LAB_00811b1c;
    case 0xb:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        ppppppiVar8 = param_2[0x1c];
        pppppppiVar34 = (int *******)param_2[0x1d];
LAB_0081166c:
        param_2[0x1e] = ppppppiVar8;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar34;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c107c4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c107c4);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c107c4);
        }
        ppppppiVar8 = param_2[0x1e];
      }
      ppppppiVar31 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = ppppppiVar8 + 0xc;
      pppppiVar19 = ppppppiVar31[4];
      ppppppiVar40 = (int ******)ppppppiVar31[5];
      ppppppiVar28 = (int ******)ppppppiVar31[6];
      ppppppiVar25 = (int ******)ppppppiVar31[7];
      uVar6 = *(undefined1 *)(ppppppiVar31 + 8);
      ppppppiVar8 = (int ******)ppppppiVar31[1];
      ppppppiVar10 = (int ******)ppppppiVar31[2];
      ppppppiVar39 = (int ******)ppppppiVar31[3];
      param_2[0x1d] = (int ******)*ppppppiVar31;
      param_2[0x1e] = ppppppiVar8;
      param_2[0x1f] = ppppppiVar10;
      param_2[0x20] = ppppppiVar39;
      *(undefined1 *)(param_2 + 0x25) = uVar6;
      param_2[0x21] = (int ******)(pppppiVar19 + 8);
      param_2[0x22] = ppppppiVar40;
      param_2[0x23] = ppppppiVar28;
      param_2[0x24] = ppppppiVar25;
      ppppppiVar8 = (int ******)ppppppiVar31[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar8;
    case 0xc:
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar6 = 0xc;
        goto LAB_00811b08;
      }
      goto LAB_00811b1c;
    }
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x32) = 1;
    local_f4 = local_58;
    pppppppiVar37 = local_54;
    pppppppiVar34 = local_40;
switchD_00810d88_caseD_5:
    local_38 = pppppppiVar34;
    local_4c = pppppppiVar37;
    local_c0 = param_2 + 0x1b;
    *(undefined1 *)local_c0 = 1;
    local_58 = (int *******)puVar21;
    pppppppiVar32 = (int *******)&local_50;
    local_48 = pppppppiVar36;
LAB_00811c88:
    if (local_f4 == (int *******)0x80000007) {
      local_f4 = (int *******)&DAT_80000000;
    }
    pppppppiVar36 = (int *******)param_2[0x33];
    local_c0 = (int *******)param_2[0x34];
    local_f0 = local_58;
    local_f8 = local_38;
    local_e0 = local_48;
    local_d4 = local_4c;
    goto LAB_00811cb4;
  case 4:
LAB_00810944:
    FUN_00b4f44c(&local_68,param_2 + 0x34,param_3);
    local_ec = local_2c;
    pppppppiVar27 = local_3c;
    pppppppiVar24 = local_40;
    pppppppiVar37 = local_44;
    pppppppiVar26 = local_48;
    pppppppiVar34 = local_4c;
    pppppppiVar9 = local_50;
    local_e4 = local_54;
    local_e8 = local_58;
    pppppppiVar36 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar6 = 4;
      goto LAB_00811d20;
    }
    local_d8 = local_44;
    local_cc = local_38;
    local_d0 = local_34;
    local_f0 = local_58;
    local_d4 = local_4c;
    local_f4 = local_50;
    local_dc = local_54;
    cVar2 = *(char *)(param_2 + 0x58);
    bVar41 = cVar2 == '\x03';
    if (bVar41) {
      cVar2 = *(char *)(param_2 + 0x49);
    }
    if (bVar41 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x4a);
    }
    pppppppiVar32 = local_64;
    if (((uint)pppppppiVar36 & 1) != 0) {
      ppppppiVar8 = param_2[0x59];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar19 = *ppppppiVar8;
        bVar41 = (bool)hasExclusiveAccess(ppppppiVar8);
      } while (!bVar41);
      *ppppppiVar8 = (int *****)((int)pppppiVar19 + -1);
      local_f8 = local_30;
      if (pppppiVar19 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x59],param_2[0x5a]);
      }
      local_c0 = local_5c;
      local_dc = pppppppiVar34;
      local_e0 = pppppppiVar24;
      local_d4 = pppppppiVar37;
      local_d8 = pppppppiVar27;
      goto LAB_00810cb8;
    }
    local_e0 = pppppppiVar26;
    if (pppppppiVar9 == (int *******)0x80000007) {
      local_f4 = (int *******)&DAT_80000000;
    }
    pppppppiVar36 = (int *******)param_2[0x59];
    local_c0 = (int *******)param_2[0x5a];
    local_e4 = local_5c;
    local_e8 = local_60;
    break;
  case 5:
LAB_00810970:
    FUN_00b4f44c(&local_68,param_2 + 0x18,param_3);
    pppppppiVar27 = local_3c;
    pppppppiVar24 = local_40;
    pppppppiVar5 = local_44;
    pppppppiVar26 = local_48;
    pppppppiVar4 = local_4c;
    pppppppiVar9 = local_50;
    pppppppiVar37 = local_54;
    pppppppiVar34 = local_58;
    pppppppiVar36 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar6 = 5;
      goto LAB_00811d20;
    }
    local_e0 = local_40;
    local_d8 = local_3c;
    local_cc = local_38;
    local_d0 = local_34;
    local_f8 = local_30;
    local_ec = local_2c;
    local_c0 = local_5c;
    local_e8 = local_58;
    local_d4 = local_44;
    local_dc = local_4c;
    local_e4 = local_54;
    cVar2 = *(char *)(param_2 + 0x3c);
    bVar41 = cVar2 == '\x03';
    if (bVar41) {
      cVar2 = *(char *)(param_2 + 0x2d);
    }
    if (bVar41 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    pppppppiVar32 = local_64;
    if (((uint)pppppppiVar36 & 1) != 0) {
      ppppppiVar8 = param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar19 = *ppppppiVar8;
        bVar41 = (bool)hasExclusiveAccess(ppppppiVar8);
      } while (!bVar41);
      *ppppppiVar8 = (int *****)((int)pppppiVar19 + -1);
      if (pppppiVar19 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
LAB_00810cb8:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      local_f4 = pppppppiVar26;
      local_f0 = pppppppiVar9;
      goto LAB_00810cd4;
    }
    if (pppppppiVar9 == (int *******)0x80000007) {
      local_f4 = (int *******)&DAT_80000000;
      pppppppiVar24 = pppppppiVar36;
      pppppppiVar27 = pppppppiVar26;
      local_e4 = param_1;
      local_e8 = param_1 + 10;
    }
    else {
      local_d8 = pppppppiVar5;
      local_f0 = pppppppiVar34;
      local_f4 = pppppppiVar9;
      local_d4 = pppppppiVar4;
      local_e0 = pppppppiVar26;
      local_dc = pppppppiVar37;
      local_e4 = local_5c;
      local_e8 = local_60;
    }
    local_c0 = (int *******)param_2[0x40];
    pppppppiVar36 = (int *******)param_2[0x3f];
    FUN_0175d85c(param_2 + 0x3d);
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != (int ******)0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_ec = local_d0;
  local_f8 = local_cc;
  local_d0 = pppppppiVar27;
  local_cc = pppppppiVar24;
LAB_00811cb4:
  ppppppiVar8 = (int ******)0x0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00811cbc:
  *param_1 = ppppppiVar8;
  param_1[1] = (int ******)pppppppiVar32;
  param_1[2] = (int ******)pppppppiVar36;
  param_1[3] = (int ******)local_c0;
  param_1[4] = (int ******)local_e8;
  param_1[5] = (int ******)local_e4;
  param_1[7] = (int ******)local_dc;
  param_1[10] = (int ******)local_e0;
  param_1[0xb] = (int ******)local_d8;
  param_1[0xc] = (int ******)local_cc;
  param_1[0xd] = (int ******)local_d0;
  param_1[8] = (int ******)local_f4;
  param_1[0xf] = (int ******)local_ec;
  uVar6 = 1;
  param_1[9] = (int ******)local_d4;
  param_1[6] = (int ******)local_f0;
  param_1[0xe] = (int ******)local_f8;
LAB_00811d20:
  *(undefined1 *)(param_2 + 0x17) = uVar6;
  return;
}

