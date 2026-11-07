// FUN_011c5684 @ 011c5684 size=2044 calls_out=15 calls_in=1
// strings: 

void FUN_011c5684(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int unaff_r5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *unaff_r10;
  int *piVar12;
  int in_r12;
  int *local_324;
  int *local_310;
  int *local_30c;
  int local_308;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  int local_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  int *local_2d0 [4];
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int local_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int *local_298;
  int *local_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int local_280;
  int local_27c;
  int local_278;
  int iStack_274;
  int iStack_270;
  int local_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int local_25c;
  int *local_258;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  int local_200;
  int *local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e8;
  undefined1 local_1e4;
  int local_128;
  int local_124;
  uint local_120;
  int *local_11c;
  int iStack_118;
  int iStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100;
  undefined1 local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x20]) {
  case '\0':
    piVar12 = (int *)param_2[0x1c];
    piVar4 = (int *)param_2[0x1d];
    param_2[0x1f] = (int)piVar4;
    if (*piVar12 != -0x80000000) {
      *(undefined1 *)(param_2 + 0x1b) = 0;
      local_308 = param_2[0x1e];
      param_2[0x18] = (int)piVar12;
      param_2[0x1a] = local_308;
      param_2[0x19] = (int)piVar4;
LAB_011c5728:
      puVar6 = (undefined *)piVar12[2];
      param_2[2] = (int)piVar4;
      param_2[3] = local_308;
      param_2[4] = (int)piVar12;
      *param_2 = 1;
      param_2[1] = (int)puVar6;
      *(undefined1 *)(param_2 + 5) = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      local_310 = piVar4 + 6;
      if (*(int *)(*(int *)*local_310 + 0x10) != 0) {
LAB_011c5768:
        piVar8 = param_2 + 5;
        if (&UNK_00505050 < puVar6) {
          uVar10 = 0;
LAB_011c577c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar10,piVar8);
        }
        piVar8 = (int *)((int)puVar6 * 0x198);
        if (piVar8 == (int *)0x0) {
          iVar5 = 8;
          puVar6 = (undefined *)0x0;
        }
        else {
          uVar10 = 8;
          iVar5 = FUN_01298504(piVar8,8);
          if (iVar5 == 0) goto LAB_011c577c;
        }
        param_2[6] = (int)puVar6;
LAB_011c5854:
        param_2[7] = iVar5;
        param_2[8] = 0;
        *(undefined1 *)((int)param_2 + 0x15) = 0;
        if (piVar12[2] != 0) {
          iVar9 = piVar12[1];
          iVar7 = 0;
          iVar5 = piVar12[2] * 0x18;
          do {
            if (*piVar4 == 1) {
              local_c8 = (int *)piVar4[1];
              iStack_c4 = piVar4[2];
              iStack_c0 = piVar4[3];
            }
            local_120 = (uint)(*piVar4 == 1);
            local_110 = piVar4[4];
            local_10c = piVar4[5];
            local_108 = *local_310;
            local_104 = piVar4[7];
            local_100 = (undefined1)piVar4[8];
            local_11c = local_c8;
            iStack_118 = iStack_c4;
            iStack_114 = iStack_c0;
            local_fc = 0;
            iVar11 = param_2[8];
            local_200 = iVar7;
            local_128 = local_308;
            local_124 = iVar9;
            if (iVar11 == param_2[6]) {
              FUN_00f9d59c(param_2 + 6);
            }
            iVar9 = iVar9 + 0x18;
            FUN_01bed4e2(iVar11 * 0x198 + param_2[7],&local_290,0x198);
            param_2[8] = iVar11 + 1;
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + -0x18;
            local_30c = piVar4;
          } while (iVar5 != 0);
        }
        local_90 = param_2[6];
        iStack_8c = param_2[7];
        iStack_88 = param_2[8];
        FUN_0117686c(&local_290);
        local_c8 = local_290;
        iStack_c4 = iStack_28c;
        iStack_c0 = iStack_288;
        iStack_bc = iStack_284;
        local_b8 = local_280;
        iStack_b4 = local_27c;
        iStack_b0 = local_278;
        iStack_ac = iStack_274;
        iStack_a8 = iStack_270;
        local_a4 = local_26c;
        iStack_a0 = iStack_268;
        iStack_9c = iStack_264;
        iStack_98 = iStack_260;
        iStack_94 = local_25c;
        param_2[10] = (int)local_290;
        param_2[0xb] = iStack_28c;
        param_2[0xc] = iStack_288;
        param_2[0xd] = iStack_284;
        param_2[0xe] = local_280;
        param_2[0xf] = local_27c;
        param_2[0x10] = local_278;
        param_2[0x11] = iStack_274;
        param_2[0x12] = iStack_270;
        param_2[0x13] = local_26c;
        param_2[0x14] = iStack_268;
        param_2[0x15] = iStack_264;
        param_2[0x16] = iStack_260;
        param_2[0x17] = local_25c;
        goto switchD_011c579c_caseD_3;
      }
LAB_011c5a9c:
      piVar8 = param_2 + 5;
      if (&UNK_00ba2e8b < puVar6) {
        uVar10 = 0;
LAB_011c5ab0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,piVar8);
      }
      piVar8 = (int *)((int)puVar6 * 0xb0);
      if (piVar8 == (int *)0x0) {
        iVar5 = 8;
        puVar6 = (undefined *)0x0;
      }
      else {
        uVar10 = 8;
        iVar5 = FUN_01298504(piVar8,8);
        if (iVar5 == 0) goto LAB_011c5ab0;
      }
      param_2[6] = (int)puVar6;
      local_30c = piVar4;
LAB_011c5b0c:
      param_2[7] = iVar5;
      param_2[8] = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      if (piVar12[2] != 0) {
        iVar7 = piVar12[1];
        iVar9 = 0;
        iVar5 = piVar12[2] * 0x18;
        do {
          local_1ec = local_30c[7];
          iVar11 = param_2[8];
          local_1f8 = local_30c[4];
          local_1fc = (int *)0x0;
          if (*local_30c != 0) {
            local_1fc = local_30c + 1;
          }
          local_1f4 = local_30c[5];
          local_1f0 = local_30c[6];
          local_1e8 = (undefined1)local_30c[8];
          local_204 = 0;
          local_1e4 = 0;
          local_208 = 1;
          local_20c = local_308;
          local_210 = iVar7;
          local_200 = iVar9;
          if (iVar11 == param_2[6]) {
            FUN_00a20d80(param_2 + 6);
          }
          iVar7 = iVar7 + 0x18;
          FUN_01bed4e2(iVar11 * 0xb0 + param_2[7],&local_290,0xb0);
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + -0x18;
          param_2[8] = iVar11 + 1;
        } while (iVar5 != 0);
      }
      local_90 = param_2[6];
      iStack_8c = param_2[7];
      iStack_88 = param_2[8];
      FUN_011755b8(&local_290);
      local_c8 = local_290;
      iStack_c4 = iStack_28c;
      iStack_c0 = iStack_288;
      iStack_bc = iStack_284;
      local_b8 = local_280;
      iStack_b4 = local_27c;
      iStack_b0 = local_278;
      iStack_ac = iStack_274;
      iStack_a8 = iStack_270;
      local_a4 = local_26c;
      iStack_a0 = iStack_268;
      iStack_9c = iStack_264;
      iStack_98 = iStack_260;
      iStack_94 = local_25c;
      param_2[10] = (int)local_290;
      param_2[0xb] = iStack_28c;
      param_2[0xc] = iStack_288;
      param_2[0xd] = iStack_284;
      param_2[0xe] = local_280;
      param_2[0xf] = local_27c;
      param_2[0x10] = local_278;
      param_2[0x11] = iStack_274;
      param_2[0x12] = iStack_270;
      param_2[0x13] = local_26c;
      param_2[0x14] = iStack_268;
      param_2[0x15] = iStack_264;
      param_2[0x16] = iStack_260;
      param_2[0x17] = local_25c;
switchD_011c579c_caseD_4:
      FUN_011635cc(&local_290,param_2 + 10,param_3);
      if (local_290 != (int *)&DAT_00000003) {
        puVar3 = (undefined4 *)((uint)&local_290 | 4);
        local_60 = *puVar3;
        uStack_5c = puVar3[1];
        uStack_58 = puVar3[2];
        local_308 = local_280;
        local_80 = local_278;
        iStack_7c = iStack_274;
        iStack_78 = iStack_270;
        local_74 = local_26c;
        iStack_70 = iStack_268;
        iStack_6c = iStack_264;
        iStack_68 = iStack_260;
        local_30c = local_258;
        FUN_011c634c(param_2 + 10);
        local_30 = local_60;
        uStack_2c = uStack_5c;
        uStack_28 = uStack_58;
        if (local_290 != (int *)0x2) {
          local_50 = local_80;
          iStack_4c = iStack_7c;
          iStack_48 = iStack_78;
          local_44 = local_74;
          iStack_40 = iStack_70;
          iStack_3c = iStack_6c;
          iStack_38 = iStack_68;
          goto LAB_011c5d30;
        }
        goto LAB_011c5cfc;
      }
      uVar2 = 4;
      goto LAB_011c5c78;
    }
    iVar5 = -0x80000000;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21c3c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21c3c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      piVar12 = (int *)param_2[0x18];
      piVar4 = (int *)param_2[0x19];
      local_308 = param_2[0x1a];
      goto LAB_011c5728;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[5]) {
    case '\0':
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      piVar4 = (int *)param_2[2];
      local_308 = param_2[3];
      piVar12 = (int *)param_2[4];
      puVar6 = (undefined *)param_2[1];
      local_310 = piVar4 + 6;
      if (*(int *)(*(int *)*local_310 + 0x10) == 0) {
        if (*param_2 != 0) goto LAB_011c5a9c;
        param_2[6] = 0;
        iVar5 = 8;
        local_30c = piVar4;
        goto LAB_011c5b0c;
      }
      if (*param_2 != 0) goto LAB_011c5768;
      param_2[6] = 0;
      iVar5 = 8;
      goto LAB_011c5854;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x04':
      goto switchD_011c579c_caseD_4;
    }
switchD_011c579c_caseD_3:
    FUN_01153a60(&local_290,param_2 + 10,param_3);
    if (local_290 == (int *)&DAT_00000003) {
      uVar2 = 3;
LAB_011c5c78:
      *(undefined1 *)(param_2 + 5) = uVar2;
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x1b) = 3;
      *param_1 = 2;
      goto LAB_011c5e44;
    }
    puVar3 = (undefined4 *)((uint)&local_290 | 4);
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    local_308 = local_280;
    local_f8 = local_278;
    iStack_f4 = iStack_274;
    iStack_f0 = iStack_270;
    local_ec = local_26c;
    iStack_e8 = iStack_268;
    iStack_e4 = iStack_264;
    iStack_e0 = iStack_260;
    FUN_011c620c(param_2 + 10);
    local_30 = local_d8;
    uStack_2c = uStack_d4;
    uStack_28 = uStack_d0;
    if (local_290 == (int *)0x2) {
LAB_011c5cfc:
      bVar1 = false;
      in_r12 = local_25c;
      iVar5 = -0x7ffffffa;
      piVar12 = param_2 + 10;
    }
    else {
      local_30c = local_258;
      local_50 = local_f8;
      iStack_4c = iStack_f4;
      iStack_48 = iStack_f0;
      local_44 = local_ec;
      iStack_40 = iStack_e8;
      iStack_3c = iStack_e4;
      iStack_38 = iStack_e0;
LAB_011c5d30:
      bVar1 = true;
      in_r12 = local_25c;
      iVar5 = local_27c;
      piVar12 = local_290;
    }
    local_324 = param_2 + 0x1b;
    *(undefined2 *)(param_2 + 5) = 1;
    FUN_011c5fe8();
    *(undefined1 *)local_324 = 1;
    local_2e0 = local_30;
    uStack_2dc = uStack_2c;
    uStack_2d8 = uStack_28;
    local_300 = local_50;
    iStack_2fc = iStack_4c;
    iStack_2f8 = iStack_48;
    local_2f4 = local_44;
    iStack_2f0 = iStack_40;
    iStack_2ec = iStack_3c;
    iStack_2e8 = iStack_38;
    unaff_r5 = local_308;
    unaff_r10 = local_30c;
    if (bVar1) {
      puVar3 = (undefined4 *)((uint)local_2d0 | 4);
      *puVar3 = local_30;
      puVar3[1] = uStack_2c;
      puVar3[2] = uStack_28;
      local_2c0 = local_308;
      local_2b8 = local_50;
      iStack_2b4 = iStack_4c;
      iStack_2b0 = iStack_48;
      local_2ac = local_44;
      iStack_2a8 = iStack_40;
      iStack_2a4 = iStack_3c;
      iStack_2a0 = iStack_38;
      local_298 = local_30c;
      local_2d0[0] = piVar12;
      local_2bc = iVar5;
      FUN_00a20afc(*(undefined4 *)(param_2[0x1f] + 0x18));
      iVar5 = -0x80000000;
    }
  }
  *param_1 = 0;
  param_1[1] = piVar12;
  param_1[2] = local_2e0;
  param_1[3] = uStack_2dc;
  param_1[4] = uStack_2d8;
  param_1[5] = unaff_r5;
  param_1[6] = iVar5;
  param_1[7] = local_300;
  param_1[8] = iStack_2fc;
  param_1[9] = iStack_2f8;
  param_1[10] = local_2f4;
  param_1[0xb] = iStack_2f0;
  param_1[0xc] = iStack_2ec;
  param_1[0xd] = iStack_2e8;
  param_1[0xe] = in_r12;
  param_1[0xf] = unaff_r10;
  uVar2 = 1;
LAB_011c5e44:
  *(undefined1 *)(param_2 + 0x20) = uVar2;
  return;
}

