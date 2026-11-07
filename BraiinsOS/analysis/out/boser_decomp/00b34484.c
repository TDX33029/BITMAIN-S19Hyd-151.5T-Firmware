// FUN_00b34484 @ 00b34484 size=2000 calls_out=8 calls_in=1
// strings: 

uint * FUN_00b34484(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint unaff_r9;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  uint **local_200;
  uint local_1fc;
  uint local_1ec;
  uint local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  undefined4 local_1a4;
  uint local_198;
  uint local_194;
  uint *local_18c;
  undefined4 local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint *local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint *local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint *local_f8 [2];
  uint *local_f0 [2];
  uint *local_e8;
  uint local_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar9 = *(uint **)(param_1 + 0x3c);
  if (puVar9 != (uint *)0x0) {
    iVar6 = *(int *)(param_1 + 0x40);
    puVar17 = puVar9;
    do {
      iVar13 = (uint)*(ushort *)((int)puVar17 + 0x376) << 3;
      uVar12 = 0;
      do {
        uVar15 = uVar12;
        unaff_r9 = (uint)*(ushort *)((int)puVar17 + 0x376);
        if (iVar13 == 0) goto LAB_00b34524;
        uVar12 = puVar17[uVar15 * 2];
        uVar5 = (uint)(param_2 < uVar12);
        uVar10 = (uint)(param_2 >= uVar12 && param_2 != uVar12);
        if (param_2 == uVar12) {
          uVar10 = 0;
          uVar12 = puVar17[uVar15 * 2 + 1];
          uVar5 = (uint)(param_3 < uVar12);
          if (param_3 >= uVar12 && param_3 != uVar12) {
            uVar10 = 1;
          }
        }
        iVar13 = iVar13 + -8;
        uVar12 = uVar15 + 1;
      } while (uVar10 - uVar5 == 1);
      unaff_r9 = uVar15;
      if ((uVar10 - uVar5 & 0xff) == 0) {
        puVar17 = puVar17 + uVar15 * 0x12;
        goto LAB_00b34bbc;
      }
LAB_00b34524:
      if (iVar6 == 0) goto LAB_00b3454c;
      iVar6 = iVar6 + -1;
      puVar17 = (uint *)puVar17[unaff_r9 + 0xde];
    } while( true );
  }
  puVar17 = (uint *)0x0;
LAB_00b3454c:
  local_1d4 = 0;
  local_1d8 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_198 = param_2;
  local_194 = param_3;
  if (puVar17 == (uint *)0x0) {
    puVar3 = (uint *)FUN_00ab29a0();
    uVar12 = 0;
    *(undefined2 *)((int)puVar3 + 0x376) = 1;
    *puVar3 = param_2;
    puVar3[0xdc] = 0;
    *(uint **)(param_1 + 0x3c) = puVar3;
    *(undefined4 *)(param_1 + 0x40) = 0;
    puVar3[1] = param_3;
    FUN_01bed4e2(puVar3 + 0x16,&local_1d8,0x48);
  }
  else {
    local_188 = 0;
    puVar11 = (ushort *)((int)puVar17 + 0x376);
    local_18c = puVar17;
    local_184 = unaff_r9;
    if (*puVar11 < 0xb) {
      FUN_009764ac(&local_68,&local_18c,param_2,param_3,&local_1d8);
      puVar3 = local_68;
      uVar12 = local_60;
    }
    else {
      uVar12 = 4;
      uVar15 = unaff_r9;
      if (unaff_r9 < 5) {
        bVar2 = false;
      }
      else if (unaff_r9 == 5) {
        bVar2 = false;
        uVar12 = 5;
      }
      else {
        if (unaff_r9 == 6) {
          uVar12 = 5;
          uVar15 = 0;
        }
        else {
          uVar15 = unaff_r9 - 7;
          uVar12 = 6;
        }
        bVar2 = true;
      }
      puVar4 = (uint *)FUN_00ab29a0();
      puVar4[0xdc] = 0;
      *(undefined2 *)((int)puVar4 + 0x376) = 0;
      local_1e8 = puVar17[uVar12 * 2];
      local_1ec = (puVar17 + uVar12 * 2)[1];
      uVar19 = ~uVar12 + (uint)*puVar11;
      *(undefined2 *)((int)puVar4 + 0x376) = (short)uVar19;
      puVar3 = puVar17 + uVar12 * 0x12 + 0x16;
      uVar10 = *puVar3;
      uVar5 = puVar3[1];
      local_68 = (uint *)puVar3[2];
      uStack_64 = puVar3[3];
      local_60 = puVar3[4];
      uStack_5c = puVar3[5];
      uStack_58 = puVar3[6];
      local_54 = puVar3[7];
      uStack_50 = puVar3[8];
      uStack_4c = puVar3[9];
      uStack_48 = puVar3[10];
      uStack_44 = puVar3[0xb];
      local_40 = puVar3[0xc];
      uStack_3c = puVar3[0xd];
      uStack_38 = puVar3[0xe];
      uStack_34 = puVar3[0xf];
      uStack_30 = puVar3[0x10];
      uStack_2c = puVar3[0x11];
      if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar19,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(puVar4,puVar17 + (uVar12 + 1) * 2,uVar19 * 8);
      FUN_01bed4e2(puVar4 + 0x16,puVar17 + (uVar12 + 1) * 0x12 + 0x16,uVar19 * 0x48);
      *puVar11 = (ushort)uVar12;
      local_a8 = local_68;
      uStack_a4 = uStack_64;
      uStack_a0 = local_60;
      uStack_9c = uStack_5c;
      uStack_98 = uStack_58;
      local_94 = local_54;
      uStack_90 = uStack_50;
      uStack_8c = uStack_4c;
      uStack_88 = uStack_48;
      uStack_84 = uStack_44;
      local_80 = local_40;
      uStack_7c = uStack_3c;
      uStack_78 = uStack_38;
      uStack_74 = uStack_34;
      uStack_70 = uStack_30;
      uStack_6c = uStack_2c;
      local_e4 = 0;
      local_e8 = puVar4;
      if (!bVar2) {
        local_e8 = puVar17;
      }
      local_e0 = uVar15;
      FUN_009764ac(&local_68,&local_e8,param_2,param_3,&local_1d8);
      uVar12 = local_60;
      puVar3 = local_68;
      if (!(uVar10 == 2 && uVar5 == 0)) {
        local_178 = local_a8;
        uStack_174 = uStack_a4;
        uStack_170 = uStack_a0;
        uStack_16c = uStack_9c;
        uStack_168 = uStack_98;
        local_164 = local_94;
        uStack_160 = uStack_90;
        uStack_15c = uStack_8c;
        uStack_158 = uStack_88;
        uStack_154 = uStack_84;
        local_150 = local_80;
        uStack_14c = uStack_7c;
        uStack_148 = uStack_78;
        uStack_144 = uStack_74;
        uStack_140 = uStack_70;
        uStack_13c = uStack_6c;
        puVar14 = (uint *)puVar17[0xdc];
        local_180 = uVar10;
        local_17c = uVar5;
        if (puVar14 == (uint *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            local_1fc = (uint)(ushort)puVar17[0xdd];
            puVar11 = (ushort *)((int)puVar14 + 0x376);
            uVar1 = *puVar11;
            if (uVar1 < 0xb) {
              FUN_00976828(puVar14,local_1fc,local_1e8,local_1ec,&local_180,puVar4);
              goto LAB_00b34ba8;
            }
            local_200 = local_f0;
            uVar10 = 4;
            if (4 < local_1fc) {
              if (local_1fc == 5) {
                uVar10 = 5;
              }
              else if (local_1fc == 6) {
                local_200 = local_f8;
                uVar10 = 5;
                local_1fc = 0;
              }
              else {
                local_1fc = local_1fc - 7;
                local_200 = local_f8;
                uVar10 = 6;
              }
            }
            puVar9 = (uint *)FUN_00ab2840();
            puVar9[0xdc] = 0;
            puVar18 = (ushort *)((int)puVar9 + 0x376);
            *puVar18 = 0;
            uVar20 = puVar14[uVar10 * 2];
            uVar5 = (puVar14 + uVar10 * 2)[1];
            uVar16 = ~uVar10 + (uint)*puVar11;
            *puVar18 = (ushort)uVar16;
            puVar17 = puVar14 + uVar10 * 0x12 + 0x16;
            uVar19 = *puVar17;
            uVar7 = puVar17[1];
            local_68 = (uint *)puVar17[2];
            uStack_64 = puVar17[3];
            local_60 = puVar17[4];
            uStack_5c = puVar17[5];
            uStack_58 = puVar17[6];
            local_54 = puVar17[7];
            uStack_50 = puVar17[8];
            uStack_4c = puVar17[9];
            uStack_48 = puVar17[10];
            uStack_44 = puVar17[0xb];
            local_40 = puVar17[0xc];
            uStack_3c = puVar17[0xd];
            uStack_38 = puVar17[0xe];
            uStack_34 = puVar17[0xf];
            uStack_30 = puVar17[0x10];
            uStack_2c = puVar17[0x11];
            if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar16,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(puVar9,puVar14 + (uVar10 + 1) * 2,uVar16 * 8);
            FUN_01bed4e2(puVar9 + 0x16,puVar14 + (uVar10 + 1) * 0x12 + 0x16,uVar16 * 0x48);
            *puVar11 = (ushort)uVar10;
            local_a8 = local_68;
            uStack_a4 = uStack_64;
            uStack_a0 = local_60;
            uStack_9c = uStack_5c;
            uStack_98 = uStack_58;
            local_94 = local_54;
            uStack_90 = uStack_50;
            uStack_8c = uStack_4c;
            uStack_88 = uStack_48;
            uStack_84 = uStack_44;
            local_80 = local_40;
            uStack_7c = uStack_3c;
            uStack_78 = uStack_38;
            uStack_74 = uStack_34;
            uStack_70 = uStack_30;
            uStack_6c = uStack_2c;
            uVar16 = (uint)*puVar18;
            iVar6 = uVar16 + 1;
            if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar6,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar10 != iVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            uVar15 = uVar15 + 1;
            FUN_01bed4e2(puVar9 + 0xde,puVar14 + uVar10 + 0xdf,iVar6 * 4);
            uVar10 = 0;
            do {
              uVar8 = (puVar9 + 0xde)[uVar10];
              *(short *)(uVar8 + 0x374) = (short)uVar10;
              *(uint **)(uVar8 + 0x370) = puVar9;
              if (uVar16 <= uVar10) break;
              uVar10 = uVar10 + 1;
            } while (uVar10 <= uVar16);
            local_e8 = local_a8;
            local_e4 = uStack_a4;
            local_e0 = uStack_a0;
            uStack_dc = uStack_9c;
            uStack_d8 = uStack_98;
            local_d4 = local_94;
            uStack_d0 = uStack_90;
            uStack_cc = uStack_8c;
            uStack_c8 = uStack_88;
            uStack_c4 = uStack_84;
            local_c0 = local_80;
            uStack_bc = uStack_7c;
            uStack_b8 = uStack_78;
            uStack_b4 = uStack_74;
            uStack_b0 = uStack_70;
            uStack_ac = uStack_6c;
            local_f8[0] = puVar9;
            local_f0[0] = puVar14;
            FUN_00976828(*local_200,local_1fc,local_1e8,local_1ec,&local_180,puVar4);
            local_138 = local_e8;
            uStack_134 = local_e4;
            uStack_130 = local_e0;
            uStack_12c = uStack_dc;
            uStack_128 = uStack_d8;
            local_124 = local_d4;
            uStack_120 = uStack_d0;
            uStack_11c = uStack_cc;
            uStack_118 = uStack_c8;
            uStack_114 = uStack_c4;
            local_110 = local_c0;
            uStack_10c = uStack_bc;
            uStack_108 = uStack_b8;
            uStack_104 = uStack_b4;
            uStack_100 = uStack_b0;
            uStack_fc = uStack_ac;
            if (uVar19 == 2 && uVar7 == 0) goto LAB_00b34ba8;
            local_178 = local_e8;
            uStack_174 = local_e4;
            uStack_170 = local_e0;
            uStack_16c = uStack_dc;
            uStack_168 = uStack_d8;
            local_164 = local_d4;
            uStack_160 = uStack_d0;
            uStack_15c = uStack_cc;
            uStack_158 = uStack_c8;
            uStack_154 = uStack_c4;
            local_150 = local_c0;
            uStack_14c = uStack_bc;
            uStack_148 = uStack_b8;
            uStack_144 = uStack_b4;
            uStack_140 = uStack_b0;
            uStack_13c = uStack_ac;
            puVar14 = (uint *)local_f0[0][0xdc];
            puVar4 = local_f8[0];
            puVar17 = local_f0[0];
            local_1ec = uVar5;
            local_1e8 = uVar20;
            local_180 = uVar19;
            local_17c = uVar7;
          } while (puVar14 != (uint *)0x0);
          puVar9 = *(uint **)(param_1 + 0x3c);
        }
        if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar10 = *(uint *)(param_1 + 0x40);
        puVar17 = (uint *)FUN_00ab2840();
        *(undefined2 *)((int)puVar17 + 0x376U) = 0;
        puVar17[0xde] = (uint)puVar9;
        puVar17[0xdc] = 0;
        if (0xfffffffe < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        *(undefined2 *)(puVar9 + 0xdd) = 0;
        puVar9[0xdc] = (uint)puVar17;
        *(uint **)(param_1 + 0x3c) = puVar17;
        *(uint *)(param_1 + 0x40) = uVar10 + 1;
        if (uVar15 != uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        *puVar17 = local_1e8;
        puVar17[1] = local_1ec;
        *(undefined2 *)((int)puVar17 + 0x376U) = 1;
        FUN_01bed4e2(puVar17 + 0x16,&local_180,0x48);
        puVar17[0xdf] = (uint)puVar4;
        *(undefined2 *)(puVar4 + 0xdd) = 1;
        puVar4[0xdc] = (uint)puVar17;
      }
    }
  }
LAB_00b34ba8:
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  puVar17 = puVar3 + uVar12 * 0x12;
LAB_00b34bbc:
  return puVar17 + 0x16;
}

