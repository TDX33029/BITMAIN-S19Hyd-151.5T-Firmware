// FUN_00fd90ac @ 00fd90ac size=936 calls_out=5 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fd90ac(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined1 auStack_158 [72];
  int local_110;
  int local_10c;
  uint local_a8;
  uint local_a4;
  uint local_a0;
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
  undefined1 auStack_70 [76];
  
  puVar5 = (uint *)(param_2 + 0x40);
  uVar3 = *puVar5;
  uVar4 = *(uint *)(param_2 + 0x44);
  if (uVar4 != 0 || uVar4 < (3 < uVar3)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      if (local_90 != 3 || local_8c != 0) {
        local_17c = local_84;
        FUN_01bed4e2(&local_168,&local_80,0x58);
        uVar3 = local_88;
LAB_00fd93ec:
        local_178 = local_168;
        uStack_174 = uStack_164;
        uStack_170 = uStack_160;
        uStack_16c = uStack_15c;
        FUN_01bed4e2(param_1 + 8,auStack_158,0x48);
LAB_00fd9418:
        param_1[4] = local_178;
        param_1[5] = uStack_174;
        param_1[6] = uStack_170;
        param_1[7] = uStack_16c;
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = uVar3;
        param_1[3] = local_17c;
        return;
      }
      if (local_88 == 0) {
        uVar3 = 2;
        local_17c = 0;
      }
      else {
        local_a4 = local_84;
        local_a8 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_a8);
        uVar3 = local_88;
        local_17c = local_84;
        local_a0 = local_80;
        uStack_9c = uStack_7c;
        uStack_98 = uStack_78;
        uStack_94 = uStack_74;
        if (local_90 != 3 || local_8c != 0) {
          FUN_01bed4e2(auStack_158,auStack_70,0x48);
          local_168 = local_a0;
          uStack_164 = uStack_9c;
          uStack_160 = uStack_98;
          uStack_15c = uStack_94;
          goto LAB_00fd93ec;
        }
        if (local_88 == 2 && local_84 == 0) {
          uVar3 = 2;
          local_17c = 0;
        }
        else {
          uVar4 = *puVar5;
          if ((uVar4 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar4 < 4) || (uVar4 & 6) != 4)) {
            FUN_005f6588(puVar5);
          }
          *puVar5 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          local_168 = local_a0;
          uStack_164 = uStack_9c;
          uStack_160 = uStack_98;
          uStack_15c = uStack_94;
        }
      }
      local_178 = local_168;
      uStack_174 = uStack_164;
      uStack_170 = uStack_160;
      uStack_16c = uStack_15c;
      if (uVar3 != 2 || local_17c != 0) {
        local_90 = 3;
        local_8c = 0;
        goto LAB_00fd9418;
      }
      FUN_01a71074(&local_90,param_2,param_3);
      if (local_90 == 4 && local_8c == 0) {
        uVar3 = 5;
LAB_00fd9444:
        *param_1 = uVar3;
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
        FUN_01a72290(&local_110,param_2);
        if (local_110 == 3 && local_10c == 0) {
          uVar3 = 4;
          goto LAB_00fd9444;
        }
        uVar3 = *puVar5;
        if ((uVar3 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar3 < 4) || (uVar3 & 6) != 4)) {
          FUN_005f6588(puVar5);
        }
        FUN_01bed4e2(puVar5,&local_110,0x68);
      }
      uVar3 = *puVar5;
      uVar4 = *(uint *)(param_2 + 0x44);
    } while (uVar4 != 0 || uVar4 < (3 < uVar3));
  }
  *puVar5 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar1 = 4;
  uVar2 = 0;
  if (uVar3 != 3 || uVar4 != 0) {
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x60);
    uVar1 = uVar3;
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_01bed4e2(param_1 + 2,&local_90,0x60);
  return;
}

