// FUN_016617c4 @ 016617c4 size=524 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016617c4(uint *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_50;
  undefined1 *local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  int *local_40;
  undefined1 *local_3c;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  uVar6 = 8;
  if (param_3 < 8) {
    uVar6 = param_3;
  }
  local_30 = param_2 + uVar6;
  local_28 = 8;
  local_2c = &DAT_00523849;
  local_34 = param_2;
  FUN_01662110(&local_50,&local_34,&local_28);
  puVar4 = local_48;
  puVar5 = local_44;
  if (8 < param_3) {
    uVar6 = 8;
    do {
      local_34 = param_2 + uVar6;
      uVar6 = uVar6 + 8;
      uVar3 = param_3;
      if (uVar6 < param_3) {
        uVar3 = uVar6;
      }
      local_30 = param_2 + uVar3;
      local_28 = 8;
      local_2c = &DAT_00523849;
      FUN_01662110(&local_50,&local_34,&local_28);
      puVar2 = local_44;
      puVar1 = local_48;
      uVar8 = FUN_01661a1c(puVar4,puVar5,puVar4,puVar5,0,1);
      puVar4 = (undefined4 *)((uint)uVar8 ^ (uint)puVar1);
      puVar5 = (undefined1 *)((uint)((ulonglong)uVar8 >> 0x20) ^ (uint)puVar2);
    } while (uVar6 < param_3);
  }
  FUN_01662e44(&local_50,param_4,param_5,4);
  bVar7 = local_50 != (undefined4 *)&DAT_80000004;
  if (bVar7) {
    param_1[1] = (uint)local_50;
    param_1[2] = (uint)local_4c;
    param_1[3] = (uint)local_48;
  }
  else {
    FUN_01662f5c(&local_68,param_6,4);
    FUN_01662f5c(&local_5c,local_4c,4);
    FUN_01662028(&local_34,extraout_r1,puVar4,puVar5,local_4c,param_6);
    local_3c = &LAB_00632348;
    local_44 = &LAB_00632348;
    local_4c = &LAB_00632348;
    local_50 = &local_68;
    local_48 = &local_5c;
    local_40 = &local_34;
    FUN_00664898(&local_78,&DAT_005b3848,&local_50);
    FUN_0134bd64(local_34,local_30);
    FUN_0134bd64(local_5c,local_58);
    FUN_0134bd64(local_68,local_64);
    param_1[1] = local_78;
    param_1[2] = uStack_74;
    param_1[3] = uStack_70;
  }
  *param_1 = (uint)bVar7;
  return;
}

