// FUN_011bd41c @ 011bd41c size=5348 calls_out=24 calls_in=0
// strings: includeDeprecated

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011bd41c(undefined4 *param_1,byte ******param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte ****ppppbVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte ****ppppbVar7;
  byte ******extraout_r2;
  byte ******extraout_r3;
  byte *****pppppbVar8;
  byte ******ppppppbVar9;
  byte *****pppppbVar10;
  byte ******ppppppbVar11;
  byte *****pppppbVar12;
  int iVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  byte ****ppppbVar16;
  byte ******unaff_r10;
  byte ****ppppbVar17;
  byte ******ppppppbVar18;
  byte ******extraout_r12;
  byte *****pppppbVar19;
  byte ******unaff_lr;
  byte *****pppppbVar20;
  byte ******local_280;
  byte ******local_27c;
  byte ******local_278;
  byte ******local_270;
  byte ******local_26c;
  byte ******local_268;
  byte ******local_264;
  byte ******local_260;
  byte ******local_25c;
  byte ******local_258;
  byte ******local_254;
  byte ******local_248;
  byte ******local_244;
  byte ******local_240;
  byte ******local_23c;
  byte ******local_238;
  undefined4 local_234;
  byte ******local_230;
  byte ******local_22c;
  byte ******local_228;
  byte ******local_224;
  byte ******local_220;
  byte ******local_21c;
  byte ******local_218;
  byte ******local_214;
  byte ******ppppppbStack_210;
  byte ******local_20c;
  byte ******local_208;
  byte ******local_204;
  undefined1 local_10c;
  byte ******local_108;
  byte ******local_104;
  byte ******local_100;
  byte ******local_fc;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f4;
  byte ******ppppppbStack_f0;
  byte ******local_e8;
  byte ******local_e4;
  byte ******local_e0;
  byte ******local_dc;
  byte ******local_d8;
  byte ******local_d4;
  byte ******local_d0;
  byte ******ppppppbStack_cc;
  byte ******ppppppbStack_c8;
  byte ******local_c4;
  byte ******ppppppbStack_c0;
  byte ******ppppppbStack_bc;
  byte ******ppppppbStack_b8;
  byte ******local_b4;
  byte ******local_b0;
  byte ******local_a8;
  byte ******ppppppbStack_a4;
  byte ******ppppppbStack_a0;
  byte ******local_9c;
  byte ******ppppppbStack_98;
  byte ******ppppppbStack_94;
  byte ******ppppppbStack_90;
  byte ******local_88;
  byte ******ppppppbStack_84;
  byte ******ppppppbStack_80;
  byte ******local_7c;
  byte ******ppppppbStack_78;
  byte ******ppppppbStack_74;
  byte ******ppppppbStack_70;
  byte ******local_68;
  byte ******ppppppbStack_64;
  byte ******ppppppbStack_60;
  byte ******local_5c;
  byte ******ppppppbStack_58;
  byte ******ppppppbStack_54;
  byte ******ppppppbStack_50;
  byte ******local_38;
  byte ******local_34;
  byte ******local_30;
  
  local_25c = (byte ******)&local_238;
  ppppppbVar18 = (byte ******)&local_e8;
  local_268 = (byte ******)&local_e0;
  ppppppbVar11 = param_2 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 3)) {
  case 0:
    pppppbVar8 = param_2[1];
    param_2[2] = pppppbVar8;
    pppppbVar10 = *param_2;
    local_26c = (byte ******)0x11bd4ac;
    uVar1 = FUN_006c04b0(pppppbVar8[4][0xf],pppppbVar8[4][0x10]);
    local_248 = (byte ******)0x0;
    local_258 = (byte ******)0x80000007;
    local_264 = extraout_r2;
    local_25c = extraout_r3;
    local_254 = ppppppbVar18;
    local_244 = extraout_r12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 0:
      *(byte *)(param_2 + 7) = 0;
      param_2[4] = pppppbVar10;
      param_2[5] = pppppbVar8;
LAB_011bd5e0:
      param_2[8] = pppppbVar10;
      *(byte *)(param_2 + 0xf) = 0;
      param_2[9] = pppppbVar8;
      param_2[6] = pppppbVar8;
LAB_011bd750:
      param_2[10] = pppppbVar10;
      *(byte *)(param_2 + 0xe) = 0;
      param_2[0xb] = pppppbVar8;
LAB_011bd760:
      param_2[0xc] = pppppbVar10;
      param_2[0xd] = (byte *****)0x0;
LAB_011bd76c:
      pppppbVar8 = (byte *****)pppppbVar10[2][0x15];
      param_2[0x1a] = (byte *****)pppppbVar10[2][0x14];
      pppppbVar10 = param_2[6];
      param_2[0x1b] = pppppbVar8;
      *(byte *)(param_2 + 0xf) = 1;
      *(byte *)(param_2 + 0xe) = 1;
      *(byte *)(param_2 + 0xd) = 1;
      ppppbVar17 = pppppbVar10[4];
      pppppbVar20 = (byte *****)pppppbVar10[5];
      pppppbVar15 = (byte *****)pppppbVar10[6];
      pppppbVar14 = (byte *****)pppppbVar10[7];
      bVar2 = *(byte *)(pppppbVar10 + 8);
      pppppbVar8 = (byte *****)pppppbVar10[1];
      pppppbVar12 = (byte *****)pppppbVar10[2];
      pppppbVar19 = (byte *****)pppppbVar10[3];
      param_2[8] = (byte *****)*pppppbVar10;
      param_2[9] = pppppbVar8;
      param_2[10] = pppppbVar12;
      param_2[0xb] = pppppbVar19;
      param_2[0xe] = pppppbVar15;
      param_2[0xc] = (byte *****)(ppppbVar17 + 8);
      param_2[0xd] = pppppbVar20;
      param_2[0xf] = pppppbVar14;
      *(byte *)(param_2 + 0x10) = bVar2;
      pppppbVar10 = (byte *****)pppppbVar10[4];
      *(byte *)(param_2 + 0x19) = 0;
      param_2[0x11] = (byte *****)(param_2 + 0x1a);
      param_2[0x12] = (byte *****)(param_2 + 8);
      param_2[0x13] = pppppbVar10;
      goto switchD_011bd5c0_caseD_4;
    case 1:
      *(byte *)(param_2 + 7) = 0;
      param_2[4] = pppppbVar10;
      param_2[5] = pppppbVar8;
LAB_011bdbbc:
      param_2[8] = pppppbVar10;
      *(byte *)(param_2 + 0xf) = 0;
      param_2[9] = pppppbVar8;
      param_2[6] = pppppbVar8;
LAB_011bdbd4:
      param_2[10] = pppppbVar10;
      *(byte *)(param_2 + 0xe) = 0;
      param_2[0xb] = pppppbVar8;
LAB_011bdbe4:
      param_2[0xc] = pppppbVar10;
      param_2[0xd] = (byte *****)0x0;
LAB_011bdbf0:
      ppppbVar17 = pppppbVar10[2];
      pppppbVar8 = (byte *****)ppppbVar17[0xf];
      pppppbVar10 = (byte *****)0x0;
      if (ppppbVar17[0xd] != (byte ***)0x80000000) {
        pppppbVar10 = (byte *****)ppppbVar17[0xe];
      }
      param_2[0x11] = pppppbVar10;
      pppppbVar10 = param_2[6];
      param_2[0x12] = pppppbVar8;
      *(byte *)(param_2 + 0xf) = 1;
      *(byte *)(param_2 + 0xe) = 1;
      *(byte *)(param_2 + 0xd) = 1;
      ppppbVar17 = pppppbVar10[4];
      pppppbVar20 = (byte *****)pppppbVar10[5];
      pppppbVar15 = (byte *****)pppppbVar10[6];
      pppppbVar14 = (byte *****)pppppbVar10[7];
      bVar2 = *(byte *)(pppppbVar10 + 8);
      pppppbVar8 = (byte *****)pppppbVar10[1];
      pppppbVar12 = (byte *****)pppppbVar10[2];
      pppppbVar19 = (byte *****)pppppbVar10[3];
      param_2[8] = (byte *****)*pppppbVar10;
      param_2[9] = pppppbVar8;
      param_2[10] = pppppbVar12;
      param_2[0xb] = pppppbVar19;
      param_2[0xe] = pppppbVar15;
      param_2[0xc] = (byte *****)(ppppbVar17 + 8);
      param_2[0xd] = pppppbVar20;
      param_2[0xf] = pppppbVar14;
      *(byte *)(param_2 + 0x10) = bVar2;
      pppppbVar10 = (byte *****)pppppbVar10[4];
      *(byte *)(param_2 + 0x20) = 0;
      param_2[0x13] = (byte *****)(param_2 + 0x11);
      param_2[0x14] = (byte *****)(param_2 + 8);
      param_2[0x15] = pppppbVar10;
      goto switchD_011bd588_caseD_4;
    case 2:
      param_2[4] = pppppbVar10;
      param_2[5] = pppppbVar8;
      *(byte *)(param_2 + 7) = 0;
LAB_011bdd2c:
      param_2[8] = pppppbVar10;
      *(byte *)(param_2 + 0xf) = 0;
      param_2[9] = pppppbVar8;
      param_2[6] = pppppbVar8;
LAB_011bdd48:
      param_2[10] = pppppbVar10;
      *(byte *)(param_2 + 0xe) = 0;
      param_2[0xb] = pppppbVar8;
LAB_011bdd58:
      param_2[0xc] = pppppbVar10;
      param_2[0xd] = (byte *****)0x0;
LAB_011bdd64:
      pppppbVar8 = param_2[6];
      ppppbVar17 = pppppbVar10[2];
      *(byte *)(param_2 + 0xf) = 1;
      *(byte *)(param_2 + 0xe) = 1;
      *(byte *)(param_2 + 0xd) = 1;
      ppppppbVar18 = param_2 + 9;
      ppppppbVar9 = param_2 + 8;
      *ppppppbVar9 = (byte *****)(ppppbVar17 + 0x16);
      ppppbVar17 = pppppbVar8[4];
      pppppbVar19 = (byte *****)pppppbVar8[5];
      pppppbVar15 = (byte *****)pppppbVar8[6];
      pppppbVar14 = (byte *****)pppppbVar8[7];
      bVar2 = *(byte *)(pppppbVar8 + 8);
      pppppbVar10 = (byte *****)pppppbVar8[1];
      pppppbVar12 = (byte *****)pppppbVar8[2];
      ppppppbVar11 = (byte ******)pppppbVar8[3];
      *ppppppbVar18 = (byte *****)*pppppbVar8;
      param_2[10] = pppppbVar10;
      param_2[0xb] = pppppbVar12;
      param_2[0xc] = (byte *****)ppppppbVar11;
      param_2[0xd] = (byte *****)(ppppbVar17 + 8);
      param_2[0xe] = pppppbVar19;
      param_2[0xf] = pppppbVar15;
      param_2[0x10] = pppppbVar14;
      *(byte *)(param_2 + 0x11) = bVar2;
      local_260 = (byte ******)pppppbVar8[4];
      *(byte *)(param_2 + 0x31) = 0;
      param_2[0x2e] = (byte *****)ppppppbVar9;
      param_2[0x2f] = (byte *****)ppppppbVar18;
      param_2[0x30] = (byte *****)local_260;
LAB_011bde08:
      pppppbVar10 = *ppppppbVar9;
      *(byte *)(param_2 + 0x2d) = 0;
      param_2[0x2a] = pppppbVar10;
      param_2[0x2b] = (byte *****)ppppppbVar18;
      param_2[0x2c] = (byte *****)local_260;
LAB_011bde28:
      pppppbVar8 = (byte *****)pppppbVar10[2];
      *(byte *)(param_2 + 0x17) = 0;
      param_2[0x12] = (byte *****)0x1;
      param_2[0x13] = pppppbVar8;
      param_2[0x14] = (byte *****)ppppppbVar18;
      param_2[0x15] = (byte *****)local_260;
      param_2[0x16] = pppppbVar10;
      *(byte *)((int)param_2 + 0x5d) = 1;
      local_254 = ppppppbVar18 + 6;
      if ((**local_254)[4] == (byte ***)0x0) {
LAB_011be480:
        if ((byte *****)0x1999999 < pppppbVar8) {
          uVar6 = 0;
          ppppppbVar11 = local_260;
LAB_011be494:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,ppppppbVar11);
        }
        ppppppbVar11 = (byte ******)((int)pppppbVar8 * 0x50);
        if (ppppppbVar11 == (byte ******)0x0) {
          pppppbVar12 = (byte *****)0x4;
          pppppbVar8 = (byte *****)0x0;
        }
        else {
          uVar6 = 4;
          pppppbVar12 = (byte *****)FUN_01298504(ppppppbVar11,4);
          if (pppppbVar12 == (byte *****)0x0) goto LAB_011be494;
        }
        param_2[0x18] = pppppbVar8;
LAB_011be4f0:
        ppppppbVar11 = param_2 + 0x18;
        param_2[0x19] = pppppbVar12;
        param_2[0x1a] = (byte *****)0x0;
        *(byte *)((int)param_2 + 0x5d) = 0;
        ppppbVar17 = pppppbVar10[2];
        if (ppppbVar17 != (byte ****)0x0) {
          ppppbVar3 = pppppbVar10[1];
          pppppbVar10 = param_2[0x1a];
          iVar13 = (int)pppppbVar10 * 0x50;
          ppppbVar16 = (byte ****)0x0;
          do {
            local_254 = (byte ******)ppppppbVar18[5];
            pppppbVar8 = ppppppbVar18[6];
            pppppbVar12 = ppppppbVar18[7];
            ppppppbVar9 = (byte ******)0x0;
            if (*ppppppbVar18 != (byte *****)0x0) {
              ppppppbVar9 = ppppppbVar18 + 1;
            }
            pppppbVar14 = ppppppbVar18[4];
            bVar2 = *(byte *)(ppppppbVar18 + 8);
            pppppbVar15 = (byte *****)((int)pppppbVar10 + (int)ppppbVar16);
            if (pppppbVar15 == *ppppppbVar11) {
              FUN_00a20f30(ppppppbVar11);
            }
            ppppbVar7 = (byte ****)((int)ppppbVar16 + 1);
            puVar5 = (undefined4 *)((int)param_2[0x19] + iVar13);
            *puVar5 = 1;
            puVar5[1] = 0;
            puVar5[2] = ppppbVar16;
            iVar13 = iVar13 + 0x50;
            puVar5[9] = (int)ppppbVar3 + (int)ppppbVar16;
            puVar5[5] = local_254;
            puVar5[6] = pppppbVar8;
            *(undefined1 *)(puVar5 + 0x13) = 0;
            puVar5[7] = pppppbVar12;
            puVar5[10] = local_260;
            *(byte *)(puVar5 + 8) = bVar2;
            puVar5[3] = ppppppbVar9;
            puVar5[4] = pppppbVar14;
            param_2[0x1a] = (byte *****)((int)pppppbVar15 + 1);
            ppppbVar16 = ppppbVar7;
          } while (ppppbVar17 != ppppbVar7);
        }
        local_38 = (byte ******)*ppppppbVar11;
        local_34 = (byte ******)param_2[0x19];
        local_30 = (byte ******)param_2[0x1a];
        FUN_01172554(&local_240);
        local_e8 = local_240;
        local_e4 = local_23c;
        local_e0 = local_238;
        local_dc = local_234;
        local_d8 = local_230;
        local_d4 = local_22c;
        local_d0 = local_228;
        ppppppbStack_cc = local_224;
        ppppppbStack_c8 = local_220;
        local_c4 = local_21c;
        ppppppbStack_c0 = local_218;
        ppppppbStack_bc = local_214;
        ppppppbStack_b8 = ppppppbStack_210;
        local_b4 = local_20c;
        param_2[0x1c] = (byte *****)local_240;
        param_2[0x1d] = (byte *****)local_23c;
        param_2[0x1e] = (byte *****)local_238;
        param_2[0x1f] = (byte *****)local_234;
        param_2[0x20] = (byte *****)local_230;
        param_2[0x21] = (byte *****)local_22c;
        param_2[0x22] = (byte *****)local_228;
        param_2[0x23] = (byte *****)local_224;
        param_2[0x24] = (byte *****)local_220;
        param_2[0x25] = (byte *****)local_21c;
        param_2[0x26] = (byte *****)local_218;
        param_2[0x27] = (byte *****)local_214;
        param_2[0x28] = (byte *****)ppppppbStack_210;
        param_2[0x29] = (byte *****)local_20c;
        goto LAB_011be65c;
      }
LAB_011bde6c:
      if ((byte *****)0x690690 < pppppbVar8) {
        uVar6 = 0;
LAB_011bde80:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,ppppppbVar11);
      }
      ppppppbVar11 = (byte ******)((int)pppppbVar8 * 0x138);
      if (ppppppbVar11 == (byte ******)0x0) {
        pppppbVar12 = (byte *****)0x4;
        pppppbVar8 = (byte *****)0x0;
      }
      else {
        pppppbVar12 = (byte *****)FUN_01298504(ppppppbVar11,4);
        uVar6 = 4;
        if (pppppbVar12 == (byte *****)0x0) goto LAB_011bde80;
      }
      param_2[0x18] = pppppbVar8;
LAB_011be160:
      param_2[0x19] = pppppbVar12;
      param_2[0x1a] = (byte *****)0x0;
      *(byte *)((int)param_2 + 0x5d) = 0;
      ppppppbVar11 = (byte ******)pppppbVar10[2];
      if (ppppppbVar11 != (byte ******)0x0) {
        ppppbVar17 = pppppbVar10[1];
        ppppppbVar9 = (byte ******)0x0;
        puVar5 = (undefined4 *)((uint)&local_240 | 4);
        do {
          if (*ppppppbVar18 == (byte *****)0x1) {
            local_e8 = (byte ******)ppppppbVar18[1];
            local_e4 = (byte ******)ppppppbVar18[2];
            local_e0 = (byte ******)ppppppbVar18[3];
          }
          local_240 = (byte ******)(uint)(*ppppppbVar18 == (byte *****)0x1);
          local_230 = (byte ******)ppppppbVar18[4];
          local_22c = (byte ******)ppppppbVar18[5];
          local_218 = (byte ******)((int)ppppppbVar9 + (int)ppppbVar17);
          local_224 = (byte ******)ppppppbVar18[7];
          bVar2 = *(byte *)(ppppppbVar18 + 8);
          local_228 = (byte ******)*local_254;
          *puVar5 = local_e8;
          puVar5[1] = local_e4;
          puVar5[2] = local_e0;
          pppppbVar10 = param_2[0x1a];
          local_10c = 0;
          local_220 = (byte ******)CONCAT31(local_220._1_3_,bVar2);
          local_21c = local_260;
          local_214 = ppppppbVar9;
          if (pppppbVar10 == param_2[0x18]) {
            FUN_00f9d6bc(param_2 + 0x18);
          }
          ppppppbVar9 = (byte ******)((int)ppppppbVar9 + 1);
          FUN_01bed4e2(param_2[0x19] + (int)pppppbVar10 * 0x4e,&local_240,0x138);
          param_2[0x1a] = (byte *****)((int)pppppbVar10 + 1);
        } while (ppppppbVar11 != ppppppbVar9);
      }
      local_38 = (byte ******)param_2[0x18];
      local_34 = (byte ******)param_2[0x19];
      local_30 = (byte ******)param_2[0x1a];
      FUN_01172b54(&local_240);
      local_e8 = local_240;
      local_e4 = local_23c;
      local_e0 = local_238;
      local_dc = local_234;
      local_d8 = local_230;
      local_d4 = local_22c;
      local_d0 = local_228;
      ppppppbStack_cc = local_224;
      ppppppbStack_c8 = local_220;
      local_c4 = local_21c;
      ppppppbStack_c0 = local_218;
      ppppppbStack_bc = local_214;
      ppppppbStack_b8 = ppppppbStack_210;
      local_b4 = local_20c;
      param_2[0x1c] = (byte *****)local_240;
      param_2[0x1d] = (byte *****)local_23c;
      param_2[0x1e] = (byte *****)local_238;
      param_2[0x1f] = (byte *****)local_234;
      param_2[0x20] = (byte *****)local_230;
      param_2[0x21] = (byte *****)local_22c;
      param_2[0x22] = (byte *****)local_228;
      param_2[0x23] = (byte *****)local_224;
      param_2[0x24] = (byte *****)local_220;
      param_2[0x25] = (byte *****)local_21c;
      param_2[0x26] = (byte *****)local_218;
      param_2[0x27] = (byte *****)local_214;
      param_2[0x28] = (byte *****)ppppppbStack_210;
      param_2[0x29] = (byte *****)local_20c;
switchD_011be404_caseD_3:
      FUN_0114996c(&local_240,param_2 + 0x1c,param_3);
      local_258 = local_22c;
      ppppppbVar11 = local_240;
      if (local_240 != (byte ******)&DAT_00000003) {
        local_25c = local_240;
        local_264 = local_23c;
        local_270 = local_230;
        local_268 = local_234;
        local_26c = local_238;
        local_108 = local_228;
        local_104 = local_224;
        local_100 = local_220;
        local_fc = local_21c;
        ppppppbStack_f8 = local_218;
        ppppppbStack_f4 = local_214;
        ppppppbStack_f0 = ppppppbStack_210;
        local_254 = local_208;
        local_244 = local_20c;
        FUN_011c796c(param_2 + 0x1c);
        if (ppppppbVar11 != (byte ******)0x2) {
          ppppppbVar11 = (byte ******)&local_fc;
          local_68 = local_108;
          ppppppbStack_64 = local_104;
          ppppppbStack_60 = local_100;
          goto LAB_011be748;
        }
        goto LAB_011be72c;
      }
      bVar2 = 3;
      goto LAB_011be688;
    case 3:
      param_2[4] = pppppbVar10;
      param_2[5] = pppppbVar8;
      *(byte *)(param_2 + 7) = 0;
LAB_011bd884:
      param_2[8] = pppppbVar8;
      param_2[6] = pppppbVar8;
      param_2[9] = pppppbVar10;
      *(byte *)(param_2 + 0xf) = 0;
LAB_011bd8a4:
      FUN_011a40e0(&local_240,pppppbVar8,"includeDeprecated",0x11,&LAB_00be3e38);
      ppppppbVar9 = local_238;
      ppppppbVar18 = local_23c;
      uVar1 = (undefined1)local_234;
      if (local_240 == (byte ******)0x2) {
        *(byte *)(param_2 + 0xe) = 0;
        uVar4 = (uint)local_234 & 1;
        pppppbVar10 = param_2[9];
        param_2[0xc] = pppppbVar10;
        local_68._0_3_ = (undefined3)((uint)local_234 >> 8);
        *(byte *)((int)param_2 + 0x39) = (byte)uVar4;
        param_2[0xd] = param_2[8];
LAB_011bd910:
        *ppppppbVar11 = pppppbVar10;
        param_2[0xb] = (byte *****)(uVar4 << 8);
        goto LAB_011bd918;
      }
      FUN_01bed4e2(&local_68,(int)&local_234 + 1,0x2f);
      local_38 = ppppppbVar18;
      local_34 = ppppppbVar9;
      local_30 = (byte ******)CONCAT31((int3)local_68,uVar1);
      FUN_01bed4e2(&local_230,(uint)&local_68 | 3,0x2c);
      *(byte *)(param_2 + 0xf) = 1;
      puVar5 = (undefined4 *)((uint)&local_240 | 4);
      pppppbVar10 = param_2[6];
      *puVar5 = local_38;
      puVar5[1] = local_34;
      puVar5[2] = local_30;
      FUN_009ed8c0(&local_e8,pppppbVar10,&local_240);
      if (local_e8 == (byte ******)0x2) {
        pppppbVar10 = param_2[6];
        goto LAB_011bda40;
      }
      local_25c = local_e8;
      local_264 = local_e4;
      local_270 = local_d8;
      local_258 = local_d4;
      local_268 = local_dc;
      local_26c = local_e0;
      local_88 = local_d0;
      ppppppbStack_84 = ppppppbStack_cc;
      ppppppbStack_80 = ppppppbStack_c8;
      local_7c = local_c4;
      ppppppbStack_78 = ppppppbStack_c0;
      ppppppbStack_74 = ppppppbStack_bc;
      ppppppbStack_70 = ppppppbStack_b8;
      local_248 = (byte ******)&DAT_00000001;
      local_244 = local_b4;
      local_204 = local_b0;
LAB_011be118:
      local_254 = param_2 + 7;
      local_260 = param_2 + 4;
      *(byte *)local_254 = 1;
      FUN_011a4ad0(local_260);
      unaff_r10 = local_270;
      local_254 = local_204;
      break;
    case 4:
      param_2[4] = pppppbVar10;
      *(byte *)(param_2 + 7) = 0;
      param_2[5] = pppppbVar8;
LAB_011bded4:
      param_2[8] = pppppbVar10;
      *(byte *)(param_2 + 0xf) = 0;
      param_2[9] = pppppbVar8;
      param_2[6] = pppppbVar8;
LAB_011bdeec:
      param_2[10] = pppppbVar10;
      *(byte *)(param_2 + 0xe) = 0;
      param_2[0xb] = pppppbVar8;
LAB_011bdefc:
      param_2[0xc] = pppppbVar10;
      param_2[0xd] = (byte *****)0x0;
LAB_011bdf08:
      local_244 = param_2 + 8;
      pppppbVar8 = param_2[6];
      bVar2 = *(byte *)(pppppbVar10[2] + 0x19);
      *(byte *)(param_2 + 0xf) = 1;
      *(byte *)(param_2 + 0xe) = 1;
      *(byte *)(param_2 + 0xd) = 1;
      *(byte *)(param_2 + 8) = bVar2;
      ppppppbVar18 = (byte ******)pppppbVar8[4];
      pppppbVar14 = (byte *****)pppppbVar8[5];
      unaff_r10 = (byte ******)pppppbVar8[6];
      pppppbVar15 = (byte *****)pppppbVar8[7];
      bVar2 = *(byte *)(pppppbVar8 + 8);
      local_26c = (byte ******)(uint)bVar2;
      local_25c = (byte ******)pppppbVar8[1];
      pppppbVar10 = (byte *****)pppppbVar8[2];
      pppppbVar12 = (byte *****)pppppbVar8[3];
      param_2[9] = (byte *****)*pppppbVar8;
      param_2[10] = (byte *****)local_25c;
      param_2[0xb] = pppppbVar10;
      param_2[0xc] = pppppbVar12;
      param_2[0xd] = (byte *****)(ppppppbVar18 + 8);
      param_2[0xe] = pppppbVar14;
      param_2[0xf] = (byte *****)unaff_r10;
      param_2[0x10] = pppppbVar15;
      *(byte *)(param_2 + 0x11) = bVar2;
      pppppbVar10 = (byte *****)pppppbVar8[4];
      *(byte *)(param_2 + 0x15) = 0;
      param_2[0x12] = (byte *****)local_244;
      param_2[0x13] = (byte *****)(param_2 + 9);
      param_2[0x14] = pppppbVar10;
      goto LAB_011bdf98;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21bbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21bbc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      pppppbVar10 = param_2[4];
      pppppbVar8 = param_2[5];
      goto LAB_011bd5e0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bbc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        pppppbVar10 = param_2[8];
        pppppbVar8 = param_2[9];
        goto LAB_011bd750;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xe)) {
      case 0:
        pppppbVar10 = param_2[10];
        goto LAB_011bd760;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      case 3:
        if (*(byte *)(param_2 + 0xd) != 0) {
          if (*(byte *)(param_2 + 0xd) == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bbc);
        }
        pppppbVar10 = param_2[0xc];
      }
      goto LAB_011bd76c;
    }
switchD_011bd5c0_caseD_4:
    local_254 = param_2 + 7;
    FUN_00be5ca4(&local_240,param_2 + 0x11);
    if (local_240 == (byte ******)0x2) {
      *(byte *)local_254 = 4;
      *param_1 = 2;
      bVar2 = 3;
      goto LAB_011be7fc;
    }
    goto LAB_011bdcb8;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      pppppbVar10 = param_2[4];
      pppppbVar8 = param_2[5];
      goto LAB_011bdbbc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bbc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        pppppbVar10 = param_2[8];
        pppppbVar8 = param_2[9];
        goto LAB_011bdbd4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xe)) {
      case 0:
        pppppbVar10 = param_2[10];
        goto LAB_011bdbe4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      case 3:
        if (*(byte *)(param_2 + 0xd) != 0) {
          if (*(byte *)(param_2 + 0xd) == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bbc);
        }
        pppppbVar10 = param_2[0xc];
      }
      goto LAB_011bdbf0;
    }
switchD_011bd588_caseD_4:
    local_254 = param_2 + 7;
    FUN_00be3ca4(&local_240,param_2 + 0x13);
    if (local_240 == (byte ******)0x2) {
      bVar2 = 4;
      *(byte *)local_254 = 4;
      *param_1 = 2;
      goto LAB_011be7fc;
    }
LAB_011bdcb8:
    local_254 = param_2 + 7;
    local_88 = local_224;
    ppppppbStack_84 = local_220;
    ppppppbStack_80 = local_21c;
    local_7c = local_218;
    ppppppbStack_78 = local_214;
    ppppppbStack_74 = ppppppbStack_210;
    ppppppbStack_70 = local_20c;
    *(byte *)local_254 = 1;
    local_264 = local_238;
    local_25c = local_23c;
    local_268 = local_230;
    local_258 = local_228;
    unaff_r10 = local_22c;
    local_254 = local_204;
    local_244 = local_208;
    local_26c = local_234;
    local_248 = local_240;
    break;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      pppppbVar10 = param_2[4];
      pppppbVar8 = param_2[5];
      goto LAB_011bdd2c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bbc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        pppppbVar10 = param_2[8];
        pppppbVar8 = param_2[9];
        goto LAB_011bdd48;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xe)) {
      case 0:
        pppppbVar10 = param_2[10];
        goto LAB_011bdd58;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      case 3:
        if (((uint)param_2[0xd] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bbc);
        }
        pppppbVar10 = param_2[0xc];
      }
      goto LAB_011bdd64;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x31)) {
    case 0:
      ppppppbVar9 = (byte ******)param_2[0x2e];
      ppppppbVar18 = (byte ******)param_2[0x2f];
      local_260 = (byte ******)param_2[0x30];
      goto LAB_011bde08;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x2d)) {
    case 0:
      pppppbVar10 = param_2[0x2a];
      ppppppbVar18 = (byte ******)param_2[0x2b];
      local_260 = (byte ******)param_2[0x2c];
      goto LAB_011bde28;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x17)) {
    case 0:
      *(byte *)((int)param_2 + 0x5d) = 1;
      pppppbVar8 = param_2[0x13];
      ppppppbVar18 = (byte ******)param_2[0x14];
      local_254 = ppppppbVar18 + 6;
      local_260 = (byte ******)param_2[0x15];
      pppppbVar10 = param_2[0x16];
      if ((**local_254)[4] != (byte ***)0x0) {
        if (param_2[0x12] != (byte *****)0x0) goto LAB_011bde6c;
        param_2[0x18] = (byte *****)0x0;
        pppppbVar12 = (byte *****)0x4;
        goto LAB_011be160;
      }
      if (param_2[0x12] != (byte *****)0x0) goto LAB_011be480;
      param_2[0x18] = (byte *****)0x0;
      pppppbVar12 = (byte *****)0x4;
      goto LAB_011be4f0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case 3:
      goto switchD_011be404_caseD_3;
    case 4:
    }
LAB_011be65c:
    FUN_01152d78(&local_240,param_2 + 0x1c,*param_3);
    local_258 = local_22c;
    ppppppbVar11 = local_240;
    if (local_240 == (byte ******)&DAT_00000003) {
      bVar2 = 4;
LAB_011be688:
      local_278 = param_2 + 7;
      local_27c = param_2 + 0x2d;
      *(byte *)(param_2 + 0x17) = bVar2;
      *(byte *)(param_2 + 0x31) = 3;
      *(byte *)local_27c = 3;
      *(byte *)local_278 = 4;
      *param_1 = 2;
      bVar2 = 5;
      goto LAB_011be7fc;
    }
    local_25c = local_240;
    local_264 = local_23c;
    local_270 = local_230;
    local_268 = local_234;
    local_26c = local_238;
    local_a8 = local_228;
    ppppppbStack_a4 = local_224;
    ppppppbStack_a0 = local_220;
    local_9c = local_21c;
    ppppppbStack_98 = local_218;
    ppppppbStack_94 = local_214;
    ppppppbStack_90 = ppppppbStack_210;
    local_244 = local_20c;
    FUN_011c7aac(param_2 + 0x1c);
    if (ppppppbVar11 == (byte ******)0x2) {
LAB_011be72c:
      local_248 = (byte ******)0x0;
      local_258 = (byte ******)0x80000006;
      local_244 = param_2;
    }
    else {
      ppppppbVar11 = (byte ******)&local_9c;
      local_68 = local_a8;
      ppppppbStack_64 = ppppppbStack_a4;
      ppppppbStack_60 = ppppppbStack_a0;
      local_254 = local_208;
LAB_011be748:
      local_5c = (byte ******)*ppppppbVar11;
      ppppppbStack_58 = (byte ******)ppppppbVar11[1];
      ppppppbStack_54 = (byte ******)ppppppbVar11[2];
      ppppppbStack_50 = (byte ******)ppppppbVar11[3];
      local_248 = (byte ******)&DAT_00000001;
    }
    local_278 = param_2 + 7;
    local_27c = param_2 + 0x2d;
    local_280 = param_2 + 0x12;
    *(undefined2 *)(param_2 + 0x17) = 1;
    FUN_011c7c0c(local_280);
    *(byte *)(param_2 + 0x31) = 1;
    *(byte *)local_27c = 1;
    local_88 = local_68;
    ppppppbStack_84 = ppppppbStack_64;
    ppppppbStack_80 = ppppppbStack_60;
    local_7c = local_5c;
    ppppppbStack_78 = ppppppbStack_58;
    ppppppbStack_74 = ppppppbStack_54;
    ppppppbStack_70 = ppppppbStack_50;
    *(byte *)local_278 = 1;
    unaff_r10 = local_270;
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      pppppbVar10 = param_2[4];
      pppppbVar8 = param_2[5];
      goto LAB_011bd884;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bbc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        pppppbVar8 = param_2[8];
        goto LAB_011bd8a4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xe)) {
      case 0:
        uVar4 = (uint)*(byte *)((int)param_2 + 0x39);
        pppppbVar10 = param_2[0xc];
        goto LAB_011bd910;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      case 3:
        if (*(byte *)(param_2 + 0xb) != 0) {
          if (*(byte *)(param_2 + 0xb) == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21bbc);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bbc);
        }
        pppppbVar10 = *ppppppbVar11;
      }
LAB_011bd918:
      local_234 = (byte ******)*pppppbVar10;
      local_230 = (byte ******)pppppbVar10[1];
      local_240 = (byte ******)pppppbVar10[2][5];
      local_238 = (byte ******)((int)param_2 + 0x2d);
      local_23c = local_240 + (int)pppppbVar10[2][6] * 0x1b;
      FUN_00df1050(&local_108,&local_240);
      *(byte *)(param_2 + 0xb) = 1;
      if (local_108 != (byte ******)&DAT_80000000) {
        local_34 = local_104;
        local_38 = local_108;
        local_30 = local_100;
        puVar5 = (undefined4 *)((uint)&local_e8 | 4);
        *(byte *)(param_2 + 0xe) = 1;
        *(byte *)(param_2 + 0xf) = 1;
        pppppbVar10 = param_2[6];
        *puVar5 = local_108;
        puVar5[1] = local_104;
        puVar5[2] = local_100;
LAB_011bda40:
        param_2[8] = (byte *****)local_e4;
        param_2[9] = (byte *****)local_e0;
        param_2[10] = (byte *****)local_dc;
        ppppbVar17 = pppppbVar10[4];
        pppppbVar20 = (byte *****)pppppbVar10[5];
        pppppbVar15 = (byte *****)pppppbVar10[6];
        pppppbVar19 = (byte *****)pppppbVar10[7];
        bVar2 = *(byte *)(pppppbVar10 + 8);
        pppppbVar8 = (byte *****)pppppbVar10[1];
        pppppbVar12 = (byte *****)pppppbVar10[2];
        pppppbVar14 = (byte *****)pppppbVar10[3];
        param_2[0xb] = (byte *****)*pppppbVar10;
        param_2[0xc] = pppppbVar8;
        param_2[0xd] = pppppbVar12;
        param_2[0xe] = pppppbVar14;
        param_2[0xf] = (byte *****)(ppppbVar17 + 8);
        param_2[0x10] = pppppbVar20;
        param_2[0x11] = pppppbVar15;
        param_2[0x12] = pppppbVar19;
        *(byte *)(param_2 + 0x13) = bVar2;
        pppppbVar10 = (byte *****)pppppbVar10[4];
        *(byte *)(param_2 + 0x2f) = 0;
        param_2[0x2c] = (byte *****)(param_2 + 8);
        param_2[0x2d] = (byte *****)(param_2 + 0xb);
        param_2[0x2e] = pppppbVar10;
        goto switchD_011bd548_caseD_4;
      }
      bVar2 = 3;
      *(byte *)(param_2 + 0xf) = 3;
      *(byte *)(param_2 + 0xe) = 3;
      break;
    case 4:
switchD_011bd548_caseD_4:
      FUN_011a4358(&local_240,param_2 + 0x14,param_3);
      local_248 = local_240;
      if (local_240 != (byte ******)0x2) {
        local_25c = local_23c;
        local_264 = local_238;
        local_270 = local_22c;
        local_268 = local_230;
        local_26c = local_234;
        local_a8 = local_224;
        ppppppbStack_a4 = local_220;
        ppppppbStack_a0 = local_21c;
        local_9c = local_218;
        ppppppbStack_98 = local_214;
        ppppppbStack_94 = ppppppbStack_210;
        ppppppbStack_90 = local_20c;
        if (*(byte *)(param_2 + 0x2f) == 3) {
          FUN_011c5fe8(param_2 + 0x14);
        }
        local_258 = local_228;
        local_88 = local_a8;
        ppppppbStack_84 = ppppppbStack_a4;
        ppppppbStack_80 = ppppppbStack_a0;
        local_7c = local_9c;
        ppppppbStack_78 = ppppppbStack_98;
        ppppppbStack_74 = ppppppbStack_94;
        ppppppbStack_70 = ppppppbStack_90;
        FUN_0132b958(param_2[8],param_2[9],4,0xc);
        local_244 = local_208;
        goto LAB_011be118;
      }
      bVar2 = 4;
    }
    local_254 = param_2 + 7;
    *(byte *)local_254 = bVar2;
    *param_1 = 2;
    bVar2 = 6;
    goto LAB_011be7fc;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 7)) {
    case 0:
      pppppbVar10 = param_2[4];
      pppppbVar8 = param_2[5];
      goto LAB_011bded4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bbc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xf)) {
      case 0:
        pppppbVar10 = param_2[8];
        pppppbVar8 = param_2[9];
        goto LAB_011bdeec;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0xe)) {
      case 0:
        pppppbVar10 = param_2[10];
        goto LAB_011bdefc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bbc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bbc);
      case 3:
        if (((uint)param_2[0xd] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bbc);
        }
        pppppbVar10 = param_2[0xc];
      }
      goto LAB_011bdf08;
    case 4:
      if (*(byte *)(param_2 + 0x15) != 0) {
        if (*(byte *)(param_2 + 0x15) == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      local_244 = (byte ******)param_2[0x12];
      local_26c = unaff_lr;
    }
LAB_011bdf98:
    local_264 = (byte ******)(uint)*(byte *)local_244;
    *(byte *)(param_2 + 7) = 1;
    local_258 = (byte ******)0x80000003;
    *(byte *)(param_2 + 0x15) = 1;
    local_268 = (byte ******)0x0;
    local_248 = (byte ******)0x0;
    local_254 = ppppppbVar18;
  }
  param_1[5] = unaff_r10;
  *param_1 = local_248;
  param_1[1] = local_25c;
  param_1[3] = local_26c;
  param_1[4] = local_268;
  param_1[2] = local_264;
  param_1[6] = local_258;
  param_1[7] = local_88;
  param_1[8] = ppppppbStack_84;
  param_1[9] = ppppppbStack_80;
  param_1[10] = local_7c;
  param_1[0xb] = ppppppbStack_78;
  param_1[0xc] = ppppppbStack_74;
  param_1[0xd] = ppppppbStack_70;
  bVar2 = 1;
  param_1[0xe] = local_244;
  param_1[0xf] = local_254;
LAB_011be7fc:
  *(byte *)(param_2 + 3) = bVar2;
  return;
}

