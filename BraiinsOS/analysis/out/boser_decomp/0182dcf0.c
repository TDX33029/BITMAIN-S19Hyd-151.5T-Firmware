// FUN_0182dcf0 @ 0182dcf0 size=1424 calls_out=14 calls_in=2
// strings: max_retries_per_request hit | reqwest::retry | reqwest::retry

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0182dcf0(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint unaff_r9;
  uint *puVar14;
  int iVar15;
  undefined8 uVar16;
  int local_1b4;
  int local_1b0;
  int local_1a4;
  int *local_1a0;
  char *local_180;
  undefined4 local_17c;
  char *local_178;
  int local_174;
  undefined *local_170;
  int *local_16c;
  undefined8 local_168;
  undefined4 *******local_160;
  code *pcStack_15c;
  undefined4 uStack_158;
  undefined4 *******pppppppuStack_154;
  code *pcStack_150;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined4 *******pppppppuStack_140;
  code *pcStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  byte local_114;
  undefined2 local_113;
  undefined1 local_111;
  undefined8 local_110;
  undefined4 *local_108;
  uint local_104;
  undefined4 *local_100;
  undefined1 local_fc;
  undefined4 uStack_f8;
  undefined *puStack_f4;
  undefined4 uStack_f0;
  undefined *puStack_ec;
  undefined4 *******pppppppuStack_e8;
  code *pcStack_e4;
  undefined4 uStack_e0;
  undefined4 *******local_d8;
  code *pcStack_d4;
  undefined4 uStack_d0;
  undefined4 *******local_c8;
  undefined4 ******local_c4;
  undefined4 ******ppppppuStack_c0;
  undefined4 ******local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 *******local_38;
  code *pcStack_34;
  undefined4 local_30;
  int local_2c;
  
  uVar13 = *(uint *)(param_2 + 0x14);
  if (uVar13 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = (**(code **)(*(int *)(param_2 + 0x1c) + 0xc))
                        (*(int *)(param_2 + 0x18) +
                         (*(int *)(*(int *)(param_2 + 0x1c) + 8) - 1U & 0xfffffff8) + 8,param_3);
    }
    local_38 = (undefined4 *******)CONCAT31(local_38._1_3_,(char)iVar6);
    if (4 < DAT_01d51b00) {
      local_c8 = &local_38;
      local_174 = 0x15;
      local_17c = 0x15;
      local_178 = &DAT_0050d95f;
      local_180 = &DAT_0050d95f;
      local_170 = &DAT_01d1f090;
      local_c4 = (undefined4 ******)FUN_012fbb44;
      FUN_015fb650(&DAT_00580c59,&local_c8,5,&local_180);
    }
    if (iVar6 == 0) goto LAB_0182dfa8;
  }
  if (uVar13 < *(uint *)(param_2 + 0x10)) {
    if ((undefined4 *)param_3[0x22] != (undefined4 *)0x0) {
      local_1a0 = param_3 + 2;
      (**(code **)param_3[0x22])(&local_17c,param_3 + 0x25,param_3[0x23],param_3[0x24]);
      puVar4 = local_170;
      iVar6 = local_174;
      pcVar11 = local_178;
      uVar3 = local_17c;
      uVar16 = CONCAT44(&local_c8,local_170);
      FUN_01413d40(&local_c8);
      uStack_f8 = uVar3;
      puStack_f4 = pcVar11;
      uStack_f0 = iVar6;
      puStack_ec = puVar4;
      FUN_01bed4e2(&local_180,&local_c8,0x88);
      bVar2 = *(byte *)(param_3 + 0x1b);
      puVar12 = param_1;
      if (8 < bVar2) {
        if (bVar2 == 9) {
          local_3a = *(undefined1 *)((int)param_3 + 0x6f);
          local_3c = *(undefined2 *)((int)param_3 + 0x6d);
          unaff_r9 = (uint)*(byte *)(param_3 + 0x1f);
          uVar16 = *(undefined8 *)(param_3 + 0x1c);
          puVar12 = (undefined4 *)param_3[0x1e];
        }
        else {
          uVar16 = FUN_013d4df8(param_3[0x1c],param_3[0x1d]);
        }
      }
      if ((9 < local_114) && (local_110._4_4_ != 0)) {
        thunk_FUN_01be4678((undefined4)local_110);
      }
      local_113 = local_3c;
      local_111 = local_3a;
      local_114 = bVar2;
      local_108 = puVar12;
      local_104 = unaff_r9;
      local_110 = uVar16;
      FUN_017970c4(&local_c8,param_3 + 0x10);
      FUN_01435814(&pppppppuStack_140);
      pppppppuStack_140 = local_c8;
      pcStack_13c = (code *)local_c4;
      uStack_138 = ppppppuStack_c0;
      iStack_134 = (int)local_bc;
      uStack_130 = uStack_b8;
      local_12c = local_b4;
      uStack_128 = uStack_b0;
      uStack_124 = uStack_ac;
      uStack_120 = uStack_a8;
      uStack_11c = uStack_a4;
      uStack_118 = uStack_a0;
      local_fc = (undefined1)param_3[0x21];
      iVar6 = param_3[0xe];
      uVar16 = FUN_01ac635c(param_3[6],param_3[7]);
      FUN_0187b658(&local_38,param_3[9],param_3[10]);
      FUN_017260a4(&local_c8,param_3[0xc],param_3[0xd]);
      if (*param_3 == 0) {
        pcVar11 = (char *)0x0;
      }
      else if (*param_3 == 2) {
        pcVar11 = (char *)0x2;
        local_1a4 = *local_1a0;
        local_1b0 = param_3[3];
        local_1b4 = param_3[4];
        local_1a0 = (int *)param_3[5];
      }
      else {
        pcVar11 = (char *)0x1;
      }
      local_d8 = local_38;
      pcStack_d4 = pcStack_34;
      uStack_d0 = local_30;
      pppppppuStack_e8 = local_c8;
      pcStack_e4 = (code *)local_c4;
      uStack_e0 = ppppppuStack_c0;
      FUN_017793c0(&local_180);
      local_178 = (char *)local_1a4;
      local_174 = local_1b0;
      local_170 = (undefined *)local_1b4;
      local_16c = local_1a0;
      local_17c = 0;
      local_160 = local_d8;
      pcStack_15c = pcStack_d4;
      uStack_158 = uStack_d0;
      pppppppuStack_154 = pppppppuStack_e8;
      pcStack_150 = pcStack_e4;
      uStack_14c = uStack_e0;
      puVar12 = (undefined4 *)param_3[0x20];
      local_180 = pcVar11;
      local_148 = (short)iVar6;
      if (puVar12 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        local_168 = uVar16;
        puVar7 = (undefined4 *)FUN_014333b0();
        if (puVar12[1] == 0) {
          local_c8 = (undefined4 *******)&DAT_0056d238;
          local_c4 = (undefined4 ******)0x0;
          ppppppuStack_c0 = (undefined4 ******)0x0;
          local_bc = (undefined4 ******)0x0;
          uVar16 = local_168;
        }
        else {
          FUN_019790d4(&local_c8,0x18,4,puVar12[1] + 1);
          pppppppuVar5 = local_c8;
          puVar8 = (uint *)*puVar12;
          local_2c = (int)local_bc;
          local_38 = local_c8;
          pcStack_34 = (code *)local_c4;
          local_30 = ppppppuStack_c0;
          FUN_01bed4e2(local_c8,puVar8,(code *)((int)local_c4 + 5));
          iVar6 = puVar12[3];
          if (iVar6 != 0) {
            puVar10 = puVar8 + 1;
            uVar13 = ~*puVar8 & 0x80808080;
            puVar14 = puVar8;
            iVar15 = iVar6;
            do {
              puVar9 = puVar10;
              if (uVar13 == 0) {
                do {
                  puVar10 = puVar9 + 1;
                  uVar13 = *puVar9;
                  puVar14 = puVar14 + -0x18;
                  puVar9 = puVar10;
                } while ((uVar13 & 0x80808080) == 0x80808080);
                uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
              }
              puVar9 = puVar14 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3)
                                 * -6;
              local_c8 = (undefined4 *******)puVar9[-6];
              local_c4 = (undefined4 ******)puVar9[-5];
              ppppppuStack_c0 = (undefined4 ******)puVar9[-4];
              local_bc = (undefined4 ******)puVar9[-3];
              uVar16 = (**(code **)(puVar9[-1] + 0x10))(puVar9[-2]);
              iVar15 = iVar15 + -1;
              iVar1 = (int)puVar8 - (int)puVar9 >> 3;
              pppppppuVar5[iVar1 * -2 + -6] = local_c8;
              pppppppuVar5[iVar1 * -2 + -5] = local_c4;
              pppppppuVar5[iVar1 * -2 + -4] = ppppppuStack_c0;
              pppppppuVar5[iVar1 * -2 + -3] = local_bc;
              *(undefined8 *)(pppppppuVar5 + iVar1 * -2 + -2) = uVar16;
              uVar13 = uVar13 - 1 & uVar13;
            } while (iVar15 != 0);
          }
          ppppppuStack_c0 = (undefined4 ******)puVar12[2];
          local_c8 = local_38;
          local_c4 = (undefined4 ******)pcStack_34;
          local_bc = (undefined4 ******)iVar6;
          local_30 = ppppppuStack_c0;
          local_2c = iVar6;
          uVar16 = local_168;
        }
        *puVar7 = local_c8;
        puVar7[1] = local_c4;
        puVar7[2] = ppppppuStack_c0;
        puVar7[3] = local_bc;
      }
      local_168 = uVar16;
      FUN_0178e884(local_100);
      local_100 = puVar7;
      FUN_01bed4e2(param_1,&local_180,0x98);
      return;
    }
  }
  else if (4 < DAT_01d51b00) {
    local_174 = 0xe;
    local_17c = 0xe;
    local_170 = &DAT_01d1e384;
    local_178 = "reqwest::retry";
    local_180 = "reqwest::retry";
    FUN_015fb650("max_retries_per_request hit",0x37,5,&local_180);
  }
LAB_0182dfa8:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

