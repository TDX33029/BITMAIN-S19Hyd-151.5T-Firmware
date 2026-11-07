// FUN_00728c2c @ 00728c2c size=1460 calls_out=22 calls_in=1
// strings: .gnu_debugaltlink

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00728c2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *local_2d8;
  char *local_2d4;
  int local_2d0;
  char *local_2cc;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  int local_298;
  undefined4 local_294;
  undefined4 local_290;
  int local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 *local_168;
  char *local_164;
  undefined4 *puStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128;
  char *local_124;
  int iStack_120;
  char *pcStack_11c;
  undefined4 *local_118;
  char *local_114;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [80];
  undefined4 *local_78;
  char *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  char *local_34;
  int local_30;
  char *local_2c;
  
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  FUN_007257d4(&local_298,uVar10,uVar11);
  if (local_298 == 0) {
    param_1[0x48] = 0x80000000;
    FUN_019bb7e0(*param_4,uVar10);
    return;
  }
  local_29c = 0;
  local_2a0 = 4;
  local_2a4 = 0;
  local_2a8 = 0;
  local_2ac = 4;
  local_2b0 = 0;
  FUN_0072fb60(&local_78);
  if (local_38 != -0x80000000) {
    local_168 = local_78;
    local_164 = local_74;
    puStack_160 = local_70;
    uStack_15c = uStack_6c;
    uStack_158 = uStack_68;
    local_154 = local_64;
    uStack_150 = uStack_60;
    uStack_14c = uStack_5c;
    uStack_148 = uStack_58;
    uStack_144 = uStack_54;
    local_140 = local_50;
    uStack_13c = uStack_4c;
    uStack_138 = uStack_48;
    uStack_134 = uStack_44;
    uStack_130 = uStack_40;
    uStack_12c = uStack_3c;
    local_124 = local_34;
    iStack_120 = local_30;
    pcStack_11c = local_2c;
    local_128 = local_38;
    iVar3 = FUN_0072f4d4(&puStack_160,".gnu_debugaltlink",0x11);
    if (((iVar3 != 0) &&
        (FUN_0072dff0(&local_78,iVar3,local_168,local_164), pcVar1 = local_74,
        local_78 == (undefined4 *)0x0)) && (local_70 != (undefined4 *)0x0)) {
      puVar9 = (undefined4 *)0x0;
      do {
        if (local_74[(int)puVar9] == '\0') {
          iVar3 = (int)local_70 - ((int)puVar9 + 1);
          local_2cc = local_74 + (int)((int)puVar9 + 1);
          if ((puVar9 == (undefined4 *)0x0) || (*local_74 != '/')) {
            FUN_019ac8ac(&local_78,uVar10,uVar11);
            puVar8 = local_70;
            pcVar6 = local_74;
            puVar2 = local_78;
            local_2d0 = iVar3;
            if (local_78 == (undefined4 *)&DAT_80000000) {
              if ((char)local_74 == '\x03') {
                puVar9 = (undefined4 *)local_70[1];
                uVar11 = *local_70;
                pcVar7 = (code *)*puVar9;
                if (pcVar7 != (code *)0x0) {
                  (*pcVar7)(uVar11);
                }
                if (puVar9[1] != 0) {
                  thunk_FUN_01be4678(uVar11);
                }
                thunk_FUN_01be4678(puVar8);
              }
              local_118 = (undefined4 *)&DAT_80000000;
              break;
            }
            local_2d4 = local_74;
            lVar12 = FUN_019aff98(local_74,local_70);
            puVar8 = (undefined4 *)((ulonglong)lVar12 >> 0x20);
            if ((int)lVar12 == 0) {
              local_118 = (undefined4 *)&DAT_80000000;
            }
            else {
              uVar11 = 0;
              if (lVar12 < 0) {
LAB_00728e80:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar11,puVar8);
              }
              if (puVar8 == (undefined4 *)0x0) {
                pcVar5 = &DAT_00000001;
                local_2d8 = (undefined4 *)0x0;
              }
              else {
                uVar11 = 1;
                pcVar5 = (char *)FUN_01298504(puVar8,1);
                local_2d8 = puVar8;
                if (pcVar5 == (char *)0x0) goto LAB_00728e80;
              }
              FUN_01bed4e2(pcVar5,(int)lVar12);
              local_78 = local_2d8;
              local_74 = pcVar5;
              local_70 = puVar8;
              FUN_019b0140(&local_78,pcVar1,puVar9);
              pcVar1 = local_74;
              iVar4 = FUN_01982d98(local_74,local_70);
              if (iVar4 == 0) {
                FUN_019bb7e0(local_78,pcVar1);
                FUN_019bb7e0(puVar2,pcVar6);
                goto LAB_00728fa8;
              }
              local_118 = local_78;
              local_114 = local_74;
              local_110 = local_70;
            }
            FUN_019bb7e0(puVar2,pcVar6);
LAB_00728fb8:
            puVar9 = local_118;
            if (local_118 == (undefined4 *)&DAT_80000000) break;
          }
          else {
            iVar4 = FUN_01982d98(local_74,puVar9);
            if (iVar4 == 0) {
LAB_00728fa8:
              FUN_0072f828(&local_118,local_2cc,iVar3);
              goto LAB_00728fb8;
            }
            uVar11 = 0;
            if ((int)puVar9 < 0) {
LAB_00728dd0:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar11,puVar9);
            }
            uVar11 = 1;
            pcVar6 = (char *)FUN_01298504(puVar9,1);
            if (pcVar6 == (char *)0x0) goto LAB_00728dd0;
            FUN_01bed4e2(pcVar6,pcVar1,puVar9);
            local_114 = pcVar6;
            local_110 = puVar9;
          }
          pcVar1 = local_114;
          FUN_007257d4(&local_d4,local_114,local_110);
          if (local_d4 == 1) {
            uVar13 = FUN_00724c58(&local_2b0,local_d0,local_cc);
            FUN_0072fb60(&local_78,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            pcVar6 = local_34;
            if (local_38 == -0x80000000) goto LAB_00729194;
            local_2d0 = local_38;
            local_2d4 = local_34;
            uVar13 = FUN_007303a0(&local_78);
            if ((((int)uVar13 == 0) || ((int)((ulonglong)uVar13 >> 0x20) != iVar3)) ||
               (iVar3 = thunk_FUN_01bed842((int)uVar13,local_2cc,iVar3), iVar3 != 0)) {
              FUN_0134c054(local_38,pcVar6,8,0x18);
              iVar3 = -0x80000000;
            }
            else {
              local_118 = local_78;
              local_114 = local_74;
              local_110 = local_70;
              uStack_10c = uStack_6c;
              uStack_108 = uStack_68;
              local_104 = local_64;
              uStack_100 = uStack_60;
              uStack_fc = uStack_5c;
              uStack_f8 = uStack_58;
              uStack_f4 = uStack_54;
              local_f0 = local_50;
              uStack_ec = uStack_4c;
              uStack_e8 = uStack_48;
              uStack_e4 = uStack_44;
              uStack_e0 = uStack_40;
              uStack_dc = uStack_3c;
              local_2cc = local_34;
              local_2d0 = local_30;
              local_2d4 = local_2c;
              iVar3 = local_38;
            }
          }
          else {
LAB_00729194:
            iVar3 = -0x80000000;
          }
          FUN_019bb7e0(puVar9,pcVar1);
          goto LAB_00728fcc;
        }
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      } while (local_70 != puVar9);
    }
    iVar3 = -0x80000000;
LAB_00728fcc:
    FUN_007292c8(auStack_c8,param_2,param_3,&local_2b0);
    local_78 = local_118;
    local_74 = local_114;
    local_70 = local_110;
    uStack_6c = uStack_10c;
    uStack_68 = uStack_108;
    local_64 = local_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    uStack_58 = uStack_f8;
    uStack_54 = uStack_f4;
    local_50 = local_f0;
    uStack_4c = uStack_ec;
    uStack_48 = uStack_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
    local_2c = local_2d4;
    local_30 = local_2d0;
    local_34 = local_2cc;
    local_38 = iVar3;
    FUN_007294d0(&local_298,&local_2b0,&local_168,&local_78,auStack_c8);
    if (local_198 != -0x80000000) {
      FUN_01bed4e2(param_1 + 8,&local_298,0x100);
      param_1[0x49] = local_194;
      param_1[0x4a] = uStack_190;
      param_1[0x4b] = uStack_18c;
      param_1[0x4c] = uStack_188;
      param_1[0x4d] = uStack_184;
      param_1[0x4e] = local_180;
      param_1[0x4f] = uStack_17c;
      param_1[0x50] = uStack_178;
      param_1[0x51] = uStack_174;
      param_1[0x52] = uStack_170;
      param_1[0x53] = uStack_16c;
      param_1[2] = local_2b0;
      param_1[3] = local_2ac;
      param_1[4] = local_2a8;
      param_1[5] = local_2a4;
      param_1[6] = local_2a0;
      param_1[7] = local_29c;
      *param_1 = local_294;
      param_1[0x48] = local_198;
      param_1[1] = local_290;
      goto LAB_007290bc;
    }
  }
  param_1[0x48] = 0x80000000;
  FUN_007254b8(&local_2b0);
  FUN_01be6d98(local_294,local_290);
LAB_007290bc:
  FUN_019bb7e0(*param_4,uVar10);
  return;
}

