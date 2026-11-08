// FUN_00be424c @ 00be424c size=1664 calls_out=14 calls_in=1
// strings: 

void FUN_00be424c(uint *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  int unaff_r6;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int *local_2bc;
  int *local_2b8;
  int local_2b4;
  int *local_2ac;
  uint local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  int iStack_28c;
  int iStack_288;
  int local_284;
  int local_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  uint uStack_270;
  int local_228;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  int local_218;
  int *local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200;
  undefined1 local_1fc;
  int local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118;
  undefined1 local_114;
  uint local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  uint local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1b]) {
  case '\0':
    iVar9 = param_2[0x18];
    local_2ac = (int *)param_2[0x19];
    local_2b4 = param_2[0x1a];
    puVar7 = *(undefined **)(iVar9 + 8);
    param_2[3] = local_2b4;
    *param_2 = 1;
    param_2[1] = (int)puVar7;
    param_2[2] = (int)local_2ac;
    param_2[4] = iVar9;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    local_2b8 = local_2ac + 6;
    if (*(int *)(*(int *)*local_2b8 + 0x10) != 0) {
LAB_00be42d8:
      if (&UNK_00505050 < puVar7) {
        uVar4 = 0;
LAB_00be42ec:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,unaff_r6);
      }
      unaff_r6 = (int)puVar7 * 0x198;
      if (unaff_r6 == 0) {
        iVar2 = 8;
        puVar7 = (undefined *)0x0;
      }
      else {
        uVar4 = 8;
        iVar2 = FUN_01298504(unaff_r6,8);
        if (iVar2 == 0) goto LAB_00be42ec;
      }
      param_2[6] = (int)puVar7;
LAB_00be43cc:
      param_2[7] = iVar2;
      param_2[8] = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      if (*(int *)(iVar9 + 8) != 0) {
        iVar2 = *(int *)(iVar9 + 4);
        iVar5 = 0;
        iVar9 = *(int *)(iVar9 + 8) * 0xc;
        do {
          if (*local_2ac == 1) {
            local_d8 = local_2ac[1];
            iStack_d4 = local_2ac[2];
            iStack_d0 = local_2ac[3];
          }
          local_138 = (uint)(*local_2ac == 1);
          local_128 = local_2ac[4];
          local_124 = local_2ac[5];
          local_11c = local_2ac[7];
          local_118 = (undefined1)local_2ac[8];
          local_120 = *local_2b8;
          local_134 = local_d8;
          iStack_130 = iStack_d4;
          iStack_12c = iStack_d0;
          local_114 = 0;
          iVar8 = param_2[8];
          local_140 = local_2b4;
          local_218 = iVar5;
          local_13c = iVar2;
          if (iVar8 == param_2[6]) {
            FUN_00f9d59c(param_2 + 6);
          }
          iVar2 = iVar2 + 0xc;
          FUN_01bed4e2(iVar8 * 0x198 + param_2[7],&local_2a8,0x198);
          iVar5 = iVar5 + 1;
          iVar9 = iVar9 + -0xc;
          param_2[8] = iVar8 + 1;
        } while (iVar9 != 0);
      }
      local_a0 = param_2[6];
      iStack_9c = param_2[7];
      iStack_98 = param_2[8];
      FUN_011712dc(&local_2a8);
      local_d8 = local_2a8;
      iStack_d4 = iStack_2a4;
      iStack_d0 = iStack_2a0;
      iStack_cc = iStack_29c;
      local_c8 = local_298;
      uStack_c4 = local_294;
      uStack_c0 = local_290;
      iStack_bc = iStack_28c;
      iStack_b8 = iStack_288;
      local_b4 = local_284;
      iStack_b0 = local_280;
      iStack_ac = iStack_27c;
      iStack_a8 = iStack_278;
      iStack_a4 = iStack_274;
      param_2[10] = local_2a8;
      param_2[0xb] = iStack_2a4;
      param_2[0xc] = iStack_2a0;
      param_2[0xd] = iStack_29c;
      param_2[0xe] = local_298;
      param_2[0xf] = local_294;
      param_2[0x10] = local_290;
      param_2[0x11] = iStack_28c;
      param_2[0x12] = iStack_288;
      param_2[0x13] = local_284;
      param_2[0x14] = local_280;
      param_2[0x15] = iStack_27c;
      param_2[0x16] = iStack_278;
      param_2[0x17] = iStack_274;
      goto LAB_00be454c;
    }
LAB_00be45c8:
    if (&UNK_00ba2e8b < puVar7) {
      uVar4 = 0;
LAB_00be45dc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,unaff_r6);
    }
    unaff_r6 = (int)puVar7 * 0xb0;
    if (unaff_r6 == 0) {
      iVar2 = 8;
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar4 = 8;
      iVar2 = FUN_01298504(unaff_r6,8);
      if (iVar2 == 0) goto LAB_00be45dc;
    }
    param_2[6] = (int)puVar7;
LAB_00be4660:
    local_2bc = param_2 + 6;
    param_2[7] = iVar2;
    param_2[8] = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    if (*(int *)(iVar9 + 8) != 0) {
      iVar2 = *(int *)(iVar9 + 4);
      iVar5 = 0;
      iVar9 = *(int *)(iVar9 + 8) * 0xc;
      do {
        local_204 = local_2ac[7];
        iVar8 = param_2[8];
        local_210 = local_2ac[4];
        local_214 = (int *)0x0;
        if (*local_2ac != 0) {
          local_214 = local_2ac + 1;
        }
        local_20c = local_2ac[5];
        local_208 = *local_2b8;
        local_200 = (undefined1)local_2ac[8];
        local_220 = 1;
        local_21c = 0;
        local_1fc = 0;
        local_224 = local_2b4;
        local_228 = iVar2;
        local_218 = iVar5;
        if (iVar8 == param_2[6]) {
          FUN_00a20d80(local_2bc);
        }
        iVar2 = iVar2 + 0xc;
        FUN_01bed4e2(iVar8 * 0xb0 + param_2[7],&local_2a8,0xb0);
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + -0xc;
        param_2[8] = iVar8 + 1;
      } while (iVar9 != 0);
    }
    local_a0 = *local_2bc;
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    FUN_01174a74(&local_2a8);
    local_d8 = local_2a8;
    iStack_d4 = iStack_2a4;
    iStack_d0 = iStack_2a0;
    iStack_cc = iStack_29c;
    local_c8 = local_298;
    uStack_c4 = local_294;
    uStack_c0 = local_290;
    iStack_bc = iStack_28c;
    iStack_b8 = iStack_288;
    local_b4 = local_284;
    iStack_b0 = local_280;
    iStack_ac = iStack_27c;
    iStack_a8 = iStack_278;
    iStack_a4 = iStack_274;
    param_2[10] = local_2a8;
    param_2[0xb] = iStack_2a4;
    param_2[0xc] = iStack_2a0;
    param_2[0xd] = iStack_29c;
    param_2[0xe] = local_298;
    param_2[0xf] = local_294;
    param_2[0x10] = local_290;
    param_2[0x11] = iStack_28c;
    param_2[0x12] = iStack_288;
    param_2[0x13] = local_284;
    param_2[0x14] = local_280;
    param_2[0x15] = iStack_27c;
    param_2[0x16] = iStack_278;
    param_2[0x17] = iStack_274;
LAB_00be479c:
    FUN_01147aac(&local_2a8,param_2 + 10,param_3);
    if (local_2a8 != 3) {
      puVar3 = (uint *)((uint)&local_2a8 | 4);
      puVar6 = &local_68;
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      puVar3 = &local_90;
      local_2ac = (int *)local_298;
      local_90 = local_290;
      iStack_8c = iStack_28c;
      iStack_88 = iStack_288;
      iStack_84 = local_284;
      local_80 = local_280;
      iStack_7c = iStack_27c;
      iStack_78 = iStack_278;
      iStack_74 = iStack_274;
      uStack_70 = uStack_270;
      FUN_00bb15dc(param_2 + 10);
      goto LAB_00be4820;
    }
    uVar1 = 4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21bdc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21bdc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[5]) {
    case '\0':
      local_2ac = (int *)param_2[2];
      local_2b4 = param_2[3];
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      local_2b8 = local_2ac + 6;
      iVar9 = param_2[4];
      puVar7 = (undefined *)param_2[1];
      if (*(int *)(*(int *)*local_2b8 + 0x10) == 0) {
        if (*param_2 != 0) goto LAB_00be45c8;
        iVar2 = 8;
        param_2[6] = 0;
        goto LAB_00be4660;
      }
      if (*param_2 != 0) goto LAB_00be42d8;
      param_2[6] = 0;
      iVar2 = 8;
      goto LAB_00be43cc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00be479c;
    }
LAB_00be454c:
    FUN_01143af4(&local_2a8,param_2 + 10,param_3);
    if (local_2a8 != 3) {
      puVar3 = (uint *)((uint)&local_2a8 | 4);
      puVar6 = &local_e8;
      local_e8 = *puVar3;
      uStack_e4 = puVar3[1];
      uStack_e0 = puVar3[2];
      puVar3 = &local_110;
      local_2ac = (int *)local_298;
      local_110 = local_290;
      iStack_10c = iStack_28c;
      iStack_108 = iStack_288;
      iStack_104 = local_284;
      local_100 = local_280;
      iStack_fc = iStack_27c;
      iStack_f8 = iStack_278;
      iStack_f4 = iStack_274;
      uStack_f0 = uStack_270;
      FUN_00bb149c(param_2 + 10);
LAB_00be4820:
      if (local_2a8 != 2) {
        local_58 = *puVar3;
        uStack_54 = puVar3[1];
        uStack_50 = puVar3[2];
        uStack_4c = puVar3[3];
        local_48 = puVar3[4];
        uStack_44 = puVar3[5];
        uStack_40 = puVar3[6];
        uStack_3c = puVar3[7];
        uStack_38 = puVar3[8];
        local_30 = *puVar6;
        uStack_2c = puVar6[1];
        uStack_28 = puVar6[2];
      }
      else {
        local_30 = *puVar6;
        uStack_2c = puVar6[1];
        uStack_28 = puVar6[2];
        local_294 = 0x80000006;
        local_2ac = (int *)uStack_270;
      }
      *param_1 = (uint)(local_2a8 != 2);
      param_1[1] = local_2a8;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      param_1[2] = local_30;
      param_1[3] = uStack_2c;
      param_1[4] = uStack_28;
      param_1[5] = (uint)local_2ac;
      param_1[6] = local_294;
      param_1[7] = local_58;
      param_1[8] = uStack_54;
      param_1[9] = uStack_50;
      param_1[10] = uStack_4c;
      param_1[0xb] = local_48;
      param_1[0xc] = uStack_44;
      param_1[0xd] = uStack_40;
      param_1[0xe] = uStack_3c;
      param_1[0xf] = uStack_38;
      uVar1 = 1;
      *(undefined1 *)(param_2 + 5) = 1;
      FUN_00bb1450(param_2);
      goto LAB_00be48bc;
    }
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 5) = uVar1;
  uVar1 = 3;
  *param_1 = 2;
LAB_00be48bc:
  *(undefined1 *)(param_2 + 0x1b) = uVar1;
  return;
}

