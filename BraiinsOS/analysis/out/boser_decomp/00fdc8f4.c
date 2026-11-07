// FUN_00fdc8f4 @ 00fdc8f4 size=868 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fdc8f4(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_210 [88];
  undefined1 auStack_1b8 [88];
  int local_160;
  int local_15c;
  uint local_f8;
  uint local_f4;
  uint auStack_f0 [22];
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  undefined1 auStack_80 [92];
  
  puVar3 = (uint *)(param_2 + 0x40);
  uVar6 = *puVar3;
  uVar7 = *(uint *)(param_2 + 0x44);
  if (uVar7 != 0 || uVar7 < (3 < uVar6)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_98,param_2);
      if (local_98 != 3 || local_94 != 0) {
        puVar3 = &local_88;
        uVar6 = local_98;
        uVar7 = local_94;
        uVar4 = local_90;
        uVar8 = uStack_8c;
LAB_00fdcbe8:
        FUN_01bed4e2(auStack_1b8,puVar3,0x58);
LAB_00fdcbf0:
        FUN_01bed4e2(auStack_210,auStack_1b8,0x58);
        FUN_01bed4e2(param_1 + 6,auStack_210,0x58);
        *param_1 = 5;
        param_1[1] = 0;
        param_1[2] = uVar6;
        param_1[3] = uVar7;
        param_1[4] = uVar4;
        param_1[5] = uVar8;
        return;
      }
      if (local_90 != 0) {
        local_f4 = uStack_8c;
        local_f8 = local_90;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_98,*(undefined4 *)(param_2 + 0xe0),&local_f8);
        uVar8 = local_84;
        uVar4 = local_88;
        uVar7 = uStack_8c;
        uVar6 = local_90;
        uVar2 = local_94;
        uVar1 = local_98;
        FUN_01bed4e2(auStack_f0,auStack_80,0x58);
        if ((uVar1 & 7) != 5) {
          if (uVar1 == 6) {
            puVar3 = auStack_f0;
            goto LAB_00fdcbe8;
          }
          uVar5 = *puVar3;
          if ((uVar5 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar5 < 4) || (uVar5 & 6) != 4)) {
            FUN_005f6588(puVar3);
          }
          *puVar3 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          FUN_01bed4e2(auStack_1b8,auStack_f0,0x58);
          if (uVar1 == 6 && uVar2 == 0) goto LAB_00fdcbf0;
          FUN_01bed4e2(auStack_210,auStack_1b8,0x58);
          if (uVar1 != 5 || uVar2 != 0) {
            FUN_01bed4e2(param_1 + 6,auStack_210,0x58);
            *param_1 = uVar1;
            param_1[1] = uVar2;
            param_1[2] = uVar6;
            param_1[3] = uVar7;
            param_1[4] = uVar4;
            param_1[5] = uVar8;
            return;
          }
        }
      }
      FUN_01a71074(&local_98,param_2,param_3);
      if (local_98 == 4 && local_94 == 0) {
        uVar6 = 7;
LAB_00fdcbd4:
        *param_1 = uVar6;
        param_1[1] = 0;
        return;
      }
      if (local_98 != 3 || local_94 != 0) {
        FUN_01bed4e2((int)param_1 + 0x11,(int)&local_90 + 1,0x5f);
        *param_1 = 5;
        param_1[1] = 0;
        param_1[2] = local_98;
        param_1[3] = local_94;
        *(undefined1 *)(param_1 + 4) = (undefined1)local_90;
        return;
      }
      if ((local_90 & 1) == 0) {
        FUN_01a72290(&local_160,param_2);
        if (local_160 == 3 && local_15c == 0) {
          uVar6 = 6;
          goto LAB_00fdcbd4;
        }
        uVar6 = *puVar3;
        if ((uVar6 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar6 < 4) || (uVar6 & 6) != 4)) {
          FUN_005f6588(puVar3);
        }
        FUN_01bed4e2(puVar3,&local_160,0x68);
      }
      uVar6 = *puVar3;
      uVar7 = *(uint *)(param_2 + 0x44);
    } while (uVar7 != 0 || uVar7 < (3 < uVar6));
  }
  *puVar3 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar4 = 6;
  if (uVar6 != 3 || uVar7 != 0) {
    FUN_01bed4e2(&local_98,param_2 + 0x48,0x60);
    uVar4 = 5;
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  FUN_01bed4e2(param_1 + 4,&local_98,0x60);
  return;
}

