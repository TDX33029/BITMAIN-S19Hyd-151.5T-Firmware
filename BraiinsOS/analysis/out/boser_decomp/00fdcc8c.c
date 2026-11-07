// FUN_00fdcc8c @ 00fdcc8c size=980 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fdcc8c(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  int local_140;
  int local_13c;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
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
  
  puVar3 = (uint *)(param_2 + 0x40);
  uVar4 = *puVar3;
  uVar5 = *(uint *)(param_2 + 0x44);
  if (uVar5 != 0 || uVar5 < (3 < uVar4)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      if (local_90 != 3 || local_8c != 0) {
        FUN_01bed4e2(&local_198,&local_80,0x58);
        uVar4 = local_88;
        uVar5 = local_84;
LAB_00fdcfe8:
        param_1[0x14] = local_158;
        param_1[0x15] = uStack_154;
        param_1[0x16] = uStack_150;
        param_1[0x17] = uStack_14c;
        param_1[0x18] = uStack_148;
        param_1[0x19] = uStack_144;
LAB_00fdd024:
        param_1[4] = local_198;
        param_1[5] = uStack_194;
        param_1[6] = uStack_190;
        param_1[7] = uStack_18c;
        param_1[8] = uStack_188;
        param_1[9] = local_184;
        param_1[10] = uStack_180;
        param_1[0xb] = uStack_17c;
        param_1[0xc] = uStack_178;
        param_1[0xd] = uStack_174;
        param_1[0xe] = local_170;
        param_1[0xf] = uStack_16c;
        param_1[0x10] = uStack_168;
        param_1[0x11] = uStack_164;
        param_1[0x12] = uStack_160;
        param_1[0x13] = uStack_15c;
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = uVar4;
        param_1[3] = uVar5;
        return;
      }
      if (local_88 == 0) {
LAB_00fdcdd4:
        uVar4 = 4;
        uVar5 = 0;
      }
      else {
        local_d4 = local_84;
        local_d8 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_d8);
        uVar5 = local_84;
        uVar4 = local_88;
        local_d0 = local_80;
        uStack_cc = uStack_7c;
        uStack_c8 = uStack_78;
        uStack_c4 = uStack_74;
        uStack_c0 = uStack_70;
        local_bc = local_6c;
        uStack_b8 = uStack_68;
        uStack_b4 = uStack_64;
        uStack_b0 = uStack_60;
        uStack_ac = uStack_5c;
        local_a8 = local_58;
        uStack_a4 = uStack_54;
        uStack_a0 = uStack_50;
        uStack_9c = uStack_4c;
        uStack_98 = uStack_48;
        uStack_94 = uStack_44;
        if (local_90 != 3 || local_8c != 0) {
          local_158 = local_40;
          uStack_154 = uStack_3c;
          uStack_150 = uStack_38;
          uStack_14c = uStack_34;
          uStack_148 = uStack_30;
          uStack_144 = uStack_2c;
          local_198 = local_d0;
          uStack_194 = uStack_cc;
          uStack_190 = uStack_c8;
          uStack_18c = uStack_c4;
          uStack_188 = uStack_c0;
          local_184 = local_bc;
          uStack_180 = uStack_b8;
          uStack_17c = uStack_b4;
          uStack_178 = uStack_b0;
          uStack_174 = uStack_ac;
          local_170 = local_a8;
          uStack_16c = uStack_a4;
          uStack_168 = uStack_a0;
          uStack_164 = uStack_9c;
          uStack_160 = uStack_98;
          uStack_15c = uStack_94;
          goto LAB_00fdcfe8;
        }
        if (local_88 == 4 && local_84 == 0) goto LAB_00fdcdd4;
        uVar2 = *puVar3;
        if ((uVar2 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar2 < 4) || (uVar2 & 6) != 4)) {
          FUN_005f6588(puVar3);
        }
        *puVar3 = 4;
        *(undefined4 *)(param_2 + 0x44) = 0;
        local_198 = local_d0;
        uStack_194 = uStack_cc;
        uStack_190 = uStack_c8;
        uStack_18c = uStack_c4;
        uStack_188 = uStack_c0;
        local_184 = local_bc;
        uStack_180 = uStack_b8;
        uStack_17c = uStack_b4;
        uStack_178 = uStack_b0;
        uStack_174 = uStack_ac;
        local_170 = local_a8;
        uStack_16c = uStack_a4;
        uStack_168 = uStack_a0;
        uStack_164 = uStack_9c;
        uStack_160 = uStack_98;
        uStack_15c = uStack_94;
      }
      if (uVar4 != 4 || uVar5 != 0) {
        local_90 = 3;
        local_8c = 0;
        goto LAB_00fdd024;
      }
      FUN_01a71074(&local_90,param_2,param_3);
      if (local_90 == 4 && local_8c == 0) {
        uVar4 = 5;
LAB_00fdd054:
        *param_1 = uVar4;
        param_1[1] = 0;
        return;
      }
      if (local_90 != 3 || local_8c != 0) {
        FUN_01bed4e2((int)param_1 + 9,(int)&local_88 + 1,0x5f);
        *param_1 = local_90;
        param_1[1] = local_8c;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_88;
        return;
      }
      if ((local_88 & 1) == 0) {
        FUN_01a72290(&local_140,param_2);
        if (local_140 == 3 && local_13c == 0) {
          uVar4 = 4;
          goto LAB_00fdd054;
        }
        uVar4 = *puVar3;
        if ((uVar4 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar4 < 4) || (uVar4 & 6) != 4)) {
          FUN_005f6588(puVar3);
        }
        FUN_01bed4e2(puVar3,&local_140,0x68);
      }
      uVar4 = *puVar3;
      uVar5 = *(uint *)(param_2 + 0x44);
    } while (uVar5 != 0 || uVar5 < (3 < uVar4));
  }
  *puVar3 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar2 = 4;
  uVar1 = 0;
  if (uVar4 != 3 || uVar5 != 0) {
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x60);
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  FUN_01bed4e2(param_1 + 2,&local_90,0x60);
  return;
}

