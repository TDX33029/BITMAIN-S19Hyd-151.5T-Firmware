// FUN_00fdbc50 @ 00fdbc50 size=720 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fdbc50(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint auStack_150 [20];
  int local_100;
  int local_fc;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [84];
  
  puVar6 = (uint *)(param_2 + 0x40);
  uVar4 = *puVar6;
  uVar5 = *(uint *)(param_2 + 0x44);
  if (uVar5 != 0 || uVar5 < (3 < uVar4)) {
    do {
      (**(code **)(*(int *)(param_2 + 0xe4) + 0x10))(*(undefined4 *)(param_2 + 0xe0));
      FUN_01a71cb4(&local_90,param_2);
      if (local_90 != 3 || local_8c != 0) {
LAB_00fdbe38:
        FUN_01bed4e2(auStack_150,auStack_78,0x50);
        uVar3 = 0x50;
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[4] = local_80;
        param_1[5] = local_7c;
        puVar6 = auStack_150;
        param_1[2] = local_88;
        param_1[3] = local_84;
        param_1 = param_1 + 6;
        goto LAB_00fdbe70;
      }
      if (local_88 != 0) {
        local_94 = local_84;
        local_98 = local_88;
        (**(code **)(*(int *)(param_2 + 0xe4) + 0xc))
                  (&local_90,*(undefined4 *)(param_2 + 0xe0),&local_98);
        if (local_90 != 3 || local_8c != 0) goto LAB_00fdbe38;
        if ((local_88 & 1) != 0) {
          uVar4 = *puVar6;
          if ((uVar4 != 3 || *(int *)(param_2 + 0x44) != 0) &&
             ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar4 < 4) || (uVar4 & 6) != 4)) {
            FUN_005f6588(puVar6);
          }
          *puVar6 = 4;
          *(undefined4 *)(param_2 + 0x44) = 0;
          param_1[3] = local_80;
          param_1[4] = local_7c;
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = local_84;
          return;
        }
      }
      FUN_01a71074(&local_90,param_2,param_3);
      if (local_90 == 4 && local_8c == 0) {
        uVar4 = 5;
LAB_00fdbf14:
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
        FUN_01a72290(&local_100,param_2);
        if (local_100 == 3 && local_fc == 0) {
          uVar4 = 4;
          goto LAB_00fdbf14;
        }
        uVar4 = *puVar6;
        if ((uVar4 != 3 || *(int *)(param_2 + 0x44) != 0) &&
           ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar4 < 4) || (uVar4 & 6) != 4)) {
          FUN_005f6588(puVar6);
        }
        FUN_01bed4e2(puVar6,&local_100,0x68);
      }
      uVar4 = *puVar6;
      uVar5 = *(uint *)(param_2 + 0x44);
    } while (uVar5 != 0 || uVar5 < (3 < uVar4));
  }
  *puVar6 = 3;
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
  param_1 = param_1 + 2;
  puVar6 = &local_90;
  uVar3 = 0x60;
LAB_00fdbe70:
  FUN_01bed4e2(param_1,puVar6,uVar3);
  return;
}

