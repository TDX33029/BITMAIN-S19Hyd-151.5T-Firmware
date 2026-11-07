// FUN_00fd9830 @ 00fd9830 size=664 calls_out=5 calls_in=6
// strings: 

void FUN_00fd9830(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint auStack_158 [22];
  int local_100;
  int local_fc;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 auStack_80 [92];
  
  puVar4 = (uint *)(param_2 + 0x40);
  uVar5 = *puVar4;
  uVar6 = *(uint *)(param_2 + 0x44);
  if (uVar6 != 0 || uVar6 < (3 < uVar5)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      uVar5 = local_84;
      uVar6 = local_8c;
      uVar1 = local_90;
      uVar2 = local_88;
      if (local_90 != 3 || local_8c != 0) {
LAB_00fd99f4:
        FUN_01bed4e2(auStack_158,auStack_80,0x58);
        puVar4 = auStack_158;
        uVar3 = 0x58;
        param_1[1] = uVar6;
        param_1[2] = uVar2;
        *param_1 = uVar1;
        param_1[3] = uVar5;
        param_1 = param_1 + 4;
        goto LAB_00fd9a20;
      }
      if (local_88 != 0) {
        local_94 = local_84;
        local_98 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_98);
        uVar5 = local_84;
        uVar6 = local_8c;
        uVar1 = local_90;
        uVar2 = local_88;
        if (local_90 != 3 || local_8c != 0) goto LAB_00fd99f4;
        if ((local_88 & 1) != 0) {
          uVar5 = *puVar4;
          if ((uVar5 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar5 < 4) || (uVar5 & 6) != 4)) {
            FUN_005f6588(puVar4);
          }
          *puVar4 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = local_84;
          return;
        }
      }
      FUN_01a71074(&local_90,param_2,param_3);
      if (local_90 == 4 && local_8c == 0) {
        uVar5 = 5;
LAB_00fd9abc:
        *param_1 = uVar5;
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
        FUN_01a72290(&local_100,param_2);
        if (local_100 == 3 && local_fc == 0) {
          uVar5 = 4;
          goto LAB_00fd9abc;
        }
        uVar5 = *puVar4;
        if ((uVar5 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar5 < 4) || (uVar5 & 6) != 4)) {
          FUN_005f6588(puVar4);
        }
        FUN_01bed4e2(puVar4,&local_100,0x68);
      }
      uVar5 = *puVar4;
      uVar6 = *(uint *)(param_2 + 0x44);
    } while (uVar6 != 0 || uVar6 < (3 < uVar5));
  }
  *puVar4 = 3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  uVar1 = 4;
  uVar2 = 0;
  if (uVar5 != 3 || uVar6 != 0) {
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x60);
    uVar1 = uVar5;
    uVar2 = uVar6;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1 = param_1 + 2;
  puVar4 = &local_90;
  uVar3 = 0x60;
LAB_00fd9a20:
  FUN_01bed4e2(param_1,puVar4,uVar3);
  return;
}

