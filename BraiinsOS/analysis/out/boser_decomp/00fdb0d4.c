// FUN_00fdb0d4 @ 00fdb0d4 size=1036 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fdb0d4(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint local_1c0;
  uint local_188;
  uint uStack_184;
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
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  int local_130;
  int local_12c;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint uStack_bc;
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
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar4 = (uint *)(param_2 + 0x40);
  uVar2 = *puVar4;
  uVar3 = *(uint *)(param_2 + 0x44);
  if (uVar3 != 0 || uVar3 < (3 < uVar2)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      uVar3 = local_8c;
      uVar2 = local_90;
      if (local_90 != 3 || local_8c != 0) {
        FUN_01bed4e2(&local_188,&local_80,0x58);
        local_1c0 = local_84;
        uVar5 = local_88;
LAB_00fdb46c:
        param_1[0x10] = local_158;
        param_1[0x11] = uStack_154;
        param_1[0x12] = uStack_150;
        param_1[0x13] = uStack_14c;
        param_1[0x14] = uStack_148;
        param_1[0x15] = local_144;
        param_1[0x16] = uStack_140;
        param_1[0x17] = uStack_13c;
        param_1[0x18] = uStack_138;
        param_1[0x19] = uStack_134;
LAB_00fdb4a4:
        param_1[4] = local_188;
        param_1[5] = uStack_184;
        param_1[6] = uStack_180;
        param_1[7] = uStack_17c;
        param_1[8] = uStack_178;
        param_1[9] = uStack_174;
        param_1[10] = local_170;
        param_1[0xb] = uStack_16c;
        param_1[0xc] = uStack_168;
        param_1[0xd] = uStack_164;
        param_1[0xe] = uStack_160;
        param_1[0xf] = uStack_15c;
        *param_1 = uVar2;
        param_1[1] = uVar3;
        param_1[2] = uVar5;
        param_1[3] = local_1c0;
        return;
      }
      if (local_88 == 0) {
        uVar5 = 5;
        local_1c0 = 0;
      }
      else {
        local_c4 = local_84;
        local_c8 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_c8);
        uVar5 = local_88;
        uVar2 = local_88;
        local_1c0 = local_84;
        local_c0 = local_80;
        uStack_bc = uStack_7c;
        uStack_b8 = uStack_78;
        uStack_b4 = uStack_74;
        uStack_b0 = local_70;
        uStack_ac = uStack_6c;
        local_a8 = local_68;
        uStack_a4 = uStack_64;
        uStack_a0 = uStack_60;
        uStack_9c = uStack_5c;
        uStack_98 = uStack_58;
        uStack_94 = uStack_54;
        if (local_90 != 3 || local_8c != 0) {
          local_158 = local_50;
          uStack_154 = uStack_4c;
          uStack_150 = uStack_48;
          uStack_14c = uStack_44;
          uStack_148 = uStack_40;
          local_144 = local_3c;
          uStack_140 = uStack_38;
          uStack_13c = uStack_34;
          uStack_138 = uStack_30;
          uStack_134 = uStack_2c;
          uVar2 = local_90;
          uVar3 = local_8c;
          local_188 = local_c0;
          uStack_184 = uStack_bc;
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
          goto LAB_00fdb46c;
        }
        if (local_88 == 5 && local_84 == 0) {
          uVar5 = 5;
          local_1c0 = 0;
        }
        else {
          local_88 = local_80;
          local_84 = uStack_7c;
          local_80 = uStack_78;
          uStack_7c = uStack_74;
          uStack_78 = local_70;
          uStack_74 = uStack_6c;
          local_70 = local_68;
          uStack_6c = uStack_64;
          local_68 = uStack_60;
          uStack_64 = uStack_5c;
          uStack_60 = uStack_58;
          uStack_5c = uStack_54;
          uVar3 = *puVar4;
          local_90 = uVar2;
          local_8c = local_1c0;
          if ((uVar3 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar3 < 4) || (uVar3 & 6) != 4)) {
            FUN_005f6588(puVar4);
          }
          *puVar4 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          local_188 = local_c0;
          uStack_184 = uStack_bc;
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
      }
      if (uVar5 != 5 || local_1c0 != 0) {
        uVar2 = 3;
        uVar3 = 0;
        goto LAB_00fdb4a4;
      }
      FUN_01a71074(&local_90,param_2,param_3);
      uVar3 = local_8c;
      uVar2 = local_90;
      if (local_90 == 4 && local_8c == 0) {
        uVar2 = 5;
LAB_00fdb4d0:
        *param_1 = uVar2;
        param_1[1] = 0;
        return;
      }
      if (local_90 != 3 || local_8c != 0) {
        FUN_01bed4e2((int)param_1 + 9,(int)&local_88 + 1,0x5f);
        *param_1 = uVar2;
        param_1[1] = uVar3;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_88;
        return;
      }
      if ((local_88 & 1) == 0) {
        FUN_01a72290(&local_130,param_2);
        if (local_130 == 3 && local_12c == 0) {
          uVar2 = 4;
          goto LAB_00fdb4d0;
        }
        uVar2 = *puVar4;
        if ((uVar2 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar2 < 4) || (uVar2 & 6) != 4)) {
          FUN_005f6588(puVar4);
        }
        FUN_01bed4e2(puVar4,&local_130,0x68);
      }
      uVar2 = *puVar4;
      uVar3 = *(uint *)(param_2 + 0x44);
    } while (uVar3 != 0 || uVar3 < (3 < uVar2));
  }
  *puVar4 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar5 = 4;
  uVar1 = 0;
  if (uVar2 != 3 || uVar3 != 0) {
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x60);
    uVar5 = uVar2;
    uVar1 = uVar3;
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  FUN_01bed4e2(param_1 + 2,&local_90,0x60);
  return;
}

