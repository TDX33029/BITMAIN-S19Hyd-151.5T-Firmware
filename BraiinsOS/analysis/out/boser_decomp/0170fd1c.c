// FUN_0170fd1c @ 0170fd1c size=1640 calls_out=13 calls_in=2
// strings: max_retries_per_request hit | reqwest::retry | reqwest::retry

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0170fd1c(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  int local_1b0;
  int local_1ac;
  int local_1a4;
  int *local_1a0;
  undefined4 *local_198;
  char *local_180;
  undefined4 local_17c;
  char *local_178;
  int local_174;
  undefined *local_170;
  int *local_16c;
  undefined8 local_168;
  undefined4 *puStack_160;
  code *pcStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  code *pcStack_150;
  undefined4 uStack_14c;
  undefined2 local_148;
  uint local_140;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  code *pcStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  byte local_114;
  undefined2 local_113;
  undefined1 local_111;
  undefined8 local_110;
  undefined4 *local_108;
  undefined *local_104;
  undefined4 *local_100;
  undefined1 local_fc;
  undefined4 uStack_f8;
  undefined *puStack_f4;
  undefined4 uStack_f0;
  undefined *puStack_ec;
  undefined4 local_e8;
  code *pcStack_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined4 *local_d0;
  code *pcStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  code *local_bc;
  uint uStack_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 *local_38;
  code *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar12 = *(uint *)(param_2 + 0x14);
  if (uVar12 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = (**(code **)(*(int *)(param_2 + 0x1c) + 0xc))
                        (*(int *)(param_2 + 0x18) +
                         (*(int *)(*(int *)(param_2 + 0x1c) + 8) - 1U & 0xfffffff8) + 8,param_3);
    }
    local_e8 = (undefined4 *)CONCAT31(local_e8._1_3_,(char)iVar5);
    if (4 < DAT_01d51b00) {
      local_bc = FUN_012fbb44;
      local_174 = 0x15;
      local_17c = 0x15;
      local_178 = &DAT_0050d95f;
      local_180 = &DAT_0050d95f;
      local_170 = &DAT_01d19568;
      local_c0 = &local_e8;
      FUN_0193b350(&DAT_00580c59,&local_c0,5,&local_180);
    }
    if (iVar5 == 0) goto LAB_0170ff6c;
  }
  if (uVar12 < *(uint *)(param_2 + 0x10)) {
    if ((undefined4 *)param_3[0x22] != (undefined4 *)0x0) {
      local_1a0 = param_3 + 2;
      uVar17 = CONCAT44(&local_180,local_1a0);
      (**(code **)param_3[0x22])(&local_17c,param_3 + 0x25,param_3[0x23],param_3[0x24]);
      puVar13 = local_170;
      iVar5 = local_174;
      pcVar9 = local_178;
      uVar3 = local_17c;
      FUN_01413d40(&local_c0);
      uStack_f8 = uVar3;
      puStack_f4 = pcVar9;
      uStack_f0 = iVar5;
      puStack_ec = puVar13;
      FUN_01bed4e2(&local_180,&local_c0,0x88);
      bVar2 = *(byte *)(param_3 + 0x1b);
      puVar6 = param_1;
      if (8 < bVar2) {
        if (bVar2 == 9) {
          puVar13 = (undefined *)(uint)*(byte *)(param_3 + 0x1f);
          uVar17 = *(undefined8 *)(param_3 + 0x1c);
          local_c0 = (undefined4 *)
                     CONCAT22(CONCAT11(local_c0._3_1_,*(undefined1 *)((int)param_3 + 0x6f)),
                              *(undefined2 *)((int)param_3 + 0x6d));
          puVar6 = (undefined4 *)param_3[0x1e];
        }
        else {
          uVar17 = FUN_013d4df8(param_3[0x1c],param_3[0x1d]);
        }
      }
      local_e8 = (undefined4 *)
                 CONCAT22(CONCAT11(local_e8._3_1_,local_c0._2_1_),(undefined2)local_c0);
      if ((9 < local_114) && (local_110._4_4_ != 0)) {
        thunk_FUN_01be4678((undefined4)local_110);
      }
      uVar12 = (uint)*(byte *)(param_3 + 0x10);
      local_113 = (undefined2)local_e8;
      local_111 = local_e8._2_1_;
      local_114 = bVar2;
      local_108 = puVar6;
      local_104 = puVar13;
      if (uVar12 == 0) {
        uVar15 = 0;
      }
      else if (uVar12 == 2) {
        local_110 = uVar17;
        local_198 = (undefined4 *)FUN_014333b0();
        puVar6 = (undefined4 *)param_3[0x11];
        (**(code **)*puVar6)(&local_c0,puVar6 + 3,puVar6[1],puVar6[2]);
        uVar15 = 0;
        *local_198 = local_c0;
        local_198[1] = local_bc;
        local_198[2] = uStack_b8;
        local_198[3] = local_b4;
        uVar17 = local_110;
      }
      else {
        uVar15 = (uint)*(byte *)((int)param_3 + 0x41) << 8;
      }
      local_110 = uVar17;
      (**(code **)param_3[0x12])(&local_38,param_3 + 0x15,param_3[0x13],param_3[0x14]);
      (**(code **)param_3[0x16])(&local_c0,param_3 + 0x19,param_3[0x17],param_3[0x18]);
      local_b0 = CONCAT22(local_b0._2_2_,(short)param_3[0x1a]);
      local_d0 = local_38;
      pcStack_cc = pcStack_34;
      uStack_c8 = uStack_30;
      uStack_c4 = uStack_2c;
      local_e8 = local_c0;
      pcStack_e4 = local_bc;
      local_e0 = uStack_b8;
      local_dc = local_b4;
      uStack_d8 = local_b0;
      FUN_01435814(&local_140);
      local_13c = local_198;
      local_138 = local_d0;
      uStack_134 = pcStack_cc;
      uStack_130 = uStack_c8;
      uStack_12c = uStack_c4;
      puStack_128 = local_e8;
      pcStack_124 = pcStack_e4;
      uStack_120 = local_e0;
      iStack_11c = local_dc;
      uStack_118 = uStack_d8;
      local_fc = (undefined1)param_3[0x21];
      iVar5 = param_3[0xe];
      local_140 = uVar15 | uVar12;
      uVar17 = FUN_01ac635c(param_3[6],param_3[7]);
      FUN_0187b658(&local_e8,param_3[9],param_3[10]);
      FUN_017260a4(&local_c0,param_3[0xc],param_3[0xd]);
      if (*param_3 == 0) {
        pcVar9 = (char *)0x0;
      }
      else if (*param_3 == 2) {
        pcVar9 = (char *)0x2;
        local_1a4 = *local_1a0;
        local_1ac = param_3[3];
        local_1b0 = param_3[4];
        local_1a0 = (int *)param_3[5];
      }
      else {
        pcVar9 = (char *)0x1;
      }
      local_38 = local_e8;
      pcStack_34 = pcStack_e4;
      uStack_30 = local_e0;
      local_d0 = local_c0;
      pcStack_cc = local_bc;
      uStack_c8 = uStack_b8;
      FUN_017793c0(&local_180);
      local_178 = (char *)local_1a4;
      local_174 = local_1ac;
      local_170 = (undefined *)local_1b0;
      local_16c = local_1a0;
      local_17c = 0;
      puStack_160 = local_38;
      pcStack_15c = pcStack_34;
      uStack_158 = uStack_30;
      puStack_154 = local_d0;
      pcStack_150 = pcStack_cc;
      uStack_14c = uStack_c8;
      puVar6 = (undefined4 *)param_3[0x20];
      local_180 = pcVar9;
      local_148 = (short)iVar5;
      if (puVar6 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        local_168 = uVar17;
        puVar7 = (undefined4 *)FUN_014333b0();
        if (puVar6[1] == 0) {
          local_c0 = &DAT_0056d238;
          local_bc = (code *)0x0;
          uStack_b8 = 0;
          local_b4 = 0;
          uVar17 = local_168;
        }
        else {
          FUN_019790d4(&local_c0,0x18,4,puVar6[1] + 1);
          puVar4 = local_c0;
          puVar8 = (uint *)*puVar6;
          local_dc = local_b4;
          local_e8 = local_c0;
          pcStack_e4 = local_bc;
          local_e0 = uStack_b8;
          FUN_01bed4e2(local_c0,puVar8,local_bc + 5);
          iVar5 = puVar6[3];
          if (iVar5 != 0) {
            puVar11 = puVar8 + 1;
            uVar12 = ~*puVar8 & 0x80808080;
            puVar14 = puVar8;
            iVar16 = iVar5;
            do {
              puVar10 = puVar11;
              if (uVar12 == 0) {
                do {
                  puVar11 = puVar10 + 1;
                  uVar12 = *puVar10;
                  puVar14 = puVar14 + -0x18;
                  puVar10 = puVar11;
                } while ((uVar12 & 0x80808080) == 0x80808080);
                uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
              }
              puVar10 = puVar14 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3
                                  ) * -6;
              local_c0 = (undefined4 *)puVar10[-6];
              local_bc = (code *)puVar10[-5];
              uStack_b8 = puVar10[-4];
              local_b4 = puVar10[-3];
              uVar17 = (**(code **)(puVar10[-1] + 0x10))(puVar10[-2]);
              iVar16 = iVar16 + -1;
              iVar1 = (int)puVar8 - (int)puVar10 >> 3;
              puVar4[iVar1 * -2 + -6] = local_c0;
              puVar4[iVar1 * -2 + -5] = local_bc;
              puVar4[iVar1 * -2 + -4] = uStack_b8;
              puVar4[iVar1 * -2 + -3] = local_b4;
              *(undefined8 *)(puVar4 + iVar1 * -2 + -2) = uVar17;
              uVar12 = uVar12 - 1 & uVar12;
            } while (iVar16 != 0);
          }
          local_e0 = puVar6[2];
          local_c0 = local_e8;
          local_bc = pcStack_e4;
          local_dc = iVar5;
          uStack_b8 = local_e0;
          local_b4 = iVar5;
          uVar17 = local_168;
        }
        *puVar7 = local_c0;
        puVar7[1] = local_bc;
        puVar7[2] = uStack_b8;
        puVar7[3] = local_b4;
      }
      local_168 = uVar17;
      FUN_0178e884(local_100);
      local_100 = puVar7;
      FUN_01bed4e2(param_1,&local_180,0x98);
      return;
    }
  }
  else if (4 < DAT_01d51b00) {
    local_174 = 0xe;
    local_17c = 0xe;
    local_170 = &DAT_01d19184;
    local_178 = "reqwest::retry";
    local_180 = "reqwest::retry";
    FUN_0193b350("max_retries_per_request hit",0x37,5,&local_180);
  }
LAB_0170ff6c:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

