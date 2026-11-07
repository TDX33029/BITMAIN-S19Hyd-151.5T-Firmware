// FUN_00fdaa18 @ 00fdaa18 size=896 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fdaa18(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_198;
  uint local_194;
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
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  int local_118;
  int local_114;
  uint local_b0;
  uint local_ac;
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
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
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
  
  puVar3 = (uint *)(param_2 + 0x40);
  uVar4 = *puVar3;
  uVar5 = *(uint *)(param_2 + 0x44);
  if (uVar5 != 0 || uVar5 < (3 < uVar4)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      if (local_90 != 3 || local_8c != 0) {
        local_194 = local_88;
        local_198 = local_84;
        FUN_01bed4e2(&local_170,&local_80,0x58);
        uVar4 = local_8c;
LAB_00fdaca8:
        param_1[10] = local_158;
        param_1[0xb] = uStack_154;
        param_1[0xc] = uStack_150;
        param_1[0xd] = uStack_14c;
        param_1[0xe] = uStack_148;
        param_1[0xf] = local_144;
        param_1[0x10] = uStack_140;
        param_1[0x11] = uStack_13c;
        param_1[0x12] = uStack_138;
        param_1[0x13] = uStack_134;
        param_1[0x14] = local_130;
        param_1[0x15] = uStack_12c;
        param_1[0x16] = uStack_128;
        param_1[0x17] = uStack_124;
        param_1[0x18] = uStack_120;
        param_1[0x19] = uStack_11c;
LAB_00fdad5c:
        param_1[4] = local_170;
        param_1[5] = uStack_16c;
        param_1[6] = uStack_168;
        param_1[7] = uStack_164;
        param_1[8] = uStack_160;
        param_1[9] = uStack_15c;
        param_1[2] = local_194;
        *param_1 = local_90;
        param_1[1] = uVar4;
        param_1[3] = local_198;
        return;
      }
      if (local_88 != 0) {
        local_ac = local_84;
        local_b0 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_b0);
        local_198 = local_84;
        local_a8 = local_80;
        uStack_a4 = uStack_7c;
        uStack_a0 = uStack_78;
        uStack_9c = uStack_74;
        uStack_98 = uStack_70;
        uStack_94 = uStack_6c;
        if (local_90 != 3 || local_8c != 0) {
          local_194 = local_88;
          local_158 = local_68;
          uStack_154 = uStack_64;
          uStack_150 = uStack_60;
          uStack_14c = uStack_5c;
          uStack_148 = uStack_58;
          local_144 = local_54;
          uStack_140 = uStack_50;
          uStack_13c = uStack_4c;
          uStack_138 = uStack_48;
          uStack_134 = uStack_44;
          local_130 = local_40;
          uStack_12c = uStack_3c;
          uStack_128 = uStack_38;
          uStack_124 = uStack_34;
          uStack_120 = uStack_30;
          uStack_11c = uStack_2c;
          local_170 = local_80;
          uStack_16c = uStack_7c;
          uStack_168 = uStack_78;
          uStack_164 = uStack_74;
          uStack_160 = uStack_70;
          uStack_15c = uStack_6c;
          uVar4 = local_8c;
          goto LAB_00fdaca8;
        }
        if (local_88 != 5) {
          uVar5 = *puVar3;
          uVar4 = 0;
          local_194 = local_88;
          if ((uVar5 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar5 < 4) || (uVar5 & 6) != 4)) {
            FUN_005f6588(puVar3);
          }
          *puVar3 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          local_90 = 3;
          local_170 = local_a8;
          uStack_16c = uStack_a4;
          uStack_168 = uStack_a0;
          uStack_164 = uStack_9c;
          uStack_160 = uStack_98;
          uStack_15c = uStack_94;
          goto LAB_00fdad5c;
        }
      }
      FUN_01a71074(&local_90,param_2,param_3);
      if (local_90 == 4 && local_8c == 0) {
        uVar4 = 5;
LAB_00fdad8c:
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
        FUN_01a72290(&local_118,param_2);
        if (local_118 == 3 && local_114 == 0) {
          uVar4 = 4;
          goto LAB_00fdad8c;
        }
        uVar4 = *puVar3;
        if ((uVar4 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar4 < 4) || (uVar4 & 6) != 4)) {
          FUN_005f6588(puVar3);
        }
        FUN_01bed4e2(puVar3,&local_118,0x68);
      }
      uVar4 = *puVar3;
      uVar5 = *(uint *)(param_2 + 0x44);
    } while (uVar5 != 0 || uVar5 < (3 < uVar4));
  }
  *puVar3 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar1 = 4;
  uVar2 = 0;
  if (uVar4 != 3 || uVar5 != 0) {
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x60);
    uVar1 = uVar4;
    uVar2 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_01bed4e2(param_1 + 2,&local_90,0x60);
  return;
}

