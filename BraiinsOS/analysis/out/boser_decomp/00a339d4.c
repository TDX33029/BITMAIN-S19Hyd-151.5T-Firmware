// FUN_00a339d4 @ 00a339d4 size=4712 calls_out=28 calls_in=0
// strings: hashChainGlobal | hashChains

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a339d4(undefined4 *param_1,int ******param_2,undefined4 param_3)

{
  bool bVar1;
  int ******ppppppiVar2;
  int ******ppppppiVar3;
  int ******ppppppiVar4;
  int ******ppppppiVar5;
  int ******ppppppiVar6;
  undefined1 uVar7;
  int ****ppppiVar8;
  int ****ppppiVar9;
  undefined4 *puVar10;
  int ******ppppppiVar11;
  int ******ppppppiVar12;
  undefined1 *puVar13;
  byte bVar14;
  int ******unaff_r5;
  int iVar15;
  int ******ppppppiVar16;
  int *****pppppiVar17;
  int iVar18;
  int *****pppppiVar19;
  int *****pppppiVar20;
  undefined4 uVar21;
  int *****pppppiVar22;
  int iVar23;
  int *****pppppiVar24;
  int *****pppppiVar25;
  int ******in_r12;
  int ******extraout_r12;
  int ******ppppppiVar26;
  int ******extraout_r12_00;
  int ******extraout_r12_01;
  undefined8 uVar27;
  undefined1 *local_3d0;
  int ******local_3cc;
  int ******local_3c8;
  int ******local_3c4;
  int ******local_3c0;
  int ******local_3bc;
  int ******local_3a4;
  int ******local_3a0;
  int ******local_39c;
  int ******local_398;
  int ******local_394;
  int ******local_390;
  int ******local_38c;
  int ******local_368;
  int ******ppppppiStack_364;
  int ******ppppppiStack_360;
  int ******local_35c;
  int ******ppppppiStack_358;
  int ******ppppppiStack_354;
  int ******ppppppiStack_350;
  int ******local_328;
  int ******ppppppiStack_324;
  int ******ppppppiStack_320;
  int ******local_31c;
  int ******ppppppiStack_318;
  int ******ppppppiStack_314;
  int ******ppppppiStack_310;
  int *****local_308;
  int *****local_304;
  int *****local_300;
  int ******local_260;
  int ******local_25c;
  int ******local_258;
  int ******local_250;
  int ******ppppppiStack_24c;
  int ******ppppppiStack_248;
  int ******local_244;
  int ******ppppppiStack_240;
  int ******ppppppiStack_23c;
  int ******ppppppiStack_238;
  int ******local_230;
  int ******ppppppiStack_22c;
  int ******ppppppiStack_228;
  int ******local_224;
  int ******local_220;
  int ******local_21c;
  int ******ppppppiStack_218;
  int ******ppppppiStack_214;
  int ******local_210;
  int ******ppppppiStack_20c;
  int ******ppppppiStack_208;
  int ******ppppppiStack_204;
  int ******local_1f8;
  int ******ppppppiStack_1f4;
  int ******ppppppiStack_1f0;
  int ******local_1ec;
  int ******ppppppiStack_1e8;
  int ******ppppppiStack_1e4;
  int ******ppppppiStack_1e0;
  int ******local_1d8;
  int ******local_1d4;
  int ******local_1d0;
  int ******local_1cc;
  int ******local_1c8;
  int ******local_1c4;
  int ******local_1c0;
  int ******local_1bc;
  int ******local_1b8;
  int ******local_1b4;
  int ******local_1b0;
  int ******ppppppiStack_1ac;
  int ******ppppppiStack_1a8;
  int ******local_1a4;
  int ******local_1a0;
  int ******local_19c;
  int local_148;
  int *****local_70;
  int ****local_6c;
  uint local_68;
  int *****local_64;
  int *****pppppiStack_60;
  int *****pppppiStack_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  undefined1 local_48;
  undefined1 local_44;
  int ******local_40;
  int ******ppppppiStack_3c;
  int ******ppppppiStack_38;
  int ******local_34;
  int ******ppppppiStack_30;
  int ******ppppppiStack_2c;
  int ******ppppppiStack_28;
  
  puVar10 = (undefined4 *)((uint)&local_230 | 4);
  ppppppiVar12 = (int ******)&local_1cc;
  local_398 = unaff_r5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    ppppppiVar16 = (int ******)*param_2;
    pppppiVar19 = param_2[1];
    local_39c = (int ******)0x80000007;
    uVar21 = 0;
    param_2[2] = pppppiVar19;
    ppppiVar8 = pppppiVar19[4];
    ppppppiVar11 = (int ******)ppppiVar8[0x10];
    if (ppppppiVar11 == (int ******)&DAT_0000000a) {
      uVar27 = thunk_FUN_01bed842(ppppiVar8[0xf] + 2,"hashChains",10);
      ppppppiVar11 = (int ******)((ulonglong)uVar27 >> 0x20);
      in_r12 = extraout_r12_01;
      if ((int)uVar27 == 0) {
        param_2[4] = (int *****)ppppppiVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = pppppiVar19;
        goto LAB_00a34180;
      }
    }
    else if (ppppppiVar11 == (int ******)&DAT_0000000f) {
      uVar27 = thunk_FUN_01bed842(ppppiVar8[0xf] + 2,"hashChainGlobal",0xf);
      ppppppiVar11 = (int ******)((ulonglong)uVar27 >> 0x20);
      in_r12 = extraout_r12;
      if ((int)uVar27 == 0) {
        param_2[4] = (int *****)ppppppiVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = pppppiVar19;
        goto LAB_00a33b38;
      }
    }
    local_3a0 = ppppppiVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0e314);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e314);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      ppppppiVar16 = (int ******)param_2[4];
      pppppiVar19 = param_2[5];
LAB_00a33b38:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = (int *****)ppppppiVar16;
      param_2[7] = pppppiVar19;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e314);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e314);
    case 3:
      if (((uint)param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e314);
      }
      ppppppiVar16 = (int ******)param_2[6];
    }
    ppppppiVar26 = param_2 + 4;
    pppppiVar19 = param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    ppppppiVar11 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = (int *****)ppppppiVar16;
    ppppiVar8 = pppppiVar19[4];
    pppppiVar25 = (int *****)pppppiVar19[5];
    pppppiVar24 = (int *****)pppppiVar19[6];
    pppppiVar22 = (int *****)pppppiVar19[7];
    uVar7 = *(undefined1 *)(pppppiVar19 + 8);
    unaff_r5 = (int ******)pppppiVar19[1];
    pppppiVar17 = (int *****)pppppiVar19[2];
    pppppiVar20 = (int *****)pppppiVar19[3];
    *ppppppiVar11 = (int *****)*pppppiVar19;
    param_2[6] = (int *****)unaff_r5;
    param_2[7] = pppppiVar17;
    param_2[8] = pppppiVar20;
    param_2[9] = (int *****)(ppppiVar8 + 8);
    param_2[10] = pppppiVar25;
    param_2[0xb] = pppppiVar24;
    param_2[0xc] = pppppiVar22;
    *(undefined1 *)(param_2 + 0xd) = uVar7;
    pppppiVar17 = (int *****)pppppiVar19[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int *****)ppppppiVar26;
    param_2[0x31] = (int *****)ppppppiVar11;
    param_2[0x32] = pppppiVar17;
    local_390 = ppppppiVar12;
LAB_00a33c8c:
    pppppiVar19 = *ppppppiVar26;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = pppppiVar19;
    param_2[0x2b] = (int *****)ppppppiVar11;
    param_2[0x2c] = pppppiVar17;
    local_398 = unaff_r5;
LAB_00a33cac:
    param_2[0x2d] = (int *****)ppppppiVar11;
    if (*pppppiVar19 != (int ****)0x2 || pppppiVar19[1] != (int ****)0x0) {
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x26] = pppppiVar19;
      param_2[0x27] = (int *****)ppppppiVar11;
      param_2[0x28] = param_2[0x2c];
LAB_00a33ce8:
      *(undefined1 *)(param_2 + 0x24) = 0;
      param_2[0x22] = (int *****)ppppppiVar11;
      param_2[0x23] = pppppiVar19;
LAB_00a33d00:
      *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
      bVar14 = 1;
      param_2[0x11] = (int *****)ppppppiVar11;
      param_2[0x12] = pppppiVar19;
LAB_00a33d1c:
      param_2[0xe] = (int *****)0x0;
      param_2[0x10] = (int *****)0x0;
      param_2[0xf] = (int *****)0x4;
      *(undefined1 *)(param_2 + 0x13) = 1;
      FUN_007d8394(&local_1d8,param_2 + 0xe,ppppppiVar11,pppppiVar19);
      if (local_1d8 != (int ******)0x2) {
        local_398 = local_1d4;
        local_394 = local_1c8;
        local_39c = local_1c4;
        local_3a0 = local_1d0;
        local_390 = local_1cc;
        local_1f8 = local_1c0;
        ppppppiStack_1f4 = local_1bc;
        ppppppiStack_1f0 = local_1b8;
        local_1ec = local_1b4;
        ppppppiStack_1e8 = local_1b0;
        ppppppiStack_1e4 = ppppppiStack_1ac;
        ppppppiStack_1e0 = ppppppiStack_1a8;
        ppppppiVar12 = local_1a0;
        goto LAB_00a33e3c;
      }
      if ((bVar14 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x13) = 0;
        FUN_009ec520(&local_1d8);
        param_2[0x14] = (int *****)local_1d8;
        param_2[0x15] = (int *****)local_1d4;
        param_2[0x16] = (int *****)local_1d0;
        param_2[0x17] = (int *****)local_1cc;
        param_2[0x18] = (int *****)local_1c8;
        param_2[0x19] = (int *****)local_1c4;
        param_2[0x1a] = (int *****)local_1c0;
        param_2[0x1b] = (int *****)local_1bc;
        param_2[0x1c] = (int *****)local_1b8;
        param_2[0x1d] = (int *****)local_1b4;
        param_2[0x1e] = (int *****)local_1b0;
        param_2[0x1f] = (int *****)ppppppiStack_1ac;
        param_2[0x20] = (int *****)ppppppiStack_1a8;
        param_2[0x21] = (int *****)local_1a4;
        goto switchD_00a3456c_caseD_3;
      }
      pppppiVar19 = param_2[0x10];
      if ((int *****)0x2492492 < pppppiVar19) {
        uVar21 = 0;
        iVar15 = 2;
LAB_00a33ffc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar21,iVar15);
      }
      iVar15 = (int)pppppiVar19 * 0x38;
      if (iVar15 == 0) {
        pppppiVar17 = (int *****)0x8;
        pppppiVar19 = (int *****)0x0;
      }
      else {
        uVar21 = 8;
        pppppiVar17 = (int *****)FUN_01298504(iVar15,8);
        if (pppppiVar17 == (int *****)0x0) goto LAB_00a33ffc;
      }
      pppppiVar20 = param_2[0xf];
      param_2[0x15] = pppppiVar17;
      pppppiVar17 = pppppiVar20 + (int)param_2[0x10] * 2;
      param_2[0x14] = pppppiVar19;
      param_2[0x16] = (int *****)0x0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x1c] = pppppiVar20;
      param_2[0x1d] = pppppiVar20;
      param_2[0x1e] = param_2[0xe];
      param_2[0x1f] = pppppiVar17;
      while (pppppiVar20 != pppppiVar17) {
        pppppiVar19 = (int *****)*pppppiVar20;
        pppppiVar17 = (int *****)pppppiVar20[1];
        param_2[0x1d] = pppppiVar20 + 2;
        param_2[0x1a] = pppppiVar19;
        param_2[0x17] = (int *****)(param_2 + 0x14);
        param_2[0x18] = pppppiVar19;
        param_2[0x19] = pppppiVar17;
        param_2[0x1b] = pppppiVar17;
LAB_00a34db0:
        (*(code *)pppppiVar17[3])(&local_1d8,pppppiVar19,param_3);
        ppppppiVar6 = local_19c;
        ppppppiVar5 = local_1a0;
        ppppppiVar4 = local_1c0;
        ppppppiVar3 = local_1c4;
        ppppppiVar2 = local_1c8;
        ppppppiVar26 = local_1cc;
        ppppppiVar11 = local_1d0;
        ppppppiVar16 = local_1d8;
        if (local_1d8 == (int ******)0x2) {
          uVar7 = 4;
          goto LAB_00a34fa0;
        }
        local_398 = local_1d0;
        local_394 = local_1c4;
        local_39c = local_1c0;
        local_3a0 = local_1cc;
        local_390 = local_1c8;
        local_250 = local_1bc;
        ppppppiStack_24c = local_1b8;
        ppppppiStack_248 = local_1b4;
        local_244 = local_1b0;
        ppppppiStack_240 = ppppppiStack_1ac;
        ppppppiStack_23c = ppppppiStack_1a8;
        ppppppiStack_238 = local_1a4;
        FUN_01139b38(param_2[0x1a],param_2[0x1b]);
        if (((uint)ppppppiVar16 & 1) != 0) {
          local_1f8 = local_250;
          ppppppiStack_1f4 = ppppppiStack_24c;
          ppppppiStack_1f0 = ppppppiStack_248;
          local_1ec = local_244;
          ppppppiStack_1e8 = ppppppiStack_240;
          ppppppiStack_1e4 = ppppppiStack_23c;
          ppppppiStack_1e0 = ppppppiStack_238;
          FUN_009495dc(param_2 + 0x1c);
          FUN_007bc140(param_2 + 0x14);
          ppppppiVar12 = ppppppiVar6;
          goto LAB_00a33e3c;
        }
        *puVar10 = ppppppiVar26;
        puVar10[1] = ppppppiVar2;
        local_230 = ppppppiVar11;
        local_220 = ppppppiVar4;
        local_224 = ppppppiVar3;
        local_21c = local_250;
        ppppppiStack_218 = ppppppiStack_24c;
        ppppppiStack_214 = ppppppiStack_248;
        local_210 = local_244;
        ppppppiStack_20c = ppppppiStack_240;
        ppppppiStack_208 = ppppppiStack_23c;
        ppppppiStack_204 = ppppppiStack_238;
        pppppiVar19 = param_2[0x17];
        puVar10[0xb] = ppppppiVar5;
        puVar10[0xc] = ppppppiVar6;
        ppppiVar8 = pppppiVar19[2];
        if (ppppiVar8 == *pppppiVar19) {
          FUN_006e4ec8(pppppiVar19);
        }
        ppppiVar9 = pppppiVar19[1] + (int)ppppiVar8 * 0xe;
        *ppppiVar9 = (int ***)ppppppiVar11;
        ppppiVar9[2] = (int ***)ppppppiVar2;
        ppppiVar9[3] = (int ***)ppppppiVar3;
        ppppiVar9[4] = (int ***)ppppppiVar4;
        ppppiVar9[1] = (int ***)ppppppiVar26;
        ppppiVar9[5] = (int ***)local_250;
        ppppiVar9[6] = (int ***)ppppppiStack_24c;
        ppppiVar9[7] = (int ***)ppppppiStack_248;
        ppppiVar9[8] = (int ***)local_244;
        ppppiVar9[9] = (int ***)ppppppiStack_240;
        ppppiVar9[10] = (int ***)ppppppiStack_23c;
        ppppiVar9[0xb] = (int ***)ppppppiStack_238;
        ppppiVar9[0xc] = (int ***)ppppppiVar5;
        ppppiVar9[0xd] = (int ***)ppppppiVar6;
        pppppiVar19[2] = (int ****)((int)ppppiVar8 + 1);
        pppppiVar17 = param_2[0x1f];
        pppppiVar20 = param_2[0x1d];
      }
      param_2[0x18] = (int *****)0x0;
      FUN_009495dc(param_2 + 0x1c);
      local_260 = (int ******)param_2[0x14];
      local_25c = (int ******)param_2[0x15];
      local_258 = (int ******)param_2[0x16];
LAB_00a34f38:
      FUN_006cac18(&local_1d8,&local_260);
      local_398 = local_1d8;
      local_3a0 = local_1d4;
      local_390 = local_1d0;
      local_394 = local_1cc;
      local_39c = local_1c8;
      bVar1 = false;
      local_1f8 = local_1c4;
      ppppppiStack_1f4 = local_1c0;
      ppppppiStack_1f0 = local_1bc;
      local_1ec = local_1b8;
      ppppppiStack_1e8 = local_1b4;
      ppppppiStack_1e4 = local_1b0;
      ppppppiStack_1e0 = ppppppiStack_1ac;
      *(undefined1 *)(param_2 + 0x13) = 0;
      goto LAB_00a33e5c;
    }
    local_39c = (int ******)&DAT_80000000;
    goto LAB_00a33f60;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x33)) {
    case 0:
      ppppppiVar26 = (int ******)param_2[0x30];
      ppppppiVar11 = (int ******)param_2[0x31];
      pppppiVar17 = param_2[0x32];
      goto LAB_00a33c8c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2e)) {
    case 0:
      pppppiVar19 = param_2[0x2a];
      ppppppiVar11 = (int ******)param_2[0x2b];
      goto LAB_00a33cac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      pppppiVar19 = param_2[0x26];
      ppppppiVar11 = (int ******)param_2[0x27];
      goto LAB_00a33ce8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10880);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10880);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    case 0:
      ppppppiVar11 = (int ******)param_2[0x22];
      pppppiVar19 = param_2[0x23];
      goto LAB_00a33d00;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      ppppppiVar11 = (int ******)param_2[0x11];
      pppppiVar19 = param_2[0x12];
      bVar14 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00a33d1c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      pppppiVar19 = param_2[0x1a];
      pppppiVar17 = param_2[0x1b];
      goto LAB_00a34db0;
    }
switchD_00a3456c_caseD_3:
    FUN_009ecbe0(&local_1d8,param_2 + 0x14,param_3);
    ppppppiStack_1e4 = ppppppiStack_1ac;
    ppppppiStack_1e8 = local_1b0;
    local_1ec = local_1b4;
    ppppppiStack_1f0 = local_1b8;
    ppppppiStack_1f4 = local_1bc;
    local_1f8 = local_1c0;
    ppppppiVar11 = local_1d4;
    ppppppiVar16 = local_1d8;
    if (local_1d8 == (int ******)&DAT_00000003) {
      uVar7 = 3;
LAB_00a34fa0:
      local_3bc = param_2 + 0x2e;
      local_3c8 = param_2 + 0x29;
      local_3cc = param_2 + 0x24;
      local_3d0 = (undefined1 *)((int)param_2 + 0x4d);
      local_3c0 = param_2 + 0x33;
      *local_3d0 = uVar7;
      *(undefined1 *)local_3c8 = 3;
      *(undefined1 *)local_3cc = 3;
      *(undefined1 *)local_3bc = 3;
      *(undefined1 *)local_3c0 = 3;
      *param_1 = 2;
      uVar7 = 4;
      goto LAB_00a3491c;
    }
    local_398 = local_1d4;
    local_394 = local_1c8;
    local_39c = local_1c4;
    local_3a0 = local_1d0;
    local_390 = local_1cc;
    FUN_011928d4(param_2 + 0x14);
    ppppppiVar12 = local_1a0;
    if (ppppppiVar16 == (int ******)0x2) {
      local_260 = ppppppiVar11;
      local_25c = local_3a0;
      local_258 = local_390;
      goto LAB_00a34f38;
    }
    ppppppiStack_1e0 = ppppppiStack_1a8;
LAB_00a33e3c:
    local_3a4 = param_2 + 0xe;
    if (*(char *)(param_2 + 0x13) != '\0') {
      FUN_00b7d620(local_3a4);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
LAB_00a33e5c:
    ppppppiStack_310 = ppppppiStack_1e0;
    ppppppiStack_314 = ppppppiStack_1e4;
    ppppppiStack_318 = ppppppiStack_1e8;
    local_31c = local_1ec;
    ppppppiStack_320 = ppppppiStack_1f0;
    ppppppiStack_324 = ppppppiStack_1f4;
    local_328 = local_1f8;
    local_3a4 = param_2 + 0xe;
    local_3c8 = param_2 + 0x29;
    local_3cc = param_2 + 0x24;
    local_3d0 = (undefined1 *)((int)param_2 + 0x4d);
    *local_3d0 = 1;
    FUN_01192a14(local_3a4);
    *(undefined1 *)local_3c8 = 1;
    *(undefined1 *)local_3cc = 1;
    if (bVar1) {
      local_39c = (int ******)&DAT_80000000;
      FUN_00a20afc(param_2[0x2d][6]);
    }
LAB_00a33f60:
    local_3a4 = param_2 + 0xe;
    local_3bc = param_2 + 0x2e;
    local_3c0 = param_2 + 0x33;
    *(undefined1 *)local_3bc = 1;
    *(undefined1 *)local_3c0 = 1;
    FUN_00a9039c(local_3a4);
    uVar21 = 0;
    local_368 = local_328;
    ppppppiStack_364 = ppppppiStack_324;
    ppppppiStack_360 = ppppppiStack_320;
    local_35c = local_31c;
    ppppppiStack_358 = ppppppiStack_318;
    ppppppiStack_354 = ppppppiStack_314;
    ppppppiStack_350 = ppppppiStack_310;
    ppppppiVar16 = ppppppiStack_314;
    in_r12 = extraout_r12_00;
    break;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      ppppppiVar16 = (int ******)param_2[4];
      pppppiVar19 = param_2[5];
LAB_00a34180:
      param_2[6] = (int *****)ppppppiVar16;
      param_2[7] = pppppiVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e314);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e314);
    case 3:
      if (((uint)param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e314);
      }
      ppppppiVar16 = (int ******)param_2[6];
    }
    pppppiVar19 = param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_394 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    ppppppiVar12 = param_2 + 4;
    *ppppppiVar12 = (int *****)(ppppppiVar16 + 0xe);
    ppppiVar8 = pppppiVar19[4];
    pppppiVar25 = (int *****)pppppiVar19[5];
    pppppiVar24 = (int *****)pppppiVar19[6];
    pppppiVar22 = (int *****)pppppiVar19[7];
    uVar7 = *(undefined1 *)(pppppiVar19 + 8);
    unaff_r5 = (int ******)pppppiVar19[1];
    pppppiVar17 = (int *****)pppppiVar19[2];
    pppppiVar20 = (int *****)pppppiVar19[3];
    *local_394 = (int *****)*pppppiVar19;
    param_2[6] = (int *****)unaff_r5;
    param_2[7] = pppppiVar17;
    param_2[8] = pppppiVar20;
    param_2[9] = (int *****)(ppppiVar8 + 8);
    *(undefined1 *)(param_2 + 0xd) = uVar7;
    param_2[10] = pppppiVar25;
    param_2[0xb] = pppppiVar24;
    param_2[0xc] = pppppiVar22;
    local_390 = (int ******)pppppiVar19[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int *****)ppppppiVar12;
    param_2[0x2b] = (int *****)local_394;
    param_2[0x2c] = (int *****)local_390;
LAB_00a3420c:
    pppppiVar17 = *ppppppiVar12;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = pppppiVar17;
    param_2[0x27] = (int *****)local_394;
    param_2[0x28] = (int *****)local_390;
LAB_00a34230:
    pppppiVar19 = (int *****)pppppiVar17[2];
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = (int *****)0x1;
    param_2[0xf] = pppppiVar19;
    param_2[0x10] = (int *****)local_394;
    param_2[0x11] = (int *****)local_390;
    param_2[0x12] = pppppiVar17;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_398 = local_394 + 6;
    if ((**local_398)[4] != (int ***)0x0) {
LAB_00a34278:
      if (&UNK_00505050 < pppppiVar19) {
        uVar21 = 0;
LAB_00a3428c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar21,unaff_r5);
      }
      unaff_r5 = (int ******)((int)pppppiVar19 * 0x198);
      if (unaff_r5 == (int ******)0x0) {
        pppppiVar20 = (int *****)0x8;
        pppppiVar19 = (int *****)0x0;
      }
      else {
        uVar21 = 8;
        pppppiVar20 = (int *****)FUN_01298504(unaff_r5,8);
        if (pppppiVar20 == (int *****)0x0) goto LAB_00a3428c;
      }
      param_2[0x14] = pppppiVar19;
LAB_00a342dc:
      param_2[0x15] = pppppiVar20;
      param_2[0x16] = (int *****)0x0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (pppppiVar17[2] != (int ****)0x0) {
        ppppiVar8 = pppppiVar17[1];
        iVar23 = 0;
        iVar15 = (int)pppppiVar17[2] * 0x30;
        local_3a4 = local_394 + 1;
        do {
          if (*local_394 == (int *****)0x1) {
            local_308 = *local_3a4;
            local_304 = local_394[2];
            local_300 = local_394[3];
          }
          local_68 = (uint)(*local_394 == (int *****)0x1);
          local_58 = local_394[4];
          local_54 = local_394[5];
          local_4c = local_394[7];
          local_50 = *local_398;
          local_48 = *(undefined1 *)(local_394 + 8);
          local_64 = local_308;
          pppppiStack_60 = local_304;
          pppppiStack_5c = local_300;
          local_44 = 0;
          pppppiVar19 = param_2[0x16];
          local_148 = iVar23;
          local_70 = (int *****)local_390;
          local_6c = ppppiVar8;
          if (pppppiVar19 == param_2[0x14]) {
            FUN_00f9d59c(param_2 + 0x14);
          }
          ppppiVar8 = ppppiVar8 + 0xc;
          FUN_01bed4e2(param_2[0x15] + (int)pppppiVar19 * 0x66,&local_1d8,0x198);
          iVar23 = iVar23 + 1;
          iVar15 = iVar15 + -0x30;
          param_2[0x16] = (int *****)((int)pppppiVar19 + 1);
        } while (iVar15 != 0);
      }
      local_1f8 = (int ******)param_2[0x14];
      ppppppiStack_1f4 = (int ******)param_2[0x15];
      ppppppiStack_1f0 = (int ******)param_2[0x16];
      FUN_00a15db0(&local_1d8);
      param_2[0x18] = (int *****)local_1d8;
      param_2[0x19] = (int *****)local_1d4;
      param_2[0x1a] = (int *****)local_1d0;
      param_2[0x1b] = (int *****)local_1cc;
      param_2[0x1c] = (int *****)local_1c8;
      param_2[0x1d] = (int *****)local_1c4;
      param_2[0x1e] = (int *****)local_1c0;
      param_2[0x1f] = (int *****)local_1bc;
      param_2[0x20] = (int *****)local_1b8;
      param_2[0x21] = (int *****)local_1b4;
      param_2[0x22] = (int *****)local_1b0;
      param_2[0x23] = (int *****)ppppppiStack_1ac;
      param_2[0x24] = (int *****)ppppppiStack_1a8;
      param_2[0x25] = (int *****)local_1a4;
      goto LAB_00a34454;
    }
LAB_00a345d8:
    if (&UNK_00ba2e8b < pppppiVar19) {
      uVar21 = 0;
LAB_00a345ec:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar21,unaff_r5);
    }
    unaff_r5 = (int ******)((int)pppppiVar19 * 0xb0);
    if (unaff_r5 == (int ******)0x0) {
      pppppiVar20 = (int *****)0x8;
      pppppiVar19 = (int *****)0x0;
    }
    else {
      uVar21 = 8;
      pppppiVar20 = (int *****)FUN_01298504(unaff_r5,8);
      if (pppppiVar20 == (int *****)0x0) goto LAB_00a345ec;
    }
    param_2[0x14] = pppppiVar19;
LAB_00a34648:
    local_3a4 = param_2 + 0x14;
    param_2[0x15] = pppppiVar20;
    param_2[0x16] = (int *****)0x0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (pppppiVar17[2] != (int ****)0x0) {
      pppppiVar19 = param_2[0x16];
      iVar23 = 0;
      iVar15 = (int)pppppiVar17[2] * 0x30;
      iVar18 = (int)pppppiVar19 * 0xb0 + 0xac;
      ppppiVar8 = pppppiVar17[1];
      do {
        pppppiVar17 = local_394[4];
        pppppiVar20 = local_394[5];
        ppppppiVar12 = (int ******)0x0;
        if (*local_394 != (int *****)0x0) {
          ppppppiVar12 = local_394 + 1;
        }
        pppppiVar22 = local_394[6];
        pppppiVar25 = local_394[7];
        uVar7 = *(undefined1 *)(local_394 + 8);
        pppppiVar24 = (int *****)((int)pppppiVar19 + iVar23);
        if (pppppiVar24 == *local_3a4) {
          FUN_00a20d80(local_3a4);
        }
        iVar15 = iVar15 + -0x30;
        puVar13 = (undefined1 *)((int)param_2[0x15] + iVar18);
        *puVar13 = 0;
        iVar18 = iVar18 + 0xb0;
        *(int ******)(puVar13 + -0xc) = pppppiVar22;
        *(int ******)(puVar13 + -8) = pppppiVar25;
        *(int *******)(puVar13 + -0x28) = local_390;
        *(undefined4 *)(puVar13 + -0x24) = 1;
        *(undefined4 *)(puVar13 + -0x20) = 0;
        *(int *)(puVar13 + -0x1c) = iVar23;
        *(int *******)(puVar13 + -0x18) = ppppppiVar12;
        iVar23 = iVar23 + 1;
        *(int *****)(puVar13 + -0x2c) = ppppiVar8;
        *(int ******)(puVar13 + -0x14) = pppppiVar17;
        puVar13[-4] = uVar7;
        *(int ******)(puVar13 + -0x10) = pppppiVar20;
        param_2[0x16] = (int *****)((int)pppppiVar24 + 1);
        ppppiVar8 = ppppiVar8 + 0xc;
      } while (iVar15 != 0);
    }
    local_1f8 = (int ******)*local_3a4;
    ppppppiStack_1f4 = (int ******)param_2[0x15];
    ppppppiStack_1f0 = (int ******)param_2[0x16];
    FUN_00a1563c(&local_1d8);
    param_2[0x18] = (int *****)local_1d8;
    param_2[0x19] = (int *****)local_1d4;
    param_2[0x1a] = (int *****)local_1d0;
    param_2[0x1b] = (int *****)local_1cc;
    param_2[0x1c] = (int *****)local_1c8;
    param_2[0x1d] = (int *****)local_1c4;
    param_2[0x1e] = (int *****)local_1c0;
    param_2[0x1f] = (int *****)local_1bc;
    param_2[0x20] = (int *****)local_1b8;
    param_2[0x21] = (int *****)local_1b4;
    param_2[0x22] = (int *****)local_1b0;
    param_2[0x23] = (int *****)ppppppiStack_1ac;
    param_2[0x24] = (int *****)ppppppiStack_1a8;
    param_2[0x25] = (int *****)local_1a4;
LAB_00a347a4:
    FUN_00a047cc(&local_1d8,param_2 + 0x18,param_3);
    if (local_1d8 != (int ******)&DAT_00000003) {
      local_398 = local_1d4;
      local_394 = local_1c8;
      local_3a0 = local_1d0;
      local_390 = local_1cc;
      local_230 = local_1c0;
      ppppppiStack_22c = local_1bc;
      ppppppiStack_228 = local_1b8;
      local_224 = local_1b4;
      local_220 = local_1b0;
      local_21c = ppppppiStack_1ac;
      ppppppiStack_218 = ppppppiStack_1a8;
      local_38c = local_1a4;
      FUN_00a35200(param_2 + 0x18);
      if (local_1d8 == (int ******)0x2) goto LAB_00a34850;
      local_39c = local_1c4;
      local_40 = local_230;
      ppppppiStack_3c = ppppppiStack_22c;
      ppppppiStack_38 = ppppppiStack_228;
      local_1b4 = local_224;
      local_1b0 = local_220;
      ppppppiStack_1ac = local_21c;
      ppppppiStack_1a8 = ppppppiStack_218;
      local_3a4 = local_1a0;
      goto LAB_00a34880;
    }
    uVar7 = 4;
LAB_00a347cc:
    local_3c8 = param_2 + 0x13;
    local_3bc = param_2 + 0x29;
    *(undefined1 *)local_3c8 = uVar7;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_3bc = 3;
    *param_1 = 2;
    uVar7 = 6;
    goto LAB_00a3491c;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      ppppppiVar12 = (int ******)param_2[0x2a];
      local_394 = (int ******)param_2[0x2b];
      local_390 = (int ******)param_2[0x2c];
      goto LAB_00a3420c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      pppppiVar17 = param_2[0x26];
      local_394 = (int ******)param_2[0x27];
      local_390 = (int ******)param_2[0x28];
      goto LAB_00a34230;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x13)) {
    case 0:
      local_394 = (int ******)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      pppppiVar19 = param_2[0xf];
      local_398 = local_394 + 6;
      local_390 = (int ******)param_2[0x11];
      pppppiVar17 = param_2[0x12];
      if ((**local_398)[4] == (int ***)0x0) {
        if (param_2[0xe] != (int *****)0x0) goto LAB_00a345d8;
        param_2[0x14] = (int *****)0x0;
        pppppiVar20 = (int *****)0x8;
        goto LAB_00a34648;
      }
      if (param_2[0xe] != (int *****)0x0) goto LAB_00a34278;
      param_2[0x14] = (int *****)0x0;
      pppppiVar20 = (int *****)0x8;
      goto LAB_00a342dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case 3:
      break;
    case 4:
      goto LAB_00a347a4;
    }
LAB_00a34454:
    FUN_009f7040(&local_1d8,param_2 + 0x18,param_3);
    if (local_1d8 == (int ******)&DAT_00000003) {
      uVar7 = 3;
      goto LAB_00a347cc;
    }
    local_398 = local_1d4;
    local_394 = local_1c8;
    local_39c = local_1c4;
    local_3a0 = local_1d0;
    local_390 = local_1cc;
    local_38c = local_1a4;
    FUN_00a350c0(param_2 + 0x18);
    if (local_1d8 == (int ******)0x2) {
LAB_00a34850:
      uVar21 = 0;
      local_39c = (int ******)0x80000006;
      ppppppiVar12 = local_1d8;
      local_38c = param_2;
    }
    else {
      local_40 = local_1c0;
      ppppppiStack_3c = local_1bc;
      ppppppiStack_38 = local_1b8;
      local_3a4 = local_1a0;
LAB_00a34880:
      uVar21 = 1;
      ppppppiVar12 = local_1d8;
      local_34 = local_1b4;
      ppppppiStack_30 = local_1b0;
      ppppppiStack_2c = ppppppiStack_1ac;
      ppppppiStack_28 = ppppppiStack_1a8;
    }
    local_3c4 = param_2 + 0x2d;
    local_3bc = param_2 + 0x29;
    local_3c0 = param_2 + 0xe;
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00a35340(local_3c0);
    *(undefined1 *)local_3c4 = 1;
    *(undefined1 *)local_3bc = 1;
    local_368 = local_40;
    ppppppiStack_364 = ppppppiStack_3c;
    ppppppiStack_360 = ppppppiStack_38;
    local_35c = local_34;
    ppppppiStack_358 = ppppppiStack_30;
    ppppppiStack_354 = ppppppiStack_2c;
    ppppppiStack_350 = ppppppiStack_28;
    ppppppiVar16 = local_3a4;
    in_r12 = local_38c;
  }
  param_1[5] = local_394;
  param_1[3] = local_3a0;
  param_1[4] = local_390;
  *param_1 = uVar21;
  param_1[1] = ppppppiVar12;
  param_1[2] = local_398;
  param_1[6] = local_39c;
  param_1[7] = local_368;
  param_1[8] = ppppppiStack_364;
  param_1[9] = ppppppiStack_360;
  param_1[10] = local_35c;
  param_1[0xb] = ppppppiStack_358;
  param_1[0xc] = ppppppiStack_354;
  param_1[0xd] = ppppppiStack_350;
  uVar7 = 1;
  param_1[0xe] = in_r12;
  param_1[0xf] = ppppppiVar16;
LAB_00a3491c:
  *(undefined1 *)(param_2 + 3) = uVar7;
  return;
}

