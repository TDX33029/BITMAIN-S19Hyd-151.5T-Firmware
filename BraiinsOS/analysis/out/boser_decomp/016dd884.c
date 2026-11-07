// FUN_016dd884 @ 016dd884 size=2612 calls_out=25 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016dd884(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int *local_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined1 *puStack_1d4;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1cc;
  undefined1 *local_1c8;
  undefined1 *puStack_1c4;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1bc;
  undefined1 *puStack_1b8;
  uint local_1b4;
  undefined1 *local_1b0;
  undefined1 *local_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  undefined1 *local_19c;
  undefined1 *puStack_198;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined1 *local_184;
  undefined1 *local_180;
  undefined1 *local_17c;
  undefined1 *local_178;
  undefined1 *local_174;
  undefined1 *local_170;
  undefined1 *local_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined1 *local_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar7 = (uint *)(param_2 + 0x14);
  local_1b4 = *puVar7;
  local_1e4 = param_2;
  uStack_1e0 = param_3;
  uStack_1dc = param_4;
  if (local_1b4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_1b4,&DAT_00533278,&DAT_004cfdc3,0x39,&DAT_01d09fb8);
  }
  param_2[0x15] = 1;
  param_2[0x16] = 1;
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((int)param_2 + 0x66);
  if (*param_2 == 0) {
    iVar9 = param_2[3];
    puVar8 = (undefined4 *)(param_2[2] + 4);
    *param_2 = -1;
    param_2[3] = 0;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_0134bd64(puVar8[-1],*puVar8);
      puVar8 = puVar8 + 9;
    }
    *param_2 = *param_2 + 1;
    if (param_2[4] == 0) {
      iVar10 = param_2[7] + 1;
      param_2[4] = -1;
      param_2[7] = 0;
      iVar9 = param_2[6];
      while (iVar10 = iVar10 + -1, iVar10 != 0) {
        FUN_016d45e8(iVar9);
        iVar9 = iVar9 + 0x70;
      }
      param_2[4] = param_2[4] + 1;
      if (param_2[8] == 0) {
        iVar10 = param_2[0xb] + 1;
        param_2[8] = -1;
        param_2[0xb] = 0;
        iVar9 = param_2[10];
        while (iVar10 = iVar10 + -1, iVar10 != 0) {
          FUN_016d4634(iVar9);
          iVar9 = iVar9 + 0x98;
        }
        param_2[8] = param_2[8] + 1;
        puStack_198 = (undefined1 *)*puVar7;
        puStack_194 = (undefined1 *)param_2[0x15];
        puStack_190 = (undefined1 *)param_2[0x16];
        local_1a4 = (undefined1 *)*puVar7;
        local_1a0 = (undefined1 *)param_2[0x15];
        local_19c = (undefined1 *)param_2[0x16];
        uVar4 = (uint)&local_60 | 4;
        puVar8 = (undefined4 *)((uint)&local_188 | 4);
        local_1a8 = (undefined1 *)0x0;
        local_1b0 = (undefined1 *)0x0;
        local_1ac = (undefined1 *)0x4;
        puVar6 = (undefined1 *)0x4;
        local_188 = local_1a4;
        local_184 = local_1a0;
        local_180 = local_19c;
        local_17c = puStack_198;
        local_178 = puStack_194;
        local_174 = puStack_190;
LAB_016dda80:
        puVar2 = local_1a8;
        FUN_016d4684(&local_1e4);
        if (*puVar7 == param_4) {
          local_60 = local_1b0;
          local_5c = local_1ac;
          puStack_58 = local_1a8;
          puStack_54 = local_1a4;
          local_50 = local_1a0;
          puStack_4c = local_19c;
          puStack_48 = puStack_198;
          local_44 = puStack_194;
          local_40 = puStack_190;
          FUN_016d4b30(&local_188,&local_1e4,&local_60);
          puVar13 = local_180;
          puVar14 = local_184;
          if (local_188 == (undefined1 *)0x22) {
            local_94 = local_180;
            local_98 = local_184;
            FUN_016d78c8(&local_188,&local_1e4,&local_98);
            puVar6 = local_174;
            puVar12 = local_178;
            puVar11 = local_17c;
            puVar3 = local_180;
            puVar2 = local_184;
            puVar5 = local_188;
            if (local_188 == (undefined1 *)0x22) {
              local_184 = puVar13;
              local_188 = puVar14;
              if (*param_2 != 0) {
                FUN_01306fc8(&DAT_01d09fa8);
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x16de478);
                (*pcVar1)();
              }
              puVar11 = (undefined1 *)param_2[1];
              puVar12 = (undefined1 *)param_2[2];
              local_170 = (undefined1 *)param_2[3];
              param_2[1] = 0;
              param_2[2] = 4;
              param_2[3] = 0;
LAB_016de1b8:
              puVar8 = (undefined4 *)(puVar12 + 4);
              for (puVar6 = local_170; puVar6 != (undefined1 *)0x0; puVar6 = puVar6 + -1) {
                FUN_0134bd64(puVar8[-1],*puVar8);
                puVar8 = puVar8 + 9;
              }
              FUN_0134aee0(puVar11,puVar12,4,0x24);
              *param_1 = 0x22;
              param_1[1] = puVar14;
              param_1[2] = puVar13;
              return;
            }
            local_1d8 = local_170;
            puStack_1d4 = local_16c;
            puStack_1d0 = puStack_168;
            puStack_1cc = puStack_164;
            local_1c8 = local_160;
            puStack_1c4 = local_15c;
            puStack_1c0 = puStack_158;
            puStack_1bc = puStack_154;
            puStack_1b8 = puStack_150;
            FUN_016d776c(&local_98);
            puVar13 = puVar3;
            local_148 = local_14c;
            puVar14 = puVar2;
          }
          else {
            local_1d8 = local_170;
            puStack_1d4 = local_16c;
            puStack_1d0 = puStack_168;
            puStack_1cc = puStack_164;
            local_1c8 = local_160;
            puStack_1c4 = local_15c;
            puStack_1c0 = puStack_158;
            puStack_1bc = puStack_154;
            puStack_1b8 = puStack_150;
            puVar11 = local_17c;
            puVar12 = local_178;
            puVar5 = local_188;
            puVar6 = local_174;
            local_148 = local_14c;
          }
LAB_016de2f0:
          *param_1 = puVar5;
          param_1[1] = puVar14;
          param_1[3] = puVar11;
          param_1[4] = puVar12;
          param_1[5] = puVar6;
          param_1[2] = puVar13;
          param_1[6] = local_1d8;
          param_1[7] = puStack_1d4;
          param_1[8] = puStack_1d0;
          param_1[9] = puStack_1cc;
          param_1[10] = local_1c8;
          param_1[0xb] = puStack_1c4;
          param_1[0xc] = puStack_1c0;
          param_1[0xd] = puStack_1bc;
          param_1[0xe] = puStack_1b8;
          param_1[0xf] = local_148;
          return;
        }
        iVar9 = FUN_016d4a28(&local_1e4);
        if (0x3e < iVar9) {
          if (0x7a < iVar9) {
            if (iVar9 != 0x7b) {
              if (iVar9 != 0x7c) goto switchD_016ddac0_default;
              local_60 = local_1b0;
              local_5c = local_1ac;
              puStack_58 = local_1a8;
              puStack_54 = local_1a4;
              local_50 = local_1a0;
              puStack_4c = local_19c;
              puStack_48 = puStack_198;
              local_44 = puStack_194;
              local_40 = puStack_190;
              FUN_016d62e4(&local_188,&local_1e4,&local_60);
              goto LAB_016dddb4;
            }
            local_60 = local_1b0;
            local_5c = local_1ac;
            puStack_58 = local_1a8;
            puStack_54 = local_1a4;
            local_50 = local_1a0;
            puStack_4c = local_19c;
            puStack_48 = puStack_198;
            local_44 = puStack_194;
            local_40 = puStack_190;
            FUN_016d6f28(&local_188,&local_1e4,&local_60);
            goto LAB_016ddd20;
          }
          if (iVar9 == 0x3f) {
            local_1d8 = (undefined1 *)0x3;
            goto LAB_016ddd08;
          }
          if (iVar9 != 0x5b) goto switchD_016ddac0_default;
          FUN_016d65a8(&local_188,&local_1e4);
          puVar12 = local_174;
          puVar11 = local_178;
          puVar13 = local_17c;
          puVar14 = local_180;
          puVar5 = local_184;
          local_60 = local_16c;
          puStack_1d4 = puStack_168;
          puStack_1d0 = puStack_164;
          puStack_1cc = local_160;
          local_1c8 = local_15c;
          puStack_1c4 = puStack_158;
          puStack_1c0 = puStack_154;
          puStack_1bc = puStack_150;
          puStack_1b8 = local_14c;
          local_5c = puStack_1d4;
          puStack_58 = puStack_1d0;
          puStack_54 = puStack_1cc;
          local_50 = local_1c8;
          puStack_4c = puStack_1c4;
          puStack_48 = puStack_1c0;
          local_44 = puStack_1bc;
          local_40 = puStack_1b8;
          if (local_188 != (undefined1 *)0x110009) goto code_r0x016ddb80;
          local_1d8 = local_60;
          FUN_016bedfc(&local_1b0);
          puVar6 = local_170;
          if (puVar5 == (undefined1 *)0x22) goto LAB_016de1b8;
          goto LAB_016de2f0;
        }
        switch(iVar9) {
        case 0x28:
          local_60 = local_1b0;
          local_5c = local_1ac;
          puStack_58 = local_1a8;
          puStack_54 = local_1a4;
          local_50 = local_1a0;
          puStack_4c = local_19c;
          puStack_48 = puStack_198;
          local_44 = puStack_194;
          local_40 = puStack_190;
          FUN_016d5830(&local_188,&local_1e4,&local_60);
          break;
        case 0x29:
          local_60 = local_1b0;
          local_5c = local_1ac;
          puStack_58 = local_1a8;
          puStack_54 = local_1a4;
          local_50 = local_1a0;
          puStack_4c = local_19c;
          puStack_48 = puStack_198;
          local_44 = puStack_194;
          local_40 = puStack_190;
          FUN_016d5c04(&local_188,&local_1e4,&local_60);
          break;
        case 0x2a:
          local_1d8 = (undefined1 *)0x4;
          goto LAB_016ddd08;
        case 0x2b:
          local_1d8 = (undefined1 *)0x5;
LAB_016ddd08:
          local_40 = puStack_190;
          local_44 = puStack_194;
          puStack_48 = puStack_198;
          puStack_4c = local_19c;
          local_50 = local_1a0;
          puStack_54 = local_1a4;
          puStack_58 = local_1a8;
          local_5c = local_1ac;
          local_60 = local_1b0;
          FUN_016d6b7c(&local_188,&local_1e4,&local_60,&local_1d8);
LAB_016ddd20:
          local_98 = local_170;
          puStack_1d4 = local_16c;
          puStack_1d0 = puStack_168;
          puStack_1cc = puStack_164;
          if (local_188 != (undefined1 *)0x22) {
            local_1c8 = local_160;
            puStack_1c4 = local_15c;
            puStack_1c0 = puStack_158;
            puStack_1bc = puStack_154;
            puStack_1b8 = puStack_150;
            puVar11 = local_17c;
            puVar12 = local_178;
            puVar13 = local_180;
            puVar5 = local_188;
            puVar6 = local_174;
            local_148 = local_14c;
            puVar14 = local_184;
            local_1d8 = local_98;
            goto LAB_016de2f0;
          }
          local_1a4 = local_178;
          local_1a0 = local_174;
          local_1a8 = local_17c;
          local_1ac = local_180;
          local_1b0 = local_184;
          local_19c = local_170;
          puStack_198 = local_16c;
          puStack_194 = puStack_168;
          puStack_190 = puStack_164;
          puVar6 = local_180;
          local_94 = puStack_1d4;
          goto LAB_016dda80;
        default:
switchD_016ddac0_default:
          puVar6 = (undefined1 *)FUN_016d4a28(&local_1e4);
          if ((int)puVar6 < 0x5c) {
            if (puVar6 == (undefined1 *)0x24) {
              FUN_016d4f3c(uVar4,&local_1e4);
              local_60 = (undefined1 *)0x80000003;
              local_44 = (undefined1 *)CONCAT31(local_44._1_3_,1);
              FUN_016d4fe8(&local_1e4);
            }
            else if (puVar6 == (undefined1 *)0x2e) {
              FUN_016d4f3c(uVar4,&local_1e4);
              local_60 = &DAT_80000004;
              FUN_016d4fe8(&local_1e4);
            }
            else {
LAB_016dde98:
              FUN_016d4f3c(&puStack_58,&local_1e4);
              local_40 = (undefined1 *)((uint)local_40 & 0xffffff00);
              local_60 = (undefined1 *)0x80000002;
              local_5c = puVar6;
              FUN_016d4fe8(&local_1e4);
            }
          }
          else {
            if (puVar6 == (undefined1 *)0x5c) {
              FUN_016d513c(&local_188,&local_1e4);
              puVar6 = local_174;
              puVar12 = local_178;
              puVar11 = local_17c;
              puVar13 = local_180;
              puVar14 = local_184;
              puVar5 = local_188;
              if (local_188 == (undefined1 *)0x22) goto LAB_016ddf04;
              local_1d8 = local_170;
              puStack_1d4 = local_16c;
              puStack_1d0 = puStack_168;
              puStack_1cc = puStack_164;
              local_1c8 = local_160;
              puStack_1c4 = local_15c;
              puStack_1c0 = puStack_158;
              puStack_1bc = puStack_154;
              puStack_1b8 = puStack_150;
              FUN_016bedfc(&local_1b0);
              local_148 = local_14c;
              goto LAB_016de2f0;
            }
            if (puVar6 != (undefined1 *)0x5e) goto LAB_016dde98;
            FUN_016d4f3c(uVar4,&local_1e4);
            local_60 = (undefined1 *)0x80000003;
            local_44 = (undefined1 *)((uint)local_44 & 0xffffff00);
            FUN_016d4fe8(&local_1e4);
          }
          *puVar8 = local_60;
          puVar8[1] = local_5c;
          puVar8[2] = puStack_58;
          puVar8[3] = puStack_54;
          puVar8[4] = local_50;
          puVar8[5] = puStack_4c;
          puVar8[6] = puStack_48;
          puVar8[7] = local_44;
          puVar8[8] = local_40;
          puVar8[9] = local_3c;
          puVar8[10] = uStack_38;
          puVar8[0xb] = uStack_34;
          puVar8[0xc] = uStack_30;
          puVar8[0xd] = uStack_2c;
LAB_016ddf04:
          puVar6 = (undefined1 *)0x4;
          if ((undefined1 *)0x80000001 < local_184) {
            puVar6 = local_184 + 0x7ffffffe;
          }
                    /* WARNING: Could not recover jumptable at 0x016ddf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_016ddf50 + *(int *)(&DAT_016ddf50 + (int)puVar6 * 4)))();
          return;
        }
LAB_016dddb4:
        local_98 = local_170;
        puStack_1d4 = local_16c;
        puStack_1d0 = puStack_168;
        puStack_1cc = puStack_164;
        if (local_188 != (undefined1 *)0x22) {
          local_1c8 = local_160;
          puStack_1c4 = local_15c;
          puStack_1c0 = puStack_158;
          puStack_1bc = puStack_154;
          puStack_1b8 = puStack_150;
          puVar11 = local_17c;
          puVar12 = local_178;
          puVar13 = local_180;
          puVar5 = local_188;
          puVar6 = local_174;
          local_148 = local_14c;
          puVar14 = local_184;
          local_1d8 = local_98;
          goto LAB_016de2f0;
        }
        local_1a4 = local_178;
        local_1a0 = local_174;
        local_1a8 = local_17c;
        local_1ac = local_180;
        local_1b0 = local_184;
        local_19c = local_170;
        puStack_198 = local_16c;
        puStack_194 = puStack_168;
        puStack_190 = puStack_164;
        puVar6 = local_180;
        local_94 = puStack_1d4;
        goto LAB_016dda80;
      }
      goto LAB_016de450;
    }
  }
  else {
    FUN_01306fc8(&DAT_01d0a178);
  }
  FUN_01306fc8(&DAT_01d0a188);
LAB_016de450:
  FUN_01306fc8(&DAT_01d0a198);
                    /* WARNING: Subroutine does not return */
  FUN_0066439c(4,0x38);
code_r0x016ddb80:
  local_cc = local_144;
  uStack_c8 = uStack_140;
  uStack_c4 = uStack_13c;
  uStack_c0 = uStack_138;
  uStack_bc = uStack_134;
  uStack_b8 = uStack_130;
  local_b4 = local_12c;
  uStack_b0 = uStack_128;
  uStack_ac = uStack_124;
  uStack_a8 = uStack_120;
  uStack_a4 = uStack_11c;
  uStack_a0 = uStack_118;
  local_100 = local_178;
  local_104 = local_17c;
  local_f8 = local_170;
  local_fc = local_174;
  local_108 = local_180;
  local_10c = local_184;
  local_110 = local_188;
  local_f4 = local_16c;
  puStack_f0 = puStack_168;
  puStack_ec = puStack_164;
  puStack_e8 = local_160;
  local_e4 = local_15c;
  puStack_e0 = puStack_158;
  puStack_dc = puStack_154;
  puStack_d8 = puStack_150;
  puStack_d4 = local_14c;
  local_d0 = local_148;
  puVar5 = (undefined1 *)thunk_FUN_01be5118(0x74);
  if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x74);
  }
  FUN_01bed4e2(puVar5,&local_110,0x74);
  local_188 = (undefined1 *)0x7;
  local_184 = puVar5;
  if (puVar2 == local_1b0) {
    FUN_015f5ab8(&local_1b0);
    puVar6 = local_1ac;
  }
  *(undefined4 *)(puVar6 + (int)puVar2 * 8) = 7;
  *(undefined1 **)((int)(puVar6 + (int)puVar2 * 8) + 4) = puVar5;
  local_1a8 = puVar2 + 1;
  goto LAB_016dda80;
}

